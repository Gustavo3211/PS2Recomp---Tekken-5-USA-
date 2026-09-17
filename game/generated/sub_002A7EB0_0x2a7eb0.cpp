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

// Function: sub_002A7EB0
// Address: 0x2a7eb0 - 0x2a8258
void sub_002A7EB0_0x2a7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7EB0_0x2a7eb0");
#endif

    switch (ctx->pc) {
        case 0x2a7f00u: goto label_2a7f00;
        case 0x2a7f30u: goto label_2a7f30;
        case 0x2a7f94u: goto label_2a7f94;
        case 0x2a7fc4u: goto label_2a7fc4;
        case 0x2a807cu: goto label_2a807c;
        case 0x2a80ccu: goto label_2a80cc;
        case 0x2a8170u: goto label_2a8170;
        case 0x2a81d0u: goto label_2a81d0;
        case 0x2a8200u: goto label_2a8200;
        default: break;
    }

    ctx->pc = 0x2a7eb0u;

    // 0x2a7eb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a7eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a7eb4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a7eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2a7eb8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2a7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2a7ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ec0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2a7ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2a7ec4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a7ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ec8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2a7ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2a7ecc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a7eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ed0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2a7ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2a7ed4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a7ed4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ed8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2a7ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2a7edc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a7edcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ee0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2a7ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2a7ee4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a7ee4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ee8: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2a7ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x2a7eec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a7eecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ef0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2a7ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2a7ef4: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2a7ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2a7ef8: 0xc0aa0ba  jal         func_2A82E8
    ctx->pc = 0x2A7EF8u;
    SET_GPR_U32(ctx, 31, 0x2A7F00u);
    ctx->pc = 0x2A7EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7EF8u;
    // 0x2a7efc: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E8u, 0x2A7EF8u, 0x2A7F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F00u;
label_2a7f00:
    // 0x2a7f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7f08: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2a7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2a7f0c: 0x120000c6  beqz        $s0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2A7F0Cu;
    {
        const bool branch_taken_0x2a7f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F0Cu;
        // 0x2a7f10: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f0c) {
            ctx->pc = 0x2A8228u;
            goto label_2a8228;
        }
    }
    ctx->pc = 0x2A7F14u;
    // 0x2a7f14: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2a7f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7f18: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2a7f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2a7f1c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2a7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2a7f20: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2a7f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7f24: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2a7f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2a7f28: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2A7F28u;
    {
        const bool branch_taken_0x2a7f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F28u;
        // 0x2a7f2c: 0x96070000  lhu         $a3, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f28) {
            ctx->pc = 0x2A81A0u;
            goto label_2a81a0;
        }
    }
    ctx->pc = 0x2A7F30u;
label_2a7f30:
    // 0x2a7f30: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x2a7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x2a7f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7f38: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2a7f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a7f3c: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x2a7f3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x2a7f40: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7F40u;
    {
        const bool branch_taken_0x2a7f40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F40u;
        // 0x2a7f44: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f40) {
            ctx->pc = 0x2A7F54u;
            goto label_2a7f54;
        }
    }
    ctx->pc = 0x2A7F48u;
    // 0x2a7f48: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2a7f48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a7f4c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7F4Cu;
    {
        const bool branch_taken_0x2a7f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F4Cu;
        // 0x2a7f50: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f4c) {
            ctx->pc = 0x2A7F68u;
            goto label_2a7f68;
        }
    }
    ctx->pc = 0x2A7F54u;
label_2a7f54:
    // 0x2a7f54: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x2a7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2a7f58: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2a7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2a7f5c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2a7f5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a7f60: 0x14c30027  bne         $a2, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A7F60u;
    {
        const bool branch_taken_0x2a7f60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F60u;
        // 0x2a7f64: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f60) {
            ctx->pc = 0x2A8000u;
            goto label_2a8000;
        }
    }
    ctx->pc = 0x2A7F68u;
label_2a7f68:
    // 0x2a7f68: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7F68u;
    {
        const bool branch_taken_0x2a7f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F68u;
        // 0x2a7f6c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f68) {
            ctx->pc = 0x2A7F94u;
            goto label_2a7f94;
        }
    }
    ctx->pc = 0x2A7F70u;
    // 0x2a7f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f74: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a7f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f78: 0x3d63823  subu        $a3, $fp, $s6
    ctx->pc = 0x2a7f78u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x2a7f7c: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x2a7f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a7f80: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2a7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a7f84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a7f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a7f88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a7f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a7f8c: 0xc0aa0a2  jal         func_2A8288
    ctx->pc = 0x2A7F8Cu;
    SET_GPR_U32(ctx, 31, 0x2A7F94u);
    ctx->pc = 0x2A7F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F8Cu;
    // 0x2a7f90: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8288u, 0x2A7F8Cu, 0x2A7F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F94u;
label_2a7f94:
    // 0x2a7f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a7f98: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7F98u;
    {
        const bool branch_taken_0x2a7f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F98u;
        // 0x2a7f9c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f98) {
            ctx->pc = 0x2A7FC4u;
            goto label_2a7fc4;
        }
    }
    ctx->pc = 0x2A7FA0u;
    // 0x2a7fa0: 0x3d63823  subu        $a3, $fp, $s6
    ctx->pc = 0x2a7fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x2a7fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fa8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a7fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fac: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x2a7facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a7fb0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2a7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a7fb4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a7fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a7fb8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a7fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a7fbc: 0xc0aa0ac  jal         func_2A82B0
    ctx->pc = 0x2A7FBCu;
    SET_GPR_U32(ctx, 31, 0x2A7FC4u);
    ctx->pc = 0x2A7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FBCu;
    // 0x2a7fc0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82B0u, 0x2A7FBCu, 0x2A7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FC4u;
label_2a7fc4:
    // 0x2a7fc4: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2a7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2a7fc8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a7fc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fcc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a7fccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fd0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x2a7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a7fd4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a7fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a7fd8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a7fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7fe0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2a7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2a7fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a7fe8: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2a7fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x2a7fec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a7ff0: 0xac5708c0  sw          $s7, 0x8C0($v0)
    ctx->pc = 0x2a7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2240), GPR_U32(ctx, 23));
    // 0x2a7ff4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2A7FF4u;
    {
        const bool branch_taken_0x2a7ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FF4u;
        // 0x2a7ff8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ff4) {
            ctx->pc = 0x2A816Cu;
            goto label_2a816c;
        }
    }
    ctx->pc = 0x2A7FFCu;
    // 0x2a7ffc: 0x0  nop
    ctx->pc = 0x2a7ffcu;
    // NOP
label_2a8000:
    // 0x2a8000: 0x4c10039  bgez        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A8000u;
    {
        const bool branch_taken_0x2a8000 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2A8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8000u;
        // 0x2a8004: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8000) {
            ctx->pc = 0x2A80E8u;
            goto label_2a80e8;
        }
    }
    ctx->pc = 0x2A8008u;
    // 0x2a8008: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2a8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a800c: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A800Cu;
    {
        const bool branch_taken_0x2a800c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A8010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A800Cu;
        // 0x2a8010: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a800c) {
            ctx->pc = 0x2A8028u;
            goto label_2a8028;
        }
    }
    ctx->pc = 0x2A8014u;
    // 0x2a8014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8018: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2a8018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2a801c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2A801Cu;
    {
        const bool branch_taken_0x2a801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A801Cu;
        // 0x2a8020: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a801c) {
            ctx->pc = 0x2A816Cu;
            goto label_2a816c;
        }
    }
    ctx->pc = 0x2A8024u;
    // 0x2a8024: 0x0  nop
    ctx->pc = 0x2a8024u;
    // NOP
label_2a8028:
    // 0x2a8028: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8028u;
    {
        const bool branch_taken_0x2a8028 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8028u;
        // 0x2a802c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8028) {
            ctx->pc = 0x2A8040u;
            goto label_2a8040;
        }
    }
    ctx->pc = 0x2A8030u;
    // 0x2a8030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a8030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8034: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2a8034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2a8038: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2A8038u;
    {
        const bool branch_taken_0x2a8038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8038u;
        // 0x2a803c: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8038) {
            ctx->pc = 0x2A816Cu;
            goto label_2a816c;
        }
    }
    ctx->pc = 0x2A8040u;
label_2a8040:
    // 0x2a8040: 0x10c2004a  beq         $a2, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2A8040u;
    {
        const bool branch_taken_0x2a8040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8040u;
        // 0x2a8044: 0x28c2ff39  slti        $v0, $a2, -0xC7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8040) {
            ctx->pc = 0x2A816Cu;
            goto label_2a816c;
        }
    }
    ctx->pc = 0x2A8048u;
    // 0x2a8048: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A8048u;
    {
        const bool branch_taken_0x2a8048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8048u;
        // 0x2a804c: 0x28c2ff9d  slti        $v0, $a2, -0x63 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967197) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8048) {
            ctx->pc = 0x2A8088u;
            goto label_2a8088;
        }
    }
    ctx->pc = 0x2A8050u;
    // 0x2a8050: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2a8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2a8054: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2a8054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a8058: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x2a8058u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a805c: 0x3a23821  addu        $a3, $sp, $v0
    ctx->pc = 0x2a805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a8060: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x2a8060u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8064: 0x26020006  addiu       $v0, $s0, 0x6
    ctx->pc = 0x2a8064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2a8068: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a8068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a806c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2a806cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2a8070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8074: 0xc0aa0ba  jal         func_2A82E8
    ctx->pc = 0x2A8074u;
    SET_GPR_U32(ctx, 31, 0x2A807Cu);
    ctx->pc = 0x2A8078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8074u;
    // 0x2a8078: 0xc52825  or          $a1, $a2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E8u, 0x2A8074u, 0x2A807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A807Cu;
label_2a807c:
    // 0x2a807c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a807cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a8080: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2A8080u;
    {
        const bool branch_taken_0x2a8080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8080u;
        // 0x2a8084: 0x24500002  addiu       $s0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8080) {
            ctx->pc = 0x2A816Cu;
            goto label_2a816c;
        }
    }
    ctx->pc = 0x2A8088u;
label_2a8088:
    // 0x2a8088: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A8088u;
    {
        const bool branch_taken_0x2a8088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8088) {
            ctx->pc = 0x2A808Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8088u;
            // 0x2a808c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8170u;
            goto label_2a8170;
        }
    }
    ctx->pc = 0x2A8090u;
    // 0x2a8090: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2a8090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a8094: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2a8094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2a8098: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x2a8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x2a809c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2a809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2a80a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a80a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a80a4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2a80a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a80a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a80ac: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2a80acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2a80b0: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x2a80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2a80b4: 0x8443019c  lh          $v1, 0x19C($v0)
    ctx->pc = 0x2a80b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x2a80b8: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A80B8u;
    {
        const bool branch_taken_0x2a80b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80B8u;
        // 0x2a80bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80b8) {
            ctx->pc = 0x2A80D8u;
            goto label_2a80d8;
        }
    }
    ctx->pc = 0x2A80C0u;
    // 0x2a80c0: 0x8c4501a0  lw          $a1, 0x1A0($v0)
    ctx->pc = 0x2a80c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x2a80c4: 0xc0aa0ba  jal         func_2A82E8
    ctx->pc = 0x2A80C4u;
    SET_GPR_U32(ctx, 31, 0x2A80CCu);
    ctx->pc = 0x2A80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A80C4u;
    // 0x2a80c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E8u, 0x2A80C4u, 0x2A80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A80CCu;
label_2a80cc:
    // 0x2a80cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A80CCu;
    {
        const bool branch_taken_0x2a80cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80CCu;
        // 0x2a80d0: 0x24500002  addiu       $s0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80cc) {
            ctx->pc = 0x2A80E0u;
            goto label_2a80e0;
        }
    }
    ctx->pc = 0x2A80D4u;
    // 0x2a80d4: 0x0  nop
    ctx->pc = 0x2a80d4u;
    // NOP
label_2a80d8:
    // 0x2a80d8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2a80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2a80dc: 0x2450019c  addiu       $s0, $v0, 0x19C
    ctx->pc = 0x2a80dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
label_2a80e0:
    // 0x2a80e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2A80E0u;
    {
        const bool branch_taken_0x2a80e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80E0u;
        // 0x2a80e4: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80e0) {
            ctx->pc = 0x2A816Cu;
            goto label_2a816c;
        }
    }
    ctx->pc = 0x2A80E8u;
label_2a80e8:
    // 0x2a80e8: 0x1720c0  sll         $a0, $s7, 3
    ctx->pc = 0x2a80e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x2a80ec: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2a80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2a80f0: 0x972023  subu        $a0, $a0, $s7
    ctx->pc = 0x2a80f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2a80f4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2a80f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2a80f8: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x2a80f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a80fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a8100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a8100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8104: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2a8104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a8108: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2a8108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a810c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a810cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a8110: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a8110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a8114: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a8118: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a8118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a811c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2a811cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a8120: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a8120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8124: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2a8124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2a8128: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a8128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a812c: 0xa4870018  sh          $a3, 0x18($a0)
    ctx->pc = 0x2a812cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a8130: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x2a8130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x2a8134: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a8138: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2a8138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a813c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a8140: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2a8140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2a8144: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2a8144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a8148: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2a8148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2a814c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a8150: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x2a8150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
    // 0x2a8154: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a8154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a8158: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2a8158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2a815c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a8160: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2a8160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a8164: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a8164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8168: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x2a8168u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2a816c:
    // 0x2a816c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2a816cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2a8170:
    // 0x2a8170: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2a8170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a8174: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x2A8174u;
    {
        const bool branch_taken_0x2a8174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8174u;
        // 0x2a8178: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8174) {
            ctx->pc = 0x2A7F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7f30;
        }
    }
    ctx->pc = 0x2A817Cu;
    // 0x2a817c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A817Cu;
    {
        const bool branch_taken_0x2a817c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A817Cu;
        // 0x2a8180: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a817c) {
            ctx->pc = 0x2A81A0u;
            goto label_2a81a0;
        }
    }
    ctx->pc = 0x2A8184u;
    // 0x2a8184: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2a8184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a8188: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2a8188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a818c: 0x0  nop
    ctx->pc = 0x2a818cu;
    // NOP
    // 0x2a8190: 0x0  nop
    ctx->pc = 0x2a8190u;
    // NOP
    // 0x2a8194: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x2A8194u;
    {
        const bool branch_taken_0x2a8194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8194u;
        // 0x2a8198: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8194) {
            ctx->pc = 0x2A8170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8170;
        }
    }
    ctx->pc = 0x2A819Cu;
    // 0x2a819c: 0x0  nop
    ctx->pc = 0x2a819cu;
    // NOP
label_2a81a0:
    // 0x2a81a0: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x2a81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2a81a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A81A4u;
    {
        const bool branch_taken_0x2a81a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A81A4u;
        // 0x2a81a8: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81a4) {
            ctx->pc = 0x2A81D0u;
            goto label_2a81d0;
        }
    }
    ctx->pc = 0x2A81ACu;
    // 0x2a81ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a81acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81b0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a81b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81b4: 0x3d63823  subu        $a3, $fp, $s6
    ctx->pc = 0x2a81b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x2a81b8: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x2a81b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a81bc: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2a81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a81c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a81c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a81c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a81c8: 0xc0aa0a2  jal         func_2A8288
    ctx->pc = 0x2A81C8u;
    SET_GPR_U32(ctx, 31, 0x2A81D0u);
    ctx->pc = 0x2A81CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81C8u;
    // 0x2a81cc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8288u, 0x2A81C8u, 0x2A81D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81D0u;
label_2a81d0:
    // 0x2a81d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a81d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A81D4u;
    {
        const bool branch_taken_0x2a81d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A81D4u;
        // 0x2a81d8: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81d4) {
            ctx->pc = 0x2A8200u;
            goto label_2a8200;
        }
    }
    ctx->pc = 0x2A81DCu;
    // 0x2a81dc: 0x3d63823  subu        $a3, $fp, $s6
    ctx->pc = 0x2a81dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x2a81e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a81e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81e4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a81e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81e8: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x2a81e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a81ec: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2a81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a81f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a81f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a81f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a81f8: 0xc0aa0ac  jal         func_2A82B0
    ctx->pc = 0x2A81F8u;
    SET_GPR_U32(ctx, 31, 0x2A8200u);
    ctx->pc = 0x2A81FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81F8u;
    // 0x2a81fc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82B0u, 0x2A81F8u, 0x2A8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8200u;
label_2a8200:
    // 0x2a8200: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2a8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2a8204: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2a8204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a8208: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2a8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a820c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x2a820cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a8210: 0xae826930  sw          $v0, 0x6930($s4)
    ctx->pc = 0x2a8210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 26928), GPR_U32(ctx, 2));
    // 0x2a8214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a8214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8218: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a8218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a821c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8220: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2a8220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2a8224: 0xac7708c0  sw          $s7, 0x8C0($v1)
    ctx->pc = 0x2a8224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2240), GPR_U32(ctx, 23));
label_2a8228:
    // 0x2a8228: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a8228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a822c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2a822cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a8230: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2a8230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8234: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2a8234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a8238: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2a8238u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a823c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2a823cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a8240: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2a8240u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8244: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2a8244u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a8248: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2a8248u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a824c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2a824cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a8250: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8250u;
        // 0x2a8254: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8258u;
}
