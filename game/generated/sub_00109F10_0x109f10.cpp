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

// Function: sub_00109F10
// Address: 0x109f10 - 0x10a1c0
void sub_00109F10_0x109f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109F10_0x109f10");
#endif

    switch (ctx->pc) {
        case 0x109f34u: goto label_109f34;
        case 0x109f64u: goto label_109f64;
        case 0x109f70u: goto label_109f70;
        case 0x109f94u: goto label_109f94;
        case 0x109fa4u: goto label_109fa4;
        case 0x109fc8u: goto label_109fc8;
        case 0x109fecu: goto label_109fec;
        case 0x109ff8u: goto label_109ff8;
        case 0x10a00cu: goto label_10a00c;
        case 0x10a014u: goto label_10a014;
        case 0x10a058u: goto label_10a058;
        case 0x10a074u: goto label_10a074;
        case 0x10a088u: goto label_10a088;
        case 0x10a094u: goto label_10a094;
        case 0x10a0a4u: goto label_10a0a4;
        case 0x10a0ccu: goto label_10a0cc;
        case 0x10a0f0u: goto label_10a0f0;
        case 0x10a0f8u: goto label_10a0f8;
        case 0x10a10cu: goto label_10a10c;
        case 0x10a114u: goto label_10a114;
        case 0x10a15cu: goto label_10a15c;
        case 0x10a180u: goto label_10a180;
        case 0x10a194u: goto label_10a194;
        case 0x10a19cu: goto label_10a19c;
        case 0x10a1a4u: goto label_10a1a4;
        default: break;
    }

    ctx->pc = 0x109f10u;

    // 0x109f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x109f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x109f14: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x109f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x109f18: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x109f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x109f1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f20: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x109f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x109f24: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x109f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x109f28: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x109f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x109f2c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x109F2Cu;
    SET_GPR_U32(ctx, 31, 0x109F34u);
    ctx->pc = 0x109F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F2Cu;
    // 0x109f30: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x109F2Cu, 0x109F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F34u;
label_109f34:
    // 0x109f34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f38: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x109f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x109f3c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x109f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x109f40: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x109f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x109f44: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x109f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x109f48: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x109f48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x109f4c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109F4Cu;
    {
        const bool branch_taken_0x109f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x109F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F4Cu;
        // 0x109f50: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f4c) {
            ctx->pc = 0x109F64u;
            goto label_109f64;
        }
    }
    ctx->pc = 0x109F54u;
    // 0x109f54: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x109f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x109f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f5c: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x109F5Cu;
    SET_GPR_U32(ctx, 31, 0x109F64u);
    ctx->pc = 0x109F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F5Cu;
    // 0x109f60: 0x24a5db38  addiu       $a1, $a1, -0x24C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x109F5Cu, 0x109F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F64u;
label_109f64:
    // 0x109f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f68: 0xc0421a2  jal         func_108688
    ctx->pc = 0x109F68u;
    SET_GPR_U32(ctx, 31, 0x109F70u);
    ctx->pc = 0x109F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F68u;
    // 0x109f6c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x109F68u, 0x109F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F70u;
label_109f70:
    // 0x109f70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f78: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x109f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x109f7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109f80: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x109f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x109f84: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x109f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x109f88: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x109f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x109f8c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x109F8Cu;
    SET_GPR_U32(ctx, 31, 0x109F94u);
    ctx->pc = 0x109F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F8Cu;
    // 0x109f90: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x109F8Cu, 0x109F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F94u;
label_109f94:
    // 0x109f94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x109F94u;
    {
        const bool branch_taken_0x109f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F94u;
        // 0x109f98: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f94) {
            ctx->pc = 0x109FD0u;
            goto label_109fd0;
        }
    }
    ctx->pc = 0x109F9Cu;
    // 0x109f9c: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x109F9Cu;
    SET_GPR_U32(ctx, 31, 0x109FA4u);
    ctx->pc = 0x109FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F9Cu;
    // 0x109fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x109F9Cu, 0x109FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FA4u;
label_109fa4:
    // 0x109fa4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109fa8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x109fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x109fac: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x109facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x109fb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109fb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109fb4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x109fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fbc: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x109fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x109fc0: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x109FC0u;
    SET_GPR_U32(ctx, 31, 0x109FC8u);
    ctx->pc = 0x109FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FC0u;
    // 0x109fc4: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x109FC0u, 0x109FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FC8u;
label_109fc8:
    // 0x109fc8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x109FC8u;
    {
        const bool branch_taken_0x109fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FC8u;
        // 0x109fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fc8) {
            ctx->pc = 0x10A08Cu;
            goto label_10a08c;
        }
    }
    ctx->pc = 0x109FD0u;
label_109fd0:
    // 0x109fd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109fd4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x109fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x109fd8: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x109fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x109fdc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x109fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x109fe0: 0x26100f40  addiu       $s0, $s0, 0xF40
    ctx->pc = 0x109fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
    // 0x109fe4: 0xc041186  jal         func_104618
    ctx->pc = 0x109FE4u;
    SET_GPR_U32(ctx, 31, 0x109FECu);
    ctx->pc = 0x109FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FE4u;
    // 0x109fe8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x109FE4u, 0x109FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FECu;
label_109fec:
    // 0x109fec: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x109fecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x109ff0: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x109FF0u;
    SET_GPR_U32(ctx, 31, 0x109FF8u);
    ctx->pc = 0x109FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FF0u;
    // 0x109ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x109FF0u, 0x109FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FF8u;
label_109ff8:
    // 0x109ff8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a000: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10a004: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A004u;
    SET_GPR_U32(ctx, 31, 0x10A00Cu);
    ctx->pc = 0x10A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A004u;
    // 0x10a008: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A004u, 0x10A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A00Cu;
label_10a00c:
    // 0x10a00c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10A00Cu;
    SET_GPR_U32(ctx, 31, 0x10A014u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10A00Cu, 0x10A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A014u;
label_10a014:
    // 0x10a014: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10a014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10a018: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10a01c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10a01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10a020: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x10a020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x10a024: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x10a024u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10a028: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10a028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10a02c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x10a030: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x10a030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x10a034: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10a038: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10a038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10a03c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10a03cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x1000b420
    // 0x10a040: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10a040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10a044: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x10a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10a048: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A048u;
    {
        const bool branch_taken_0x10a048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A048u;
        // 0x10a04c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a048) {
            ctx->pc = 0x10A058u;
            goto label_10a058;
        }
    }
    ctx->pc = 0x10A050u;
    // 0x10a050: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10A050u;
    SET_GPR_U32(ctx, 31, 0x10A058u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10A050u, 0x10A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A058u;
label_10a058:
    // 0x10a058: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10a058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10a05c: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x10a05cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 18)); // MMIO: 0x10002000
    // 0x10a060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a064: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x10a064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x10a068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a06c: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A06Cu;
    SET_GPR_U32(ctx, 31, 0x10A074u);
    ctx->pc = 0x10A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A06Cu;
    // 0x10a070: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A06Cu, 0x10A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A074u;
label_10a074:
    // 0x10a074: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a078: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x10a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x10a07c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10a080: 0xc041186  jal         func_104618
    ctx->pc = 0x10A080u;
    SET_GPR_U32(ctx, 31, 0x10A088u);
    ctx->pc = 0x10A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A080u;
    // 0x10a084: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x10A080u, 0x10A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A088u;
label_10a088:
    // 0x10a088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a08c:
    // 0x10a08c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A08Cu;
    SET_GPR_U32(ctx, 31, 0x10A094u);
    ctx->pc = 0x10A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A08Cu;
    // 0x10a090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A08Cu, 0x10A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A094u;
label_10a094:
    // 0x10a094: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10A094u;
    {
        const bool branch_taken_0x10a094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A094u;
        // 0x10a098: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a094) {
            ctx->pc = 0x10A0D4u;
            goto label_10a0d4;
        }
    }
    ctx->pc = 0x10A09Cu;
    // 0x10a09c: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A09Cu;
    SET_GPR_U32(ctx, 31, 0x10A0A4u);
    ctx->pc = 0x10A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A09Cu;
    // 0x10a0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A09Cu, 0x10A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0A4u;
label_10a0a4:
    // 0x10a0a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10a0a8: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x10a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x10a0ac: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10a0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10a0b0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x10a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x10a0b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10a0b4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10a0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a0bc: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x10a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x10a0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0c4: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A0C4u;
    SET_GPR_U32(ctx, 31, 0x10A0CCu);
    ctx->pc = 0x10A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0C4u;
    // 0x10a0c8: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A0C4u, 0x10A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0CCu;
label_10a0cc:
    // 0x10a0cc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x10A0CCu;
    {
        const bool branch_taken_0x10a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0cc) {
            ctx->pc = 0x10A194u;
            goto label_10a194;
        }
    }
    ctx->pc = 0x10A0D4u;
label_10a0d4:
    // 0x10a0d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a0d8: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x10a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x10a0dc: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x10a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x10a0e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10a0e4: 0x26100f80  addiu       $s0, $s0, 0xF80
    ctx->pc = 0x10a0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3968));
    // 0x10a0e8: 0xc041186  jal         func_104618
    ctx->pc = 0x10A0E8u;
    SET_GPR_U32(ctx, 31, 0x10A0F0u);
    ctx->pc = 0x10A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0E8u;
    // 0x10a0ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x10A0E8u, 0x10A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0F0u;
label_10a0f0:
    // 0x10a0f0: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A0F0u;
    SET_GPR_U32(ctx, 31, 0x10A0F8u);
    ctx->pc = 0x10A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0F0u;
    // 0x10a0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A0F0u, 0x10A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0F8u;
label_10a0f8:
    // 0x10a0f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10a0fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a100: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10a104: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A104u;
    SET_GPR_U32(ctx, 31, 0x10A10Cu);
    ctx->pc = 0x10A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A104u;
    // 0x10a108: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A104u, 0x10A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A10Cu;
label_10a10c:
    // 0x10a10c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10A10Cu;
    SET_GPR_U32(ctx, 31, 0x10A114u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10A10Cu, 0x10A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A114u;
label_10a114:
    // 0x10a114: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10a114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10a118: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10a118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10a11c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10a11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10a120: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x10a120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x10a124: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x10a124u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10a128: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10a128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10a12c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x10a130: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x10a130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x10a134: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10a134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10a138: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10a138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10a13c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10a13cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x1000b420
    // 0x10a140: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10a140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10a144: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x10a144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10a148: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10a148u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x10a14c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A14Cu;
    {
        const bool branch_taken_0x10a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A14Cu;
        // 0x10a150: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a14c) {
            ctx->pc = 0x10A160u;
            goto label_10a160;
        }
    }
    ctx->pc = 0x10A154u;
    // 0x10a154: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10A154u;
    SET_GPR_U32(ctx, 31, 0x10A15Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10A154u, 0x10A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A15Cu;
label_10a15c:
    // 0x10a15c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x10a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_10a160:
    // 0x10a160: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x10a160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x10a164: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10a164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10a168: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x10a168u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x10a16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a174: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x10a174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x10a178: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10A178u;
    SET_GPR_U32(ctx, 31, 0x10A180u);
    ctx->pc = 0x10A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A178u;
    // 0x10a17c: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10A178u, 0x10A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A180u;
label_10a180:
    // 0x10a180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a184: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x10a184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x10a188: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10a188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10a18c: 0xc041186  jal         func_104618
    ctx->pc = 0x10A18Cu;
    SET_GPR_U32(ctx, 31, 0x10A194u);
    ctx->pc = 0x10A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A18Cu;
    // 0x10a190: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x10A18Cu, 0x10A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A194u;
label_10a194:
    // 0x10a194: 0xc0429fe  jal         func_10A7F8
    ctx->pc = 0x10A194u;
    SET_GPR_U32(ctx, 31, 0x10A19Cu);
    ctx->pc = 0x10A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A194u;
    // 0x10a198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A7F8u, 0x10A194u, 0x10A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A19Cu;
label_10a19c:
    // 0x10a19c: 0xc0426fe  jal         func_109BF8
    ctx->pc = 0x10A19Cu;
    SET_GPR_U32(ctx, 31, 0x10A1A4u);
    ctx->pc = 0x10A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A19Cu;
    // 0x10a1a0: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BF8u, 0x10A19Cu, 0x10A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1A4u;
label_10a1a4:
    // 0x10a1a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10a1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a1a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10a1a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a1ac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10a1acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a1b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10a1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1B4u;
        // 0x10a1b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A1BCu;
    // 0x10a1bc: 0x0  nop
    ctx->pc = 0x10a1bcu;
    // NOP
    ctx->pc = 0x10a1c0u;
}
