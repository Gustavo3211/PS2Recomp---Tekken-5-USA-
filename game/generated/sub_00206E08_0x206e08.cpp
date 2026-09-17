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

// Function: sub_00206E08
// Address: 0x206e08 - 0x2072d8
void sub_00206E08_0x206e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206E08_0x206e08");
#endif

    switch (ctx->pc) {
        case 0x206e54u: goto label_206e54;
        case 0x206e80u: goto label_206e80;
        case 0x206f34u: goto label_206f34;
        case 0x206f38u: goto label_206f38;
        case 0x206f60u: goto label_206f60;
        case 0x206fa8u: goto label_206fa8;
        case 0x206fbcu: goto label_206fbc;
        case 0x207020u: goto label_207020;
        case 0x207034u: goto label_207034;
        case 0x2070e0u: goto label_2070e0;
        case 0x207130u: goto label_207130;
        case 0x207144u: goto label_207144;
        case 0x2071a8u: goto label_2071a8;
        case 0x2071bcu: goto label_2071bc;
        case 0x20722cu: goto label_20722c;
        case 0x207234u: goto label_207234;
        default: break;
    }

    ctx->pc = 0x206e08u;

    // 0x206e08: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x206e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x206e0c: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x206e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x206e10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x206e10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x206e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x206e18: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x206e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x206e1c: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x206e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x206e20: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x206e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e24: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x206e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x206e28: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x206e28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e2c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x206e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x206e30: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x206e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x206e34: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x206e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x206e38: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x206e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x206e3c: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x206e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x206e40: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x206e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x206e44: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x206e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x206e48: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x206e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x206e4c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x206E4Cu;
    SET_GPR_U32(ctx, 31, 0x206E54u);
    ctx->pc = 0x206E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E4Cu;
    // 0x206e50: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x206E4Cu, 0x206E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E54u;
label_206e54:
    // 0x206e54: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x206e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x206e58: 0x1e2900  sll         $a1, $fp, 4
    ctx->pc = 0x206e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x206e5c: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x206e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x206e60: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x206e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x206e64: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x206e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206e68: 0x24a505d0  addiu       $a1, $a1, 0x5D0
    ctx->pc = 0x206e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1488));
    // 0x206e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e70: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x206e70u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x206e74: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x206e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x206e78: 0xc084784  jal         func_211E10
    ctx->pc = 0x206E78u;
    SET_GPR_U32(ctx, 31, 0x206E80u);
    ctx->pc = 0x206E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E78u;
    // 0x206e7c: 0x8fa600e0  lw          $a2, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x206E78u, 0x206E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E80u;
label_206e80:
    // 0x206e80: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x206e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e84: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x206e84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x206e88: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x206e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206e8c: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x206e8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x206e90: 0x46010044  c1          0x10044
    ctx->pc = 0x206e90u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x206e94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x206e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x206e98: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x206e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x206e9c: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x206e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x206ea0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x206ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x206ea4: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x206ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x206ea8: 0x4605a1c2  mul.s       $f7, $f20, $f5
    ctx->pc = 0x206ea8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x206eac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x206eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206eb0: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x206eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x206eb4: 0xc44205d0  lwc1        $f2, 0x5D0($v0)
    ctx->pc = 0x206eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206eb8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x206eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x206ebc: 0xc46005d8  lwc1        $f0, 0x5D8($v1)
    ctx->pc = 0x206ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206ec0: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x206ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x206ec4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x206ec4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x206ec8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206ecc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x206eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x206ed0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x206ed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x206ed4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x206ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x206ed8: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x206ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x206edc: 0xe7a400dc  swc1        $f4, 0xDC($sp)
    ctx->pc = 0x206edcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x206ee0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x206ee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x206ee4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x206ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x206ee8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x206ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x206eec: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x206eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x206ef0: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x206ef0u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x206ef4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x206ef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206ef8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x206ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206efc: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x206efcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x206f00: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206f04: 0x7ba800c0  lq          $t0, 0xC0($sp)
    ctx->pc = 0x206f04u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x206f08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x206f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f0c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x206f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x206f10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f14: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x206f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x206f18: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x206f18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f1c: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x206f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x206f20: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x206f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x206f24: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x206f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x206f28: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x206f28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x206f2c: 0xc089164  jal         func_224590
    ctx->pc = 0x206F2Cu;
    SET_GPR_U32(ctx, 31, 0x206F34u);
    ctx->pc = 0x206F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F2Cu;
    // 0x206f30: 0xafa90070  sw          $t1, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224590u, 0x206F2Cu, 0x206F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F34u;
label_206f34:
    // 0x206f34: 0x0  nop
    ctx->pc = 0x206f34u;
    // NOP
label_206f38:
    // 0x206f38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x206f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x206f3c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x206f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x206f40: 0x2444d420  addiu       $a0, $v0, -0x2BE0
    ctx->pc = 0x206f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x206f44: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x206f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f48: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x206f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x206f4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x206f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f50: 0x8c8307f8  lw          $v1, 0x7F8($a0)
    ctx->pc = 0x206f50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3ADC18u));
    // 0x206f54: 0x10430050  beq         $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x206F54u;
    {
        const bool branch_taken_0x206f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x206F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F54u;
        // 0x206f58: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f54) {
            ctx->pc = 0x207098u;
            goto label_207098;
        }
    }
    ctx->pc = 0x206F5Cu;
    // 0x206f5c: 0x0  nop
    ctx->pc = 0x206f5cu;
    // NOP
label_206f60:
    // 0x206f60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x206f64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206f68: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x206f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x206f6c: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x206f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x206f70: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x206F70u;
    {
        const bool branch_taken_0x206f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F70u;
        // 0x206f74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f70) {
            ctx->pc = 0x207074u;
            goto label_207074;
        }
    }
    ctx->pc = 0x206F78u;
    // 0x206f78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x206f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x206f7c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x206f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x206f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x206f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206f84: 0x8c634280  lw          $v1, 0x4280($v1)
    ctx->pc = 0x206f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17024)));
    // 0x206f88: 0x600008  jr          $v1
    ctx->pc = 0x206F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206F90u: goto label_206f90;
            case 0x207008u: goto label_207008;
            case 0x207074u: goto label_207074;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x206F90u;
label_206f90:
    // 0x206f90: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x206f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x206f94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x206f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f98: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x206f9c: 0x1a200035  blez        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x206F9Cu;
    {
        const bool branch_taken_0x206f9c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x206FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F9Cu;
        // 0x206fa0: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f9c) {
            ctx->pc = 0x207074u;
            goto label_207074;
        }
    }
    ctx->pc = 0x206FA4u;
    // 0x206fa4: 0x0  nop
    ctx->pc = 0x206fa4u;
    // NOP
label_206fa8:
    // 0x206fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fb0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x206fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fb4: 0xc081860  jal         func_206180
    ctx->pc = 0x206FB4u;
    SET_GPR_U32(ctx, 31, 0x206FBCu);
    ctx->pc = 0x206FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FB4u;
    // 0x206fb8: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206180u, 0x206FB4u, 0x206FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FBCu;
label_206fbc:
    // 0x206fbc: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x206FBCu;
    {
        const bool branch_taken_0x206fbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x206FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FBCu;
        // 0x206fc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fbc) {
            ctx->pc = 0x206FCCu;
            goto label_206fcc;
        }
    }
    ctx->pc = 0x206FC4u;
    // 0x206fc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206FC4u;
    {
        const bool branch_taken_0x206fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FC4u;
        // 0x206fc8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fc4) {
            ctx->pc = 0x206FD4u;
            goto label_206fd4;
        }
    }
    ctx->pc = 0x206FCCu;
label_206fcc:
    // 0x206fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206fd0: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x206fd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_206fd4:
    // 0x206fd4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x206FD4u;
    {
        const bool branch_taken_0x206fd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x206FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FD4u;
        // 0x206fd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fd4) {
            ctx->pc = 0x206FE4u;
            goto label_206fe4;
        }
    }
    ctx->pc = 0x206FDCu;
    // 0x206fdc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x206FDCu;
    {
        const bool branch_taken_0x206fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206fdc) {
            ctx->pc = 0x206FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206FDCu;
            // 0x206fe0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206FECu;
            goto label_206fec;
        }
    }
    ctx->pc = 0x206FE4u;
label_206fe4:
    // 0x206fe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206fe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x206fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_206fec:
    // 0x206fec: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x206fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ff0: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x206ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x206ff4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x206FF4u;
    {
        const bool branch_taken_0x206ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FF4u;
        // 0x206ff8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ff4) {
            ctx->pc = 0x206FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206fa8;
        }
    }
    ctx->pc = 0x206FFCu;
    // 0x206ffc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x206FFCu;
    {
        const bool branch_taken_0x206ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FFCu;
        // 0x207000: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ffc) {
            ctx->pc = 0x207078u;
            goto label_207078;
        }
    }
    ctx->pc = 0x207004u;
    // 0x207004: 0x0  nop
    ctx->pc = 0x207004u;
    // NOP
label_207008:
    // 0x207008: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x207008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x20700c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20700cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207010: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x207010u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207014: 0x1a200017  blez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x207014u;
    {
        const bool branch_taken_0x207014 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x207018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207014u;
        // 0x207018: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207014) {
            ctx->pc = 0x207074u;
            goto label_207074;
        }
    }
    ctx->pc = 0x20701Cu;
    // 0x20701c: 0x0  nop
    ctx->pc = 0x20701cu;
    // NOP
label_207020:
    // 0x207020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x207020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207028: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x207028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20702c: 0xc081860  jal         func_206180
    ctx->pc = 0x20702Cu;
    SET_GPR_U32(ctx, 31, 0x207034u);
    ctx->pc = 0x207030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20702Cu;
    // 0x207030: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206180u, 0x20702Cu, 0x207034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207034u;
label_207034:
    // 0x207034: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x207034u;
    {
        const bool branch_taken_0x207034 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x207038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207034u;
        // 0x207038: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207034) {
            ctx->pc = 0x207044u;
            goto label_207044;
        }
    }
    ctx->pc = 0x20703Cu;
    // 0x20703c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20703Cu;
    {
        const bool branch_taken_0x20703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20703Cu;
        // 0x207040: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20703c) {
            ctx->pc = 0x20704Cu;
            goto label_20704c;
        }
    }
    ctx->pc = 0x207044u;
label_207044:
    // 0x207044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207048: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x207048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20704c:
    // 0x20704c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x20704Cu;
    {
        const bool branch_taken_0x20704c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x207050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20704Cu;
        // 0x207050: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20704c) {
            ctx->pc = 0x20705Cu;
            goto label_20705c;
        }
    }
    ctx->pc = 0x207054u;
    // 0x207054: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x207054u;
    {
        const bool branch_taken_0x207054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207054) {
            ctx->pc = 0x207058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207054u;
            // 0x207058: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207064u;
            goto label_207064;
        }
    }
    ctx->pc = 0x20705Cu;
label_20705c:
    // 0x20705c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207060: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_207064:
    // 0x207064: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x207064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207068: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x207068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x20706c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20706Cu;
    {
        const bool branch_taken_0x20706c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20706Cu;
        // 0x207070: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20706c) {
            ctx->pc = 0x207020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207020;
        }
    }
    ctx->pc = 0x207074u;
label_207074:
    // 0x207074: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x207074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_207078:
    // 0x207078: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20707c: 0x2483d420  addiu       $v1, $a0, -0x2BE0
    ctx->pc = 0x20707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    // 0x207080: 0x8c6407f8  lw          $a0, 0x7F8($v1)
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2040)));
    // 0x207084: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x207084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x207088: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x207088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x20708c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x20708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207090: 0x1444ffb3  bne         $v0, $a0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x207090u;
    {
        const bool branch_taken_0x207090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x207094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207090u;
        // 0x207094: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207090) {
            ctx->pc = 0x206F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206f60;
        }
    }
    ctx->pc = 0x207098u;
label_207098:
    // 0x207098: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x207098u;
    {
        const bool branch_taken_0x207098 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207098u;
        // 0x20709c: 0x8fa200e4  lw          $v0, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207098) {
            ctx->pc = 0x2070B8u;
            goto label_2070b8;
        }
    }
    ctx->pc = 0x2070A0u;
    // 0x2070a0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2070a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2070a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2070a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2070a8: 0x2ae20064  slti        $v0, $s7, 0x64
    ctx->pc = 0x2070a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2070ac: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2070ACu;
    {
        const bool branch_taken_0x2070ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2070B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070ACu;
        // 0x2070b0: 0xafa400e4  sw          $a0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070ac) {
            ctx->pc = 0x206F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206f38;
        }
    }
    ctx->pc = 0x2070B4u;
    // 0x2070b4: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2070b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2070b8:
    // 0x2070b8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2070B8u;
    {
        const bool branch_taken_0x2070b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070B8u;
        // 0x2070bc: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070b8) {
            ctx->pc = 0x207258u;
            goto label_207258;
        }
    }
    ctx->pc = 0x2070C0u;
    // 0x2070c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2070c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2070c4: 0x2462d420  addiu       $v0, $v1, -0x2BE0
    ctx->pc = 0x2070c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x2070c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2070c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070cc: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2070ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2070d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2070d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070d4: 0x8c4407f8  lw          $a0, 0x7F8($v0)
    ctx->pc = 0x2070d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x2070d8: 0x50640060  beql        $v1, $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2070D8u;
    {
        const bool branch_taken_0x2070d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2070d8) {
            ctx->pc = 0x2070DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2070D8u;
            // 0x2070dc: 0x86a20222  lh          $v0, 0x222($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 546)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20725Cu;
            goto label_20725c;
        }
    }
    ctx->pc = 0x2070E0u;
label_2070e0:
    // 0x2070e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2070e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2070e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2070e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2070e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2070ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2070f0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2070f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2070f4: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x2070f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2070f8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2070F8u;
    {
        const bool branch_taken_0x2070f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F8u;
        // 0x2070fc: 0x8c970058  lw          $s7, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070f8) {
            ctx->pc = 0x207200u;
            goto label_207200;
        }
    }
    ctx->pc = 0x207100u;
    // 0x207100: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x207104: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x207104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x207108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20710c: 0x8c6342b0  lw          $v1, 0x42B0($v1)
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17072)));
    // 0x207110: 0x600008  jr          $v1
    ctx->pc = 0x207110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207118u: goto label_207118;
            case 0x207190u: goto label_207190;
            case 0x207200u: goto label_207200;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x207118u;
label_207118:
    // 0x207118: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x207118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x20711c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20711cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207120: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x207120u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x207124: 0x1a600036  blez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x207124u;
    {
        const bool branch_taken_0x207124 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x207128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207124u;
        // 0x207128: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207124) {
            ctx->pc = 0x207200u;
            goto label_207200;
        }
    }
    ctx->pc = 0x20712Cu;
    // 0x20712c: 0x0  nop
    ctx->pc = 0x20712cu;
    // NOP
label_207130:
    // 0x207130: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x207130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x207134: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x207134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20713c: 0xc081a9a  jal         func_206A68
    ctx->pc = 0x20713Cu;
    SET_GPR_U32(ctx, 31, 0x207144u);
    ctx->pc = 0x207140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20713Cu;
    // 0x207140: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A68u, 0x20713Cu, 0x207144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207144u;
label_207144:
    // 0x207144: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x207144u;
    {
        const bool branch_taken_0x207144 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x207148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207144u;
        // 0x207148: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207144) {
            ctx->pc = 0x207154u;
            goto label_207154;
        }
    }
    ctx->pc = 0x20714Cu;
    // 0x20714c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20714Cu;
    {
        const bool branch_taken_0x20714c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20714Cu;
        // 0x207150: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20714c) {
            ctx->pc = 0x20715Cu;
            goto label_20715c;
        }
    }
    ctx->pc = 0x207154u;
label_207154:
    // 0x207154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207158: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x207158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20715c:
    // 0x20715c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x20715Cu;
    {
        const bool branch_taken_0x20715c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x207160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20715Cu;
        // 0x207160: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20715c) {
            ctx->pc = 0x20716Cu;
            goto label_20716c;
        }
    }
    ctx->pc = 0x207164u;
    // 0x207164: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x207164u;
    {
        const bool branch_taken_0x207164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207164) {
            ctx->pc = 0x207168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207164u;
            // 0x207168: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207174u;
            goto label_207174;
        }
    }
    ctx->pc = 0x20716Cu;
label_20716c:
    // 0x20716c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_207174:
    // 0x207174: 0x202b00b  movn        $s6, $s0, $v0
    ctx->pc = 0x207174u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 16));
    // 0x207178: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x207178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x20717c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x20717cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207180: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x207180u;
    {
        const bool branch_taken_0x207180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207180u;
        // 0x207184: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207180) {
            ctx->pc = 0x207130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207130;
        }
    }
    ctx->pc = 0x207188u;
    // 0x207188: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x207188u;
    {
        const bool branch_taken_0x207188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207188) {
            ctx->pc = 0x207200u;
            goto label_207200;
        }
    }
    ctx->pc = 0x207190u;
label_207190:
    // 0x207190: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x207190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x207194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207198: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x207198u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20719c: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x20719Cu;
    {
        const bool branch_taken_0x20719c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2071A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20719Cu;
        // 0x2071a0: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20719c) {
            ctx->pc = 0x207200u;
            goto label_207200;
        }
    }
    ctx->pc = 0x2071A4u;
    // 0x2071a4: 0x0  nop
    ctx->pc = 0x2071a4u;
    // NOP
label_2071a8:
    // 0x2071a8: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2071a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2071ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2071acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2071b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071b4: 0xc081a9a  jal         func_206A68
    ctx->pc = 0x2071B4u;
    SET_GPR_U32(ctx, 31, 0x2071BCu);
    ctx->pc = 0x2071B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071B4u;
    // 0x2071b8: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A68u, 0x2071B4u, 0x2071BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071BCu;
label_2071bc:
    // 0x2071bc: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2071BCu;
    {
        const bool branch_taken_0x2071bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2071C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071BCu;
        // 0x2071c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071bc) {
            ctx->pc = 0x2071CCu;
            goto label_2071cc;
        }
    }
    ctx->pc = 0x2071C4u;
    // 0x2071c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2071C4u;
    {
        const bool branch_taken_0x2071c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C4u;
        // 0x2071c8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071c4) {
            ctx->pc = 0x2071D4u;
            goto label_2071d4;
        }
    }
    ctx->pc = 0x2071CCu;
label_2071cc:
    // 0x2071cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2071ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2071d0: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2071d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2071d4:
    // 0x2071d4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2071D4u;
    {
        const bool branch_taken_0x2071d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2071D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071D4u;
        // 0x2071d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071d4) {
            ctx->pc = 0x2071E4u;
            goto label_2071e4;
        }
    }
    ctx->pc = 0x2071DCu;
    // 0x2071dc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2071DCu;
    {
        const bool branch_taken_0x2071dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071dc) {
            ctx->pc = 0x2071E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071DCu;
            // 0x2071e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071ECu;
            goto label_2071ec;
        }
    }
    ctx->pc = 0x2071E4u;
label_2071e4:
    // 0x2071e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2071e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2071e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2071e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2071ec:
    // 0x2071ec: 0x202b00b  movn        $s6, $s0, $v0
    ctx->pc = 0x2071ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 16));
    // 0x2071f0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2071f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2071f4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2071f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071f8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2071F8u;
    {
        const bool branch_taken_0x2071f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2071FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071F8u;
        // 0x2071fc: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071f8) {
            ctx->pc = 0x2071A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2071a8;
        }
    }
    ctx->pc = 0x207200u;
label_207200:
    // 0x207200: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x207200u;
    {
        const bool branch_taken_0x207200 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x207204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207200u;
        // 0x207204: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207200) {
            ctx->pc = 0x207238u;
            goto label_207238;
        }
    }
    ctx->pc = 0x207208u;
    // 0x207208: 0x12e0000c  beqz        $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x207208u;
    {
        const bool branch_taken_0x207208 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x20720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207208u;
        // 0x20720c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207208) {
            ctx->pc = 0x20723Cu;
            goto label_20723c;
        }
    }
    ctx->pc = 0x207210u;
    // 0x207210: 0x8ee2006c  lw          $v0, 0x6C($s7)
    ctx->pc = 0x207210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 108)));
    // 0x207214: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207214u;
    {
        const bool branch_taken_0x207214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207214u;
        // 0x207218: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207214) {
            ctx->pc = 0x207234u;
            goto label_207234;
        }
    }
    ctx->pc = 0x20721Cu;
    // 0x20721c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x20721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207220: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x207220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207224: 0xc08176a  jal         func_205DA8
    ctx->pc = 0x207224u;
    SET_GPR_U32(ctx, 31, 0x20722Cu);
    ctx->pc = 0x207228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207224u;
    // 0x207228: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DA8u, 0x207224u, 0x20722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20722Cu;
label_20722c:
    // 0x20722c: 0xc08184a  jal         func_206128
    ctx->pc = 0x20722Cu;
    SET_GPR_U32(ctx, 31, 0x207234u);
    ctx->pc = 0x207230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20722Cu;
    // 0x207230: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206128u, 0x20722Cu, 0x207234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207234u;
label_207234:
    // 0x207234: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x207234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_207238:
    // 0x207238: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x207238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_20723c:
    // 0x20723c: 0x2483d420  addiu       $v1, $a0, -0x2BE0
    ctx->pc = 0x20723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    // 0x207240: 0x8c6407f8  lw          $a0, 0x7F8($v1)
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2040)));
    // 0x207244: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x207244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x207248: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x207248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x20724c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x20724cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207250: 0x1444ffa3  bne         $v0, $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x207250u;
    {
        const bool branch_taken_0x207250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x207254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207250u;
        // 0x207254: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207250) {
            ctx->pc = 0x2070E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2070e0;
        }
    }
    ctx->pc = 0x207258u;
label_207258:
    // 0x207258: 0x86a20222  lh          $v0, 0x222($s5)
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 546)));
label_20725c:
    // 0x20725c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20725cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x207260: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x207260u;
    {
        const bool branch_taken_0x207260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207260) {
            ctx->pc = 0x207264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207260u;
            // 0x207264: 0x96a20224  lhu         $v0, 0x224($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20729Cu;
            goto label_20729c;
        }
    }
    ctx->pc = 0x207268u;
    // 0x207268: 0x96a50224  lhu         $a1, 0x224($s5)
    ctx->pc = 0x207268u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 548)));
    // 0x20726c: 0x96a40226  lhu         $a0, 0x226($s5)
    ctx->pc = 0x20726cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 550)));
    // 0x207270: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x207270u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x207274: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x207274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x207278: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x207278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20727c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x20727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x207280: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x207280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x207284: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x207284u;
    {
        const bool branch_taken_0x207284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207284) {
            ctx->pc = 0x207288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207284u;
            // 0x207288: 0x31042  srl         $v0, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207298u;
            goto label_207298;
        }
    }
    ctx->pc = 0x20728Cu;
    // 0x20728c: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x207290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x207290u;
    {
        const bool branch_taken_0x207290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207290u;
        // 0x207294: 0xa21023  subu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207290) {
            ctx->pc = 0x20729Cu;
            goto label_20729c;
        }
    }
    ctx->pc = 0x207298u;
label_207298:
    // 0x207298: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x207298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20729c:
    // 0x20729c: 0xa6a20220  sh          $v0, 0x220($s5)
    ctx->pc = 0x20729cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x2072a0: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2072a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2072a4: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x2072a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2072a8: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x2072a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2072ac: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x2072acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2072b0: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x2072b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2072b4: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x2072b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2072b8: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x2072b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2072bc: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x2072bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2072c0: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x2072c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2072c4: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2072c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2072c8: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x2072c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2072cc: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2072ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2072d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2072D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2072D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072D0u;
        // 0x2072d4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2072D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2072D8u;
}
