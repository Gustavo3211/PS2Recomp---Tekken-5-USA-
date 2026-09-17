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

// Function: sub_00343F30
// Address: 0x343f30 - 0x343ff0
void sub_00343F30_0x343f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343F30_0x343f30");
#endif

    switch (ctx->pc) {
        case 0x343f30u: goto label_343f30;
        case 0x343f34u: goto label_343f34;
        case 0x343f38u: goto label_343f38;
        case 0x343f3cu: goto label_343f3c;
        case 0x343f40u: goto label_343f40;
        case 0x343f44u: goto label_343f44;
        case 0x343f48u: goto label_343f48;
        case 0x343f4cu: goto label_343f4c;
        case 0x343f50u: goto label_343f50;
        case 0x343f54u: goto label_343f54;
        case 0x343f58u: goto label_343f58;
        case 0x343f5cu: goto label_343f5c;
        case 0x343f60u: goto label_343f60;
        case 0x343f64u: goto label_343f64;
        case 0x343f68u: goto label_343f68;
        case 0x343f6cu: goto label_343f6c;
        case 0x343f70u: goto label_343f70;
        case 0x343f74u: goto label_343f74;
        case 0x343f78u: goto label_343f78;
        case 0x343f7cu: goto label_343f7c;
        case 0x343f80u: goto label_343f80;
        case 0x343f84u: goto label_343f84;
        case 0x343f88u: goto label_343f88;
        case 0x343f8cu: goto label_343f8c;
        case 0x343f90u: goto label_343f90;
        case 0x343f94u: goto label_343f94;
        case 0x343f98u: goto label_343f98;
        case 0x343f9cu: goto label_343f9c;
        case 0x343fa0u: goto label_343fa0;
        case 0x343fa4u: goto label_343fa4;
        case 0x343fa8u: goto label_343fa8;
        case 0x343facu: goto label_343fac;
        case 0x343fb0u: goto label_343fb0;
        case 0x343fb4u: goto label_343fb4;
        case 0x343fb8u: goto label_343fb8;
        case 0x343fbcu: goto label_343fbc;
        case 0x343fc0u: goto label_343fc0;
        case 0x343fc4u: goto label_343fc4;
        case 0x343fc8u: goto label_343fc8;
        case 0x343fccu: goto label_343fcc;
        case 0x343fd0u: goto label_343fd0;
        case 0x343fd4u: goto label_343fd4;
        case 0x343fd8u: goto label_343fd8;
        case 0x343fdcu: goto label_343fdc;
        case 0x343fe0u: goto label_343fe0;
        case 0x343fe4u: goto label_343fe4;
        case 0x343fe8u: goto label_343fe8;
        case 0x343fecu: goto label_343fec;
        default: break;
    }

    ctx->pc = 0x343f30u;

label_343f30:
    // 0x343f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_343f34:
    // 0x343f34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x343f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_343f38:
    // 0x343f38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343f3c:
    // 0x343f3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x343f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_343f40:
    // 0x343f40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x343f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_343f44:
    // 0x343f44: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x343f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_343f48:
    // 0x343f48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_343f4c:
    if (ctx->pc == 0x343F4Cu) {
        ctx->pc = 0x343F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F48u;
        // 0x343f4c: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F50u;
        goto label_343f50;
    }
    ctx->pc = 0x343F48u;
    {
        const bool branch_taken_0x343f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F48u;
        // 0x343f4c: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f48) {
            ctx->pc = 0x343F68u;
            goto label_343f68;
        }
    }
    ctx->pc = 0x343F50u;
label_343f50:
    // 0x343f50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x343f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_343f54:
    // 0x343f54: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x343f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
label_343f58:
    // 0x343f58: 0xc0ce5f2  jal         func_3397C8
label_343f5c:
    if (ctx->pc == 0x343F5Cu) {
        ctx->pc = 0x343F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F58u;
        // 0x343f5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F60u;
        goto label_343f60;
    }
    ctx->pc = 0x343F58u;
    SET_GPR_U32(ctx, 31, 0x343F60u);
    ctx->pc = 0x343F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F58u;
    // 0x343f5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3397C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3397C8u, 0x343F58u, 0x343F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F60u;
label_343f60:
    // 0x343f60: 0x1000001f  b           . + 4 + (0x1F << 2)
label_343f64:
    if (ctx->pc == 0x343F64u) {
        ctx->pc = 0x343F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F60u;
        // 0x343f64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F68u;
        goto label_343f68;
    }
    ctx->pc = 0x343F60u;
    {
        const bool branch_taken_0x343f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F60u;
        // 0x343f64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f60) {
            ctx->pc = 0x343FE0u;
            goto label_343fe0;
        }
    }
    ctx->pc = 0x343F68u;
label_343f68:
    // 0x343f68: 0xc0c8864  jal         func_322190
label_343f6c:
    if (ctx->pc == 0x343F6Cu) {
        ctx->pc = 0x343F70u;
        goto label_343f70;
    }
    ctx->pc = 0x343F68u;
    SET_GPR_U32(ctx, 31, 0x343F70u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x343F68u, 0x343F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F70u;
label_343f70:
    // 0x343f70: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x343f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
label_343f74:
    // 0x343f74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x343f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343f78:
    // 0x343f78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x343f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_343f7c:
    // 0x343f7c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x343f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_343f80:
    // 0x343f80: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x343f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_343f84:
    // 0x343f84: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343f88:
    // 0x343f88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343f8c:
    // 0x343f8c: 0x40f809  jalr        $v0
label_343f90:
    if (ctx->pc == 0x343F90u) {
        ctx->pc = 0x343F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F8Cu;
        // 0x343f90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F94u;
        goto label_343f94;
    }
    ctx->pc = 0x343F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343F94u);
        ctx->pc = 0x343F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F8Cu;
        // 0x343f90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343F8Cu, 0x343F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343F94u;
label_343f94:
    // 0x343f94: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x343f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_343f98:
    // 0x343f98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x343f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_343f9c:
    // 0x343f9c: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x343f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
label_343fa0:
    // 0x343fa0: 0xc0ce5f2  jal         func_3397C8
label_343fa4:
    if (ctx->pc == 0x343FA4u) {
        ctx->pc = 0x343FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FA0u;
        // 0x343fa4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343FA8u;
        goto label_343fa8;
    }
    ctx->pc = 0x343FA0u;
    SET_GPR_U32(ctx, 31, 0x343FA8u);
    ctx->pc = 0x343FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FA0u;
    // 0x343fa4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3397C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3397C8u, 0x343FA0u, 0x343FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FA8u;
label_343fa8:
    // 0x343fa8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x343fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_343fac:
    // 0x343fac: 0x3c053100  lui         $a1, 0x3100
    ctx->pc = 0x343facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12544 << 16));
label_343fb0:
    // 0x343fb0: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x343fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_343fb4:
    // 0x343fb4: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x343fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
label_343fb8:
    // 0x343fb8: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x343fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_343fbc:
    // 0x343fbc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x343fbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_343fc0:
    // 0x343fc0: 0x108143  sra         $s0, $s0, 5
    ctx->pc = 0x343fc0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 5));
label_343fc4:
    // 0x343fc4: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x343fc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
label_343fc8:
    // 0x343fc8: 0xc0cd57a  jal         func_3355E8
label_343fcc:
    if (ctx->pc == 0x343FCCu) {
        ctx->pc = 0x343FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FC8u;
        // 0x343fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343FD0u;
        goto label_343fd0;
    }
    ctx->pc = 0x343FC8u;
    SET_GPR_U32(ctx, 31, 0x343FD0u);
    ctx->pc = 0x343FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FC8u;
    // 0x343fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x343FC8u, 0x343FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FD0u;
label_343fd0:
    // 0x343fd0: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x343fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_343fd4:
    // 0x343fd4: 0xc0cd57a  jal         func_3355E8
label_343fd8:
    if (ctx->pc == 0x343FD8u) {
        ctx->pc = 0x343FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FD4u;
        // 0x343fd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343FDCu;
        goto label_343fdc;
    }
    ctx->pc = 0x343FD4u;
    SET_GPR_U32(ctx, 31, 0x343FDCu);
    ctx->pc = 0x343FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FD4u;
    // 0x343fd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x343FD4u, 0x343FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FDCu;
label_343fdc:
    // 0x343fdc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x343fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_343fe0:
    // 0x343fe0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x343fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_343fe4:
    // 0x343fe4: 0x3e00008  jr          $ra
label_343fe8:
    if (ctx->pc == 0x343FE8u) {
        ctx->pc = 0x343FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FE4u;
        // 0x343fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343FECu;
        goto label_343fec;
    }
    ctx->pc = 0x343FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FE4u;
        // 0x343fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343FECu;
label_343fec:
    // 0x343fec: 0x0  nop
    ctx->pc = 0x343fecu;
    // NOP
    ctx->pc = 0x343ff0u;
}
