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

// Function: sub_00363EC8
// Address: 0x363ec8 - 0x363fd8
void sub_00363EC8_0x363ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363EC8_0x363ec8");
#endif

    switch (ctx->pc) {
        case 0x363ee8u: goto label_363ee8;
        case 0x363f18u: goto label_363f18;
        case 0x363f60u: goto label_363f60;
        case 0x363fa4u: goto label_363fa4;
        default: break;
    }

    ctx->pc = 0x363ec8u;

label_363ec8:
    // 0x363ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x363ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x363ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x363ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x363edc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x363edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x363ee0: 0xc0d9032  jal         func_3640C8
    ctx->pc = 0x363EE0u;
    SET_GPR_U32(ctx, 31, 0x363EE8u);
    ctx->pc = 0x363EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363EE0u;
    // 0x363ee4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3640C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3640C8u, 0x363EE0u, 0x363EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EE8u;
label_363ee8:
    // 0x363ee8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x363ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363eec: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x363EECu;
    {
        const bool branch_taken_0x363eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363eec) {
            ctx->pc = 0x363EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363EECu;
            // 0x363ef0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363FACu;
            goto label_363fac;
        }
    }
    ctx->pc = 0x363EF4u;
    // 0x363ef4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x363ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363ef8: 0x16420025  bne         $s2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x363EF8u;
    {
        const bool branch_taken_0x363ef8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x363EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363EF8u;
        // 0x363efc: 0x26111400  addiu       $s1, $s0, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ef8) {
            ctx->pc = 0x363F90u;
            goto label_363f90;
        }
    }
    ctx->pc = 0x363F00u;
    // 0x363f00: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x363f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x363f04: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x363f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x363f08: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x363f08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363f0c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x363F0Cu;
    {
        const bool branch_taken_0x363f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x363F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363F0Cu;
        // 0x363f10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363f0c) {
            ctx->pc = 0x363F34u;
            goto label_363f34;
        }
    }
    ctx->pc = 0x363F14u;
    // 0x363f14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x363f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_363f18:
    // 0x363f18: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x363f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363f1c: 0x0  nop
    ctx->pc = 0x363f1cu;
    // NOP
    // 0x363f20: 0x0  nop
    ctx->pc = 0x363f20u;
    // NOP
    // 0x363f24: 0x0  nop
    ctx->pc = 0x363f24u;
    // NOP
    // 0x363f28: 0x0  nop
    ctx->pc = 0x363f28u;
    // NOP
    // 0x363f2c: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x363F2Cu;
    {
        const bool branch_taken_0x363f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x363f2c) {
            ctx->pc = 0x363F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363F2Cu;
            // 0x363f30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363f18;
        }
    }
    ctx->pc = 0x363F34u;
label_363f34:
    // 0x363f34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x363f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x363f38: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x363f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x363f3c: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x363f3cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363f40: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x363F40u;
    {
        const bool branch_taken_0x363f40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x363F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363F40u;
        // 0x363f44: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363f40) {
            ctx->pc = 0x363F84u;
            goto label_363f84;
        }
    }
    ctx->pc = 0x363F48u;
    // 0x363f48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x363f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x363f4c: 0x50c20015  beql        $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x363F4Cu;
    {
        const bool branch_taken_0x363f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x363f4c) {
            ctx->pc = 0x363F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363F4Cu;
            // 0x363f50: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363FA4u;
            goto label_363fa4;
        }
    }
    ctx->pc = 0x363F54u;
    // 0x363f54: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x363f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x363f58: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x363f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x363f5c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x363f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_363f60:
    // 0x363f60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x363f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x363f64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x363f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x363f68: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x363f68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363f6c: 0x10470005  beq         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x363F6Cu;
    {
        const bool branch_taken_0x363f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x363F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363F6Cu;
        // 0x363f70: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363f6c) {
            ctx->pc = 0x363F84u;
            goto label_363f84;
        }
    }
    ctx->pc = 0x363F74u;
    // 0x363f74: 0x0  nop
    ctx->pc = 0x363f74u;
    // NOP
    // 0x363f78: 0x0  nop
    ctx->pc = 0x363f78u;
    // NOP
    // 0x363f7c: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x363F7Cu;
    {
        const bool branch_taken_0x363f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x363f7c) {
            ctx->pc = 0x363F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363F7Cu;
            // 0x363f80: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363f60;
        }
    }
    ctx->pc = 0x363F84u;
label_363f84:
    // 0x363f84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x363F84u;
    {
        const bool branch_taken_0x363f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363F84u;
        // 0x363f88: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363f84) {
            ctx->pc = 0x363FA4u;
            goto label_363fa4;
        }
    }
    ctx->pc = 0x363F8Cu;
    // 0x363f8c: 0x0  nop
    ctx->pc = 0x363f8cu;
    // NOP
label_363f90:
    // 0x363f90: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x363f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x363f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f98: 0x26460002  addiu       $a2, $s2, 0x2
    ctx->pc = 0x363f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x363f9c: 0xc0d909a  jal         func_364268
    ctx->pc = 0x363F9Cu;
    SET_GPR_U32(ctx, 31, 0x363FA4u);
    ctx->pc = 0x363FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F9Cu;
    // 0x363fa0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364268u, 0x363F9Cu, 0x363FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363FA4u;
label_363fa4:
    // 0x363fa4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x363fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_363fac:
    // 0x363fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x363facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363fb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x363fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363fb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x363fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x363FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363FB8u;
        // 0x363fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363FC0u;
    // 0x363fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363fc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x363fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363fd0: 0x80d8fb2  j           func_363EC8
    ctx->pc = 0x363FD0u;
    ctx->pc = 0x363FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363FD0u;
    // 0x363fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363EC8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_363ec8;
    ctx->pc = 0x363FD8u;
}
