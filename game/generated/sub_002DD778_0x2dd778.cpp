#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DD778
// Address: 0x2dd778 - 0x2dd820
void sub_002DD778_0x2dd778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD778_0x2dd778");
#endif

    switch (ctx->pc) {
        case 0x2dd7d8u: goto label_2dd7d8;
        case 0x2dd7e8u: goto label_2dd7e8;
        case 0x2dd7f8u: goto label_2dd7f8;
        case 0x2dd808u: goto label_2dd808;
        case 0x2dd810u: goto label_2dd810;
        default: break;
    }

    ctx->pc = 0x2dd778u;

    // 0x2dd778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dd778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd77c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd784: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dd784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dd788: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2dd788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2dd78c: 0x10450020  beq         $v0, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DD78Cu;
    {
        const bool branch_taken_0x2dd78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD78Cu;
        // 0x2dd790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd78c) {
            ctx->pc = 0x2DD810u;
            goto label_2dd810;
        }
    }
    ctx->pc = 0x2DD794u;
    // 0x2dd794: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DD794u;
    {
        const bool branch_taken_0x2dd794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD794u;
        // 0x2dd798: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd794) {
            ctx->pc = 0x2DD7E0u;
            goto label_2dd7e0;
        }
    }
    ctx->pc = 0x2DD79Cu;
    // 0x2dd79c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD79Cu;
    {
        const bool branch_taken_0x2dd79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd79c) {
            ctx->pc = 0x2DD7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD79Cu;
            // 0x2dd7a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD7B8u;
            goto label_2dd7b8;
        }
    }
    ctx->pc = 0x2DD7A4u;
    // 0x2dd7a4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DD7A4u;
    {
        const bool branch_taken_0x2dd7a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7a4) {
            ctx->pc = 0x2DD7D0u;
            goto label_2dd7d0;
        }
    }
    ctx->pc = 0x2DD7ACu;
    // 0x2dd7ac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2DD7ACu;
    {
        const bool branch_taken_0x2dd7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7ACu;
        // 0x2dd7b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7ac) {
            ctx->pc = 0x2DD814u;
            goto label_2dd814;
        }
    }
    ctx->pc = 0x2DD7B4u;
    // 0x2dd7b4: 0x0  nop
    ctx->pc = 0x2dd7b4u;
    // NOP
label_2dd7b8:
    // 0x2dd7b8: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DD7B8u;
    {
        const bool branch_taken_0x2dd7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7B8u;
        // 0x2dd7bc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7b8) {
            ctx->pc = 0x2DD7F0u;
            goto label_2dd7f0;
        }
    }
    ctx->pc = 0x2DD7C0u;
    // 0x2dd7c0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DD7C0u;
    {
        const bool branch_taken_0x2dd7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dd7c0) {
            ctx->pc = 0x2DD800u;
            goto label_2dd800;
        }
    }
    ctx->pc = 0x2DD7C8u;
    // 0x2dd7c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DD7C8u;
    {
        const bool branch_taken_0x2dd7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7C8u;
        // 0x2dd7cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7c8) {
            ctx->pc = 0x2DD814u;
            goto label_2dd814;
        }
    }
    ctx->pc = 0x2DD7D0u;
label_2dd7d0:
    // 0x2dd7d0: 0xc0b7618  jal         func_2DD860
    ctx->pc = 0x2DD7D0u;
    SET_GPR_U32(ctx, 31, 0x2DD7D8u);
    ctx->pc = 0x2DD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7D0u;
    // 0x2dd7d4: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD860u, 0x2DD7D0u, 0x2DD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7D8u;
label_2dd7d8:
    // 0x2dd7d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DD7D8u;
    {
        const bool branch_taken_0x2dd7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7d8) {
            ctx->pc = 0x2DD808u;
            goto label_2dd808;
        }
    }
    ctx->pc = 0x2DD7E0u;
label_2dd7e0:
    // 0x2dd7e0: 0xc0b7620  jal         func_2DD880
    ctx->pc = 0x2DD7E0u;
    SET_GPR_U32(ctx, 31, 0x2DD7E8u);
    ctx->pc = 0x2DD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7E0u;
    // 0x2dd7e4: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD880u, 0x2DD7E0u, 0x2DD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7E8u;
label_2dd7e8:
    // 0x2dd7e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD7E8u;
    {
        const bool branch_taken_0x2dd7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7e8) {
            ctx->pc = 0x2DD808u;
            goto label_2dd808;
        }
    }
    ctx->pc = 0x2DD7F0u;
label_2dd7f0:
    // 0x2dd7f0: 0xc0b7610  jal         func_2DD840
    ctx->pc = 0x2DD7F0u;
    SET_GPR_U32(ctx, 31, 0x2DD7F8u);
    ctx->pc = 0x2DD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7F0u;
    // 0x2dd7f4: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD840u, 0x2DD7F0u, 0x2DD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7F8u;
label_2dd7f8:
    // 0x2dd7f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD7F8u;
    {
        const bool branch_taken_0x2dd7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7f8) {
            ctx->pc = 0x2DD808u;
            goto label_2dd808;
        }
    }
    ctx->pc = 0x2DD800u;
label_2dd800:
    // 0x2dd800: 0xc0b7608  jal         func_2DD820
    ctx->pc = 0x2DD800u;
    SET_GPR_U32(ctx, 31, 0x2DD808u);
    ctx->pc = 0x2DD804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD800u;
    // 0x2dd804: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD820u, 0x2DD800u, 0x2DD808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD808u;
label_2dd808:
    // 0x2dd808: 0xc0b75ca  jal         func_2DD728
    ctx->pc = 0x2DD808u;
    SET_GPR_U32(ctx, 31, 0x2DD810u);
    ctx->pc = 0x2DD80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD808u;
    // 0x2dd80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD728u, 0x2DD808u, 0x2DD810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD810u;
label_2dd810:
    // 0x2dd810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd814:
    // 0x2dd814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dd814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd818: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD818u;
        // 0x2dd81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD820u;
}
