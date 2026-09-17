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

// Function: sub_004B6918
// Address: 0x4b6918 - 0x4b6990
void sub_004B6918_0x4b6918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6918_0x4b6918");
#endif

    switch (ctx->pc) {
        case 0x4b6930u: goto label_4b6930;
        case 0x4b6944u: goto label_4b6944;
        case 0x4b6958u: goto label_4b6958;
        case 0x4b6968u: goto label_4b6968;
        case 0x4b6978u: goto label_4b6978;
        default: break;
    }

    ctx->pc = 0x4b6918u;

    // 0x4b6918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b6918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b691c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b6920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b6920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b6924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b6924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b6928: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4B6928u;
    SET_GPR_U32(ctx, 31, 0x4B6930u);
    ctx->pc = 0x4B692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6928u;
    // 0x4b692c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4B6928u, 0x4B6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6930u;
label_4b6930:
    // 0x4b6930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b6930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6934: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B6934u;
    {
        const bool branch_taken_0x4b6934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6934u;
        // 0x4b6938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6934) {
            ctx->pc = 0x4B6978u;
            goto label_4b6978;
        }
    }
    ctx->pc = 0x4B693Cu;
    // 0x4b693c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B693Cu;
    SET_GPR_U32(ctx, 31, 0x4B6944u);
    ctx->pc = 0x4B6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B693Cu;
    // 0x4b6940: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B693Cu, 0x4B6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6944u;
label_4b6944:
    // 0x4b6944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b6944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6948: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6948u;
    {
        const bool branch_taken_0x4b6948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6948u;
        // 0x4b694c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6948) {
            ctx->pc = 0x4B6960u;
            goto label_4b6960;
        }
    }
    ctx->pc = 0x4B6950u;
    // 0x4b6950: 0xc12da2e  jal         func_4B68B8
    ctx->pc = 0x4B6950u;
    SET_GPR_U32(ctx, 31, 0x4B6958u);
    ctx->pc = 0x4B68B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B68B8u, 0x4B6950u, 0x4B6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6958u;
label_4b6958:
    // 0x4b6958: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B6958u;
    {
        const bool branch_taken_0x4b6958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6958u;
        // 0x4b695c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6958) {
            ctx->pc = 0x4B697Cu;
            goto label_4b697c;
        }
    }
    ctx->pc = 0x4B6960u;
label_4b6960:
    // 0x4b6960: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4B6960u;
    SET_GPR_U32(ctx, 31, 0x4B6968u);
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4B6960u, 0x4B6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6968u;
label_4b6968:
    // 0x4b6968: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B6968u;
    {
        const bool branch_taken_0x4b6968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6968u;
        // 0x4b696c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6968) {
            ctx->pc = 0x4B6978u;
            goto label_4b6978;
        }
    }
    ctx->pc = 0x4B6970u;
    // 0x4b6970: 0xc12da22  jal         func_4B6888
    ctx->pc = 0x4B6970u;
    SET_GPR_U32(ctx, 31, 0x4B6978u);
    ctx->pc = 0x4B6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6888u, 0x4B6970u, 0x4B6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6978u;
label_4b6978:
    // 0x4b6978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b6978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b697c:
    // 0x4b697c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b697cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b6980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b6980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b6984: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6984u;
        // 0x4b6988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B698Cu;
    // 0x4b698c: 0x0  nop
    ctx->pc = 0x4b698cu;
    // NOP
    ctx->pc = 0x4b6990u;
}
