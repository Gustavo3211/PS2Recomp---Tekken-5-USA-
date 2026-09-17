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

// Function: sub_00287030
// Address: 0x287030 - 0x2870f8
void sub_00287030_0x287030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287030_0x287030");
#endif

    switch (ctx->pc) {
        case 0x287084u: goto label_287084;
        case 0x28709cu: goto label_28709c;
        case 0x2870ccu: goto label_2870cc;
        case 0x2870e0u: goto label_2870e0;
        default: break;
    }

    ctx->pc = 0x287030u;

    // 0x287030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x287034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28703c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x287040: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x287040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x287044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x287048: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x287048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28704c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28704Cu;
    {
        const bool branch_taken_0x28704c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28704Cu;
        // 0x287050: 0x26070034  addiu       $a3, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28704c) {
            ctx->pc = 0x2870A8u;
            goto label_2870a8;
        }
    }
    ctx->pc = 0x287054u;
    // 0x287054: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x287054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x287058: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x287058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28705c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x287060: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x287060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x287064: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x287064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x287068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x287068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28706c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x28706cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x287070: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x287070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x287074: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x287074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x287078: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x287078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x28707c: 0xc0d4716  jal         func_351C58
    ctx->pc = 0x28707Cu;
    SET_GPR_U32(ctx, 31, 0x287084u);
    ctx->pc = 0x287080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28707Cu;
    // 0x287080: 0x24c65ee0  addiu       $a2, $a2, 0x5EE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C58u, 0x28707Cu, 0x287084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287084u;
label_287084:
    // 0x287084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287088: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28708c: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28708Cu;
    {
        const bool branch_taken_0x28708c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x287090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28708Cu;
        // 0x287090: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28708c) {
            ctx->pc = 0x2870E0u;
            goto label_2870e0;
        }
    }
    ctx->pc = 0x287094u;
    // 0x287094: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x287094u;
    SET_GPR_U32(ctx, 31, 0x28709Cu);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x287094u, 0x28709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28709Cu;
label_28709c:
    // 0x28709c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28709Cu;
    {
        const bool branch_taken_0x28709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28709Cu;
        // 0x2870a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28709c) {
            ctx->pc = 0x2870E4u;
            goto label_2870e4;
        }
    }
    ctx->pc = 0x2870A4u;
    // 0x2870a4: 0x0  nop
    ctx->pc = 0x2870a4u;
    // NOP
label_2870a8:
    // 0x2870a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2870a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2870ac: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x2870acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2870b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2870b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2870b4: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2870B4u;
    {
        const bool branch_taken_0x2870b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2870B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870B4u;
        // 0x2870b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870b4) {
            ctx->pc = 0x2870E4u;
            goto label_2870e4;
        }
    }
    ctx->pc = 0x2870BCu;
    // 0x2870bc: 0x4e10006  bgez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2870BCu;
    {
        const bool branch_taken_0x2870bc = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2870bc) {
            ctx->pc = 0x2870D8u;
            goto label_2870d8;
        }
    }
    ctx->pc = 0x2870C4u;
    // 0x2870c4: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2870C4u;
    SET_GPR_U32(ctx, 31, 0x2870CCu);
    ctx->pc = 0x2870C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870C4u;
    // 0x2870c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2870C4u, 0x2870CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870CCu;
label_2870cc:
    // 0x2870cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2870CCu;
    {
        const bool branch_taken_0x2870cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870CCu;
        // 0x2870d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870cc) {
            ctx->pc = 0x2870E4u;
            goto label_2870e4;
        }
    }
    ctx->pc = 0x2870D4u;
    // 0x2870d4: 0x0  nop
    ctx->pc = 0x2870d4u;
    // NOP
label_2870d8:
    // 0x2870d8: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2870D8u;
    SET_GPR_U32(ctx, 31, 0x2870E0u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2870D8u, 0x2870E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870E0u;
label_2870e0:
    // 0x2870e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2870e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2870e4:
    // 0x2870e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2870e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2870e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2870e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2870ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2870ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2870F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870ECu;
        // 0x2870f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2870ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870F4u;
    // 0x2870f4: 0x0  nop
    ctx->pc = 0x2870f4u;
    // NOP
    ctx->pc = 0x2870f8u;
}
