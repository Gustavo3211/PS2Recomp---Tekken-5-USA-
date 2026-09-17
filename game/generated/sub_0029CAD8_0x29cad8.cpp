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

// Function: sub_0029CAD8
// Address: 0x29cad8 - 0x29cc98
void sub_0029CAD8_0x29cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CAD8_0x29cad8");
#endif

    switch (ctx->pc) {
        case 0x29cb8cu: goto label_29cb8c;
        case 0x29cb9cu: goto label_29cb9c;
        case 0x29cba0u: goto label_29cba0;
        case 0x29cbb0u: goto label_29cbb0;
        case 0x29cbd0u: goto label_29cbd0;
        case 0x29cbe8u: goto label_29cbe8;
        case 0x29cbf8u: goto label_29cbf8;
        case 0x29cc10u: goto label_29cc10;
        case 0x29cc28u: goto label_29cc28;
        case 0x29cc40u: goto label_29cc40;
        case 0x29cc50u: goto label_29cc50;
        default: break;
    }

    ctx->pc = 0x29cad8u;

    // 0x29cad8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29cadc: 0xc7829074  lwc1        $f2, -0x6F8C($gp)
    ctx->pc = 0x29cadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29cae0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29cae4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29cae8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29caec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29caecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29caf0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29caf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x29caf4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29caf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29caf8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x29caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x29cafc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29cafcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb00: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29cb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x29cb04: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29cb04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb08: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x29cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x29cb0c: 0x13b040  sll         $s6, $s3, 1
    ctx->pc = 0x29cb0cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x29cb10: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x29cb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x29cb14: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x29cb14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x29cb18: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x29cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x29cb1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cb20: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x29cb20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29cb24: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x29cb24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29cb28: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x29cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x29cb2c: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x29cb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x29cb30: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x29cb30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x29cb34: 0xc420c658  lwc1        $f0, -0x39A8($at)
    ctx->pc = 0x29cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cb38: 0x8e820150  lw          $v0, 0x150($s4)
    ctx->pc = 0x29cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x29cb3c: 0x8e830154  lw          $v1, 0x154($s4)
    ctx->pc = 0x29cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x29cb40: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cb44: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29cb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29cb48: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x29cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29cb4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29cb4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29cb50: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x29cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x29cb54: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x29cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x29cb58: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x29cb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x29cb5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29cb60: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x29cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x29cb64: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x29cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x29cb68: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x29cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x29cb6c: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x29cb6cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x29cb70: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29cb70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x29cb74: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x29cb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x29cb78: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x29cb78u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29cb7c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x29cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x29cb80: 0x247e00a0  addiu       $fp, $v1, 0xA0
    ctx->pc = 0x29cb80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x29cb84: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CB84u;
    SET_GPR_U32(ctx, 31, 0x29CB8Cu);
    ctx->pc = 0x29CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB84u;
    // 0x29cb88: 0x247700c0  addiu       $s7, $v1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CB84u, 0x29CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB8Cu;
label_29cb8c:
    // 0x29cb8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29cb90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cb94: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CB94u;
    SET_GPR_U32(ctx, 31, 0x29CB9Cu);
    ctx->pc = 0x29CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB94u;
    // 0x29cb98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CB94u, 0x29CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB9Cu;
label_29cb9c:
    // 0x29cb9c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29cb9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29cba0:
    // 0x29cba0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29cba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cba8: 0xc0a74ec  jal         func_29D3B0
    ctx->pc = 0x29CBA8u;
    SET_GPR_U32(ctx, 31, 0x29CBB0u);
    ctx->pc = 0x29CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBA8u;
    // 0x29cbac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D3B0u, 0x29CBA8u, 0x29CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBB0u;
label_29cbb0:
    // 0x29cbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29cbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbb4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x29cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29cbb8: 0x2d28021  addu        $s0, $s6, $s2
    ctx->pc = 0x29cbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x29cbbc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x29cbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29cbc0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29cbc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x29cbc4: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x29cbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29cbc8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CBC8u;
    SET_GPR_U32(ctx, 31, 0x29CBD0u);
    ctx->pc = 0x29CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBC8u;
    // 0x29cbcc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CBC8u, 0x29CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBD0u;
label_29cbd0:
    // 0x29cbd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbd4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29cbd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29cbd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29cbdc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29cbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbe0: 0xc0a7516  jal         func_29D458
    ctx->pc = 0x29CBE0u;
    SET_GPR_U32(ctx, 31, 0x29CBE8u);
    ctx->pc = 0x29CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBE0u;
    // 0x29cbe4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D458u, 0x29CBE0u, 0x29CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBE8u;
label_29cbe8:
    // 0x29cbe8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29cbec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29cbecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x29cbf0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CBF0u;
    SET_GPR_U32(ctx, 31, 0x29CBF8u);
    ctx->pc = 0x29CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBF0u;
    // 0x29cbf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CBF0u, 0x29CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBF8u;
label_29cbf8:
    // 0x29cbf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cbfc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cc00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29cc00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29cc04: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x29cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29cc08: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CC08u;
    SET_GPR_U32(ctx, 31, 0x29CC10u);
    ctx->pc = 0x29CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC08u;
    // 0x29cc0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CC08u, 0x29CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC10u;
label_29cc10:
    // 0x29cc10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cc14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x29cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29cc18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29cc18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29cc1c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x29cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29cc20: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CC20u;
    SET_GPR_U32(ctx, 31, 0x29CC28u);
    ctx->pc = 0x29CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC20u;
    // 0x29cc24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CC20u, 0x29CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC28u;
label_29cc28:
    // 0x29cc28: 0x21e1021  addu        $v0, $s0, $fp
    ctx->pc = 0x29cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x29cc2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29cc30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cc34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29cc34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29cc38: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CC38u;
    SET_GPR_U32(ctx, 31, 0x29CC40u);
    ctx->pc = 0x29CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC38u;
    // 0x29cc3c: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CC38u, 0x29CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC40u;
label_29cc40:
    // 0x29cc40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29cc44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cc48: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29CC48u;
    SET_GPR_U32(ctx, 31, 0x29CC50u);
    ctx->pc = 0x29CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC48u;
    // 0x29cc4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29CC48u, 0x29CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC50u;
label_29cc50:
    // 0x29cc50: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x29cc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29cc54: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x29CC54u;
    {
        const bool branch_taken_0x29cc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC54u;
        // 0x29cc58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc54) {
            ctx->pc = 0x29CBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cba0;
        }
    }
    ctx->pc = 0x29CC5Cu;
    // 0x29cc5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29cc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cc60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29cc60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29cc64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29cc64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cc68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29cc68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29cc6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29cc6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cc70: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x29cc70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cc74: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x29cc74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cc78: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x29cc78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29cc7c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x29cc7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29cc80: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x29cc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29cc84: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x29cc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29cc88: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x29cc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29cc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x29CC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC8Cu;
        // 0x29cc90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CC94u;
    // 0x29cc94: 0x0  nop
    ctx->pc = 0x29cc94u;
    // NOP
    ctx->pc = 0x29cc98u;
}
