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

// Function: sub_00118E88
// Address: 0x118e88 - 0x118fa0
void sub_00118E88_0x118e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118E88_0x118e88");
#endif

    switch (ctx->pc) {
        case 0x118edcu: goto label_118edc;
        case 0x118ef8u: goto label_118ef8;
        case 0x118f04u: goto label_118f04;
        case 0x118f18u: goto label_118f18;
        case 0x118f30u: goto label_118f30;
        case 0x118f44u: goto label_118f44;
        case 0x118f50u: goto label_118f50;
        case 0x118f68u: goto label_118f68;
        default: break;
    }

    ctx->pc = 0x118e88u;

    // 0x118e88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x118e8c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x118e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x118e90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x118e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x118e94: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x118e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x118e98: 0x8c5324e8  lw          $s3, 0x24E8($v0)
    ctx->pc = 0x118e98u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x1324E8u));
    // 0x118e9c: 0x24671998  addiu       $a3, $v1, 0x1998
    ctx->pc = 0x118e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6552));
    // 0x118ea0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x118ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x118ea4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x118ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x118ea8: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x118ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x118eac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x118eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x118eb0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x118eb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118eb4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x118eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x118eb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x118eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ebc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x118ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x118ec0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x118ec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ec4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x118ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x118ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ecc: 0x8c641998  lw          $a0, 0x1998($v1)
    ctx->pc = 0x118eccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x131998u));
    // 0x118ed0: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x118ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x13199Cu));
    // 0x118ed4: 0xc04639e  jal         func_118E78
    ctx->pc = 0x118ED4u;
    SET_GPR_U32(ctx, 31, 0x118EDCu);
    ctx->pc = 0x118ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118ED4u;
    // 0x118ed8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E78u, 0x118ED4u, 0x118EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118EDCu;
label_118edc:
    // 0x118edc: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x118edcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x118ee0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x118ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x118ee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ee8: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x118ee8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x118eec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x118eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ef0: 0xc04638e  jal         func_118E38
    ctx->pc = 0x118EF0u;
    SET_GPR_U32(ctx, 31, 0x118EF8u);
    ctx->pc = 0x118EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118EF0u;
    // 0x118ef4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E38u, 0x118EF0u, 0x118EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118EF8u;
label_118ef8:
    // 0x118ef8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x118ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x118efc: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x118EFCu;
    SET_GPR_U32(ctx, 31, 0x118F04u);
    ctx->pc = 0x118F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118EFCu;
    // 0x118f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x118EFCu, 0x118F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F04u;
label_118f04:
    // 0x118f04: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x118f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118f08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x118f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f10: 0xc04638e  jal         func_118E38
    ctx->pc = 0x118F10u;
    SET_GPR_U32(ctx, 31, 0x118F18u);
    ctx->pc = 0x118F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F10u;
    // 0x118f14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E38u, 0x118F10u, 0x118F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F18u;
label_118f18:
    // 0x118f18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x118f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x118f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x118f20: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x118F20u;
    {
        const bool branch_taken_0x118f20 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x118F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F20u;
        // 0x118f24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f20) {
            ctx->pc = 0x118F78u;
            goto label_118f78;
        }
    }
    ctx->pc = 0x118F28u;
    // 0x118f28: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x118f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f2c: 0x0  nop
    ctx->pc = 0x118f2cu;
    // NOP
label_118f30:
    // 0x118f30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x118f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x118f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118f3c: 0xc04638e  jal         func_118E38
    ctx->pc = 0x118F3Cu;
    SET_GPR_U32(ctx, 31, 0x118F44u);
    ctx->pc = 0x118F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F3Cu;
    // 0x118f40: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E38u, 0x118F3Cu, 0x118F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F44u;
label_118f44:
    // 0x118f44: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x118f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x118f48: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x118F48u;
    SET_GPR_U32(ctx, 31, 0x118F50u);
    ctx->pc = 0x118F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F48u;
    // 0x118f4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x118F48u, 0x118F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F50u;
label_118f50:
    // 0x118f50: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x118f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118f54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x118f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118f58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x118f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x118f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f60: 0xc04638e  jal         func_118E38
    ctx->pc = 0x118F60u;
    SET_GPR_U32(ctx, 31, 0x118F68u);
    ctx->pc = 0x118F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F60u;
    // 0x118f64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E38u, 0x118F60u, 0x118F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F68u;
label_118f68:
    // 0x118f68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x118f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f6c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x118f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x118f70: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x118F70u;
    {
        const bool branch_taken_0x118f70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x118F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F70u;
        // 0x118f74: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f70) {
            ctx->pc = 0x118F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118f30;
        }
    }
    ctx->pc = 0x118F78u;
label_118f78:
    // 0x118f78: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x118f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f7c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118f80: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x118f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118f84: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x118f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118f88: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x118f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118f8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x118f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118f90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x118f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x118f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f98: 0x3e00008  jr          $ra
    ctx->pc = 0x118F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F98u;
        // 0x118f9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118FA0u;
}
