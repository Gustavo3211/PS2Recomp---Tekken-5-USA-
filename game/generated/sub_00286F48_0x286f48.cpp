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

// Function: sub_00286F48
// Address: 0x286f48 - 0x287030
void sub_00286F48_0x286f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286F48_0x286f48");
#endif

    switch (ctx->pc) {
        case 0x286fa0u: goto label_286fa0;
        case 0x286fc0u: goto label_286fc0;
        case 0x286fd8u: goto label_286fd8;
        case 0x287004u: goto label_287004;
        case 0x287018u: goto label_287018;
        default: break;
    }

    ctx->pc = 0x286f48u;

    // 0x286f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286f4c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x286f4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x286f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286f5c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x286f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286f64: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x286f64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x286f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x286f6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x286f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286f70: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x286F70u;
    {
        const bool branch_taken_0x286f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F70u;
        // 0x286f74: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f70) {
            ctx->pc = 0x286FE0u;
            goto label_286fe0;
        }
    }
    ctx->pc = 0x286F78u;
    // 0x286f78: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x286f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x286f7c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x286f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x286f80: 0x26105d20  addiu       $s0, $s0, 0x5D20
    ctx->pc = 0x286f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23840));
    // 0x286f84: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x286f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x286f88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286f8c: 0x24a53b90  addiu       $a1, $a1, 0x3B90
    ctx->pc = 0x286f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15248));
    // 0x286f90: 0x5c3021  addu        $a2, $v0, $gp
    ctx->pc = 0x286f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x286f94: 0x8cc6b318  lw          $a2, -0x4CE8($a2)
    ctx->pc = 0x286f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294947608)));
    // 0x286f98: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x286F98u;
    SET_GPR_U32(ctx, 31, 0x286FA0u);
    ctx->pc = 0x286F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F98u;
    // 0x286f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x286F98u, 0x286FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FA0u;
label_286fa0:
    // 0x286fa0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x286fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x286fa4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x286fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x286fa8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x286fac: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x286facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x286fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fb4: 0x24a55ee0  addiu       $a1, $a1, 0x5EE0
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24288));
    // 0x286fb8: 0xc0d4462  jal         func_351188
    ctx->pc = 0x286FB8u;
    SET_GPR_U32(ctx, 31, 0x286FC0u);
    ctx->pc = 0x286FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286FB8u;
    // 0x286fbc: 0x26260034  addiu       $a2, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351188u, 0x286FB8u, 0x286FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FC0u;
label_286fc0:
    // 0x286fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fc8: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x286FC8u;
    {
        const bool branch_taken_0x286fc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FC8u;
        // 0x286fcc: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fc8) {
            ctx->pc = 0x287018u;
            goto label_287018;
        }
    }
    ctx->pc = 0x286FD0u;
    // 0x286fd0: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286FD0u;
    SET_GPR_U32(ctx, 31, 0x286FD8u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286FD0u, 0x286FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FD8u;
label_286fd8:
    // 0x286fd8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x286FD8u;
    {
        const bool branch_taken_0x286fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FD8u;
        // 0x286fdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fd8) {
            ctx->pc = 0x28701Cu;
            goto label_28701c;
        }
    }
    ctx->pc = 0x286FE0u;
label_286fe0:
    // 0x286fe0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286fe4: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x286fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x286fe8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286fec: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x286FECu;
    {
        const bool branch_taken_0x286fec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x286FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FECu;
        // 0x286ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fec) {
            ctx->pc = 0x28701Cu;
            goto label_28701c;
        }
    }
    ctx->pc = 0x286FF4u;
    // 0x286ff4: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x286FF4u;
    {
        const bool branch_taken_0x286ff4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x286ff4) {
            ctx->pc = 0x287010u;
            goto label_287010;
        }
    }
    ctx->pc = 0x286FFCu;
    // 0x286ffc: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286FFCu;
    SET_GPR_U32(ctx, 31, 0x287004u);
    ctx->pc = 0x287000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286FFCu;
    // 0x287000: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286FFCu, 0x287004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287004u;
label_287004:
    // 0x287004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x287004u;
    {
        const bool branch_taken_0x287004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287004u;
        // 0x287008: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287004) {
            ctx->pc = 0x28701Cu;
            goto label_28701c;
        }
    }
    ctx->pc = 0x28700Cu;
    // 0x28700c: 0x0  nop
    ctx->pc = 0x28700cu;
    // NOP
label_287010:
    // 0x287010: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x287010u;
    SET_GPR_U32(ctx, 31, 0x287018u);
    ctx->pc = 0x287014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287010u;
    // 0x287014: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x287010u, 0x287018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287018u;
label_287018:
    // 0x287018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28701c:
    // 0x28701c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28701cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287020: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x287020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287024: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x287024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x287028: 0x3e00008  jr          $ra
    ctx->pc = 0x287028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287028u;
        // 0x28702c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287030u;
}
