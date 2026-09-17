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

// Function: sub_00206180
// Address: 0x206180 - 0x206a68
void sub_00206180_0x206180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206180_0x206180");
#endif

    switch (ctx->pc) {
        case 0x206268u: goto label_206268;
        case 0x206280u: goto label_206280;
        case 0x206298u: goto label_206298;
        case 0x2062acu: goto label_2062ac;
        case 0x2062c4u: goto label_2062c4;
        case 0x2062d8u: goto label_2062d8;
        case 0x2062e8u: goto label_2062e8;
        case 0x2062fcu: goto label_2062fc;
        case 0x20630cu: goto label_20630c;
        case 0x206338u: goto label_206338;
        case 0x206348u: goto label_206348;
        case 0x206358u: goto label_206358;
        case 0x20636cu: goto label_20636c;
        case 0x20637cu: goto label_20637c;
        case 0x206388u: goto label_206388;
        case 0x2063acu: goto label_2063ac;
        case 0x2063d0u: goto label_2063d0;
        case 0x2063f8u: goto label_2063f8;
        case 0x206488u: goto label_206488;
        case 0x2064c0u: goto label_2064c0;
        case 0x2064d0u: goto label_2064d0;
        case 0x2064ecu: goto label_2064ec;
        case 0x206510u: goto label_206510;
        case 0x206554u: goto label_206554;
        case 0x20658cu: goto label_20658c;
        case 0x206620u: goto label_206620;
        case 0x2066d8u: goto label_2066d8;
        case 0x206828u: goto label_206828;
        case 0x206838u: goto label_206838;
        case 0x206870u: goto label_206870;
        case 0x206890u: goto label_206890;
        case 0x2069fcu: goto label_2069fc;
        default: break;
    }

    ctx->pc = 0x206180u;

    // 0x206180: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x206180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x206184: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x206184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x206188: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x206188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x20618c: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x20618cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x206190: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x206190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x206194: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x206194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206198: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x206198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x20619c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2061a0: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2061a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2061a4: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x2061a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
    // 0x2061a8: 0x27b60120  addiu       $s6, $sp, 0x120
    ctx->pc = 0x2061a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2061ac: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x2061acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x2061b0: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x2061b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2061b4: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2061b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2061b8: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2061b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2061bc: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x2061bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
    // 0x2061c0: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x2061c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x2061c4: 0xffb701a8  sd          $s7, 0x1A8($sp)
    ctx->pc = 0x2061c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 23));
    // 0x2061c8: 0xffbf01b8  sd          $ra, 0x1B8($sp)
    ctx->pc = 0x2061c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 31));
    // 0x2061cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2061ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2061d0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2061d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2061d4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2061d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2061d8: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x2061d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2061dc: 0xafa70164  sw          $a3, 0x164($sp)
    ctx->pc = 0x2061dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 7));
    // 0x2061e0: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2061e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2061e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2061e8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2061e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2061ec: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x2061ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x2061f0: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x2061f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x2061f4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2061f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2061f8: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x2061f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x2061fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2061fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x206200: 0xafa8013c  sw          $t0, 0x13C($sp)
    ctx->pc = 0x206200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 8));
    // 0x206204: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x206204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x206208: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x206208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x20620c: 0x78a60040  lq          $a2, 0x40($a1)
    ctx->pc = 0x20620cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x206210: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206214: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x206214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x206218: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x206218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20621c: 0x786205d0  lq          $v0, 0x5D0($v1)
    ctx->pc = 0x20621cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 1488)));
    // 0x206220: 0xc64205d4  lwc1        $f2, 0x5D4($s2)
    ctx->pc = 0x206220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206224: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x206224u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x206228: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x206228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x20622c: 0x7ec60000  sq          $a2, 0x0($s6)
    ctx->pc = 0x20622cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 6));
    // 0x206230: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x206230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x206234: 0x2610b548  addiu       $s0, $s0, -0x4AB8
    ctx->pc = 0x206234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948168));
    // 0x206238: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x206238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20623c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x20623cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x206240: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x206240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206244: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x206244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206248: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206248u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20624c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x20624cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x206250: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x206250u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x206254: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x206254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x206258: 0xe7b6012c  swc1        $f22, 0x12C($sp)
    ctx->pc = 0x206258u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x20625c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x20625cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x206260: 0xc0847da  jal         func_211F68
    ctx->pc = 0x206260u;
    SET_GPR_U32(ctx, 31, 0x206268u);
    ctx->pc = 0x206264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206260u;
    // 0x206264: 0xe7a10128  swc1        $f1, 0x128($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x206260u, 0x206268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206268u;
label_206268:
    // 0x206268: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x206268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20626c: 0x27be0100  addiu       $fp, $sp, 0x100
    ctx->pc = 0x20626cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x206270: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x206270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206274: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206278: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x206278u;
    SET_GPR_U32(ctx, 31, 0x206280u);
    ctx->pc = 0x20627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206278u;
    // 0x20627c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x206278u, 0x206280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206280u;
label_206280:
    // 0x206280: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x206280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206284: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x206284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x206288: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x206288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20628c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206290: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206290u;
    SET_GPR_U32(ctx, 31, 0x206298u);
    ctx->pc = 0x206294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206290u;
    // 0x206294: 0xe7b5010c  swc1        $f21, 0x10C($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206290u, 0x206298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206298u;
label_206298:
    // 0x206298: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x206298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20629c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2062a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062a4: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x2062A4u;
    SET_GPR_U32(ctx, 31, 0x2062ACu);
    ctx->pc = 0x2062A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062A4u;
    // 0x2062a8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x2062A4u, 0x2062ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062ACu;
label_2062ac:
    // 0x2062ac: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2062acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062b0: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x2062b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2062b4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2062b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2062b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2062b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062bc: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2062BCu;
    SET_GPR_U32(ctx, 31, 0x2062C4u);
    ctx->pc = 0x2062C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062BCu;
    // 0x2062c0: 0xe7b5010c  swc1        $f21, 0x10C($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2062BCu, 0x2062C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062C4u;
label_2062c4:
    // 0x2062c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2062c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062c8: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x2062c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2062cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2062ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062d0: 0xc084784  jal         func_211E10
    ctx->pc = 0x2062D0u;
    SET_GPR_U32(ctx, 31, 0x2062D8u);
    ctx->pc = 0x2062D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062D0u;
    // 0x2062d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2062D0u, 0x2062D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062D8u;
label_2062d8:
    // 0x2062d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2062d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2062dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062e0: 0xc084814  jal         func_212050
    ctx->pc = 0x2062E0u;
    SET_GPR_U32(ctx, 31, 0x2062E8u);
    ctx->pc = 0x2062E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062E0u;
    // 0x2062e4: 0xe7b50114  swc1        $f21, 0x114($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2062E0u, 0x2062E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062E8u;
label_2062e8:
    // 0x2062e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2062e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2062ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2062f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062f4: 0xc084784  jal         func_211E10
    ctx->pc = 0x2062F4u;
    SET_GPR_U32(ctx, 31, 0x2062FCu);
    ctx->pc = 0x2062F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062F4u;
    // 0x2062f8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2062F4u, 0x2062FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062FCu;
label_2062fc:
    // 0x2062fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2062fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206304: 0xc084814  jal         func_212050
    ctx->pc = 0x206304u;
    SET_GPR_U32(ctx, 31, 0x20630Cu);
    ctx->pc = 0x206308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206304u;
    // 0x206308: 0xe7b50114  swc1        $f21, 0x114($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x206304u, 0x20630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20630Cu;
label_20630c:
    // 0x20630c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x20630cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x206310: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x206310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206314: 0x450001c3  bc1f        . + 4 + (0x1C3 << 2)
    ctx->pc = 0x206314u;
    {
        const bool branch_taken_0x206314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206314u;
        // 0x206318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206314) {
            ctx->pc = 0x206A24u;
            goto label_206a24;
        }
    }
    ctx->pc = 0x20631Cu;
    // 0x20631c: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x20631cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206320: 0x450201c1  bc1fl       . + 4 + (0x1C1 << 2)
    ctx->pc = 0x206320u;
    {
        const bool branch_taken_0x206320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206320) {
            ctx->pc = 0x206324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206320u;
            // 0x206324: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206A28u;
            goto label_206a28;
        }
    }
    ctx->pc = 0x206328u;
    // 0x206328: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x206328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x20632c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x206330: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206330u;
    SET_GPR_U32(ctx, 31, 0x206338u);
    ctx->pc = 0x206334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206330u;
    // 0x206334: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206330u, 0x206338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206338u;
label_206338:
    // 0x206338: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x206338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20633c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x20633cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x206340: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206340u;
    SET_GPR_U32(ctx, 31, 0x206348u);
    ctx->pc = 0x206344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206340u;
    // 0x206344: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206340u, 0x206348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206348u;
label_206348:
    // 0x206348: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x206348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20634c: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x20634cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x206350: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206350u;
    SET_GPR_U32(ctx, 31, 0x206358u);
    ctx->pc = 0x206354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206350u;
    // 0x206354: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206350u, 0x206358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206358u;
label_206358:
    // 0x206358: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20635c: 0x27b70140  addiu       $s7, $sp, 0x140
    ctx->pc = 0x20635cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x206360: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x206360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206364: 0xc084784  jal         func_211E10
    ctx->pc = 0x206364u;
    SET_GPR_U32(ctx, 31, 0x20636Cu);
    ctx->pc = 0x206368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206364u;
    // 0x206368: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x206364u, 0x20636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20636Cu;
label_20636c:
    // 0x20636c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206370: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x206370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206374: 0xc0847da  jal         func_211F68
    ctx->pc = 0x206374u;
    SET_GPR_U32(ctx, 31, 0x20637Cu);
    ctx->pc = 0x206378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206374u;
    // 0x206378: 0xe7b6014c  swc1        $f22, 0x14C($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x206374u, 0x20637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20637Cu;
label_20637c:
    // 0x20637c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206380: 0xc084814  jal         func_212050
    ctx->pc = 0x206380u;
    SET_GPR_U32(ctx, 31, 0x206388u);
    ctx->pc = 0x206384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206380u;
    // 0x206384: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x206380u, 0x206388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206388u;
label_206388:
    // 0x206388: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x206388u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20638c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x20638Cu;
    {
        const bool branch_taken_0x20638c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20638Cu;
        // 0x206390: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20638c) {
            ctx->pc = 0x2063B8u;
            goto label_2063b8;
        }
    }
    ctx->pc = 0x206394u;
    // 0x206394: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x206394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206398: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x206398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20639c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2063a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063a4: 0xc08166c  jal         func_2059B0
    ctx->pc = 0x2063A4u;
    SET_GPR_U32(ctx, 31, 0x2063ACu);
    ctx->pc = 0x2063A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063A4u;
    // 0x2063a8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2059B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2059B0u, 0x2063A4u, 0x2063ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063ACu;
label_2063ac:
    // 0x2063ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2063ACu;
    {
        const bool branch_taken_0x2063ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063ACu;
        // 0x2063b0: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063ac) {
            ctx->pc = 0x2063D4u;
            goto label_2063d4;
        }
    }
    ctx->pc = 0x2063B4u;
    // 0x2063b4: 0x0  nop
    ctx->pc = 0x2063b4u;
    // NOP
label_2063b8:
    // 0x2063b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2063b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2063bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2063c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2063c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063c8: 0xc0816e6  jal         func_205B98
    ctx->pc = 0x2063C8u;
    SET_GPR_U32(ctx, 31, 0x2063D0u);
    ctx->pc = 0x2063CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063C8u;
    // 0x2063cc: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B98u, 0x2063C8u, 0x2063D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063D0u;
label_2063d0:
    // 0x2063d0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2063d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_2063d4:
    // 0x2063d4: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2063d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2063d8: 0xc443210c  lwc1        $f3, 0x210C($v0)
    ctx->pc = 0x2063d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2063dc: 0x27b50130  addiu       $s5, $sp, 0x130
    ctx->pc = 0x2063dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2063e0: 0xc4602110  lwc1        $f0, 0x2110($v1)
    ctx->pc = 0x2063e0u;
    { uint32_t bits = FAST_READ32(0x152110u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2063e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2063e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063e8: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x2063e8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x2063ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2063ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063f0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2063f0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2063f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2063f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2063f8:
    // 0x2063f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2063f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2063fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2063fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206400: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x206400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206404: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x206404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206408: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x206408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20640c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20640Cu;
    {
        const bool branch_taken_0x20640c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20640Cu;
        // 0x206410: 0x2a030004  slti        $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20640c) {
            ctx->pc = 0x206418u;
            goto label_206418;
        }
    }
    ctx->pc = 0x206414u;
    // 0x206414: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x206414u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_206418:
    // 0x206418: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x206418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20641c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20641Cu;
    {
        const bool branch_taken_0x20641c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20641c) {
            ctx->pc = 0x206420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20641Cu;
            // 0x206420: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206424u;
            goto label_206424;
        }
    }
    ctx->pc = 0x206424u;
label_206424:
    // 0x206424: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x206424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206428: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x206428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20642c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20642Cu;
    {
        const bool branch_taken_0x20642c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20642c) {
            ctx->pc = 0x206430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20642Cu;
            // 0x206430: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206434u;
            goto label_206434;
        }
    }
    ctx->pc = 0x206434u;
label_206434:
    // 0x206434: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x206434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206438: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x206438u;
    {
        const bool branch_taken_0x206438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206438) {
            ctx->pc = 0x20643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206438u;
            // 0x20643c: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206440u;
            goto label_206440;
        }
    }
    ctx->pc = 0x206440u;
label_206440:
    // 0x206440: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x206440u;
    {
        const bool branch_taken_0x206440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206440u;
        // 0x206444: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206440) {
            ctx->pc = 0x2063F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2063f8;
        }
    }
    ctx->pc = 0x206448u;
    // 0x206448: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x206448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x20644c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20644cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x206450: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x206450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206454: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x206454u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x206458: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x206458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x20645c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206460: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x206460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x206464: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x206464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206468: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x206468u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x20646c: 0x2673b548  addiu       $s3, $s3, -0x4AB8
    ctx->pc = 0x20646cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948168));
    // 0x206470: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x206470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x206474: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x206474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206478: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x206478u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20647c: 0x46011502  mul.s       $f20, $f2, $f1
    ctx->pc = 0x20647cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x206480: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206484: 0x0  nop
    ctx->pc = 0x206484u;
    // NOP
label_206488:
    // 0x206488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20648c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x20648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x206490: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206494: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x206494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206498: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x206498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20649c: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x20649cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x2064a0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2064a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2064a4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2064a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2064a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2064a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2064ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2064acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2064b0: 0xe7b6014c  swc1        $f22, 0x14C($sp)
    ctx->pc = 0x2064b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2064b4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2064b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2064b8: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2064B8u;
    SET_GPR_U32(ctx, 31, 0x2064C0u);
    ctx->pc = 0x2064BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064B8u;
    // 0x2064bc: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2064B8u, 0x2064C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064C0u;
label_2064c0:
    // 0x2064c0: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x2064c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2064c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2064c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064c8: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x2064C8u;
    SET_GPR_U32(ctx, 31, 0x2064D0u);
    ctx->pc = 0x2064CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064C8u;
    // 0x2064cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x2064C8u, 0x2064D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064D0u;
label_2064d0:
    // 0x2064d0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2064d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2064d4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2064d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2064d8: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x2064d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2064dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2064dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2064e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2064e4: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2064E4u;
    SET_GPR_U32(ctx, 31, 0x2064ECu);
    ctx->pc = 0x2064E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064E4u;
    // 0x2064e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2064E4u, 0x2064ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064ECu;
label_2064ec:
    // 0x2064ec: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2064ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2064f0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2064F0u;
    {
        const bool branch_taken_0x2064f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2064F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064F0u;
        // 0x2064f4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064f0) {
            ctx->pc = 0x206488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206488;
        }
    }
    ctx->pc = 0x2064F8u;
    // 0x2064f8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2064fc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2064fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206500: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x206500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206504: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206508: 0xc081676  jal         func_2059D8
    ctx->pc = 0x206508u;
    SET_GPR_U32(ctx, 31, 0x206510u);
    ctx->pc = 0x20650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206508u;
    // 0x20650c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2059D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2059D8u, 0x206508u, 0x206510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206510u;
label_206510:
    // 0x206510: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x206510u;
    {
        const bool branch_taken_0x206510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206510u;
        // 0x206514: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206510) {
            ctx->pc = 0x206A20u;
            goto label_206a20;
        }
    }
    ctx->pc = 0x206518u;
    // 0x206518: 0x86420172  lh          $v0, 0x172($s2)
    ctx->pc = 0x206518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 370)));
    // 0x20651c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206520: 0xafa4016c  sw          $a0, 0x16C($sp)
    ctx->pc = 0x206520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
    // 0x206524: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x206524u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206528: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206528u;
    {
        const bool branch_taken_0x206528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206528u;
        // 0x20652c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206528) {
            ctx->pc = 0x206538u;
            goto label_206538;
        }
    }
    ctx->pc = 0x206530u;
    // 0x206530: 0x92420187  lbu         $v0, 0x187($s2)
    ctx->pc = 0x206530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 391)));
    // 0x206534: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x206534u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_206538:
    // 0x206538: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206538u;
    {
        const bool branch_taken_0x206538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206538u;
        // 0x20653c: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206538) {
            ctx->pc = 0x206554u;
            goto label_206554;
        }
    }
    ctx->pc = 0x206540u;
    // 0x206540: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x206540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206548: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x206548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20654c: 0xc08166c  jal         func_2059B0
    ctx->pc = 0x20654Cu;
    SET_GPR_U32(ctx, 31, 0x206554u);
    ctx->pc = 0x206550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20654Cu;
    // 0x206550: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2059B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2059B0u, 0x20654Cu, 0x206554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206554u;
label_206554:
    // 0x206554: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x206554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206558: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x206558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20655c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x20655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206560: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x206560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206564: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x206564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206568: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x206568u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x20656c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x20656cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x206570: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x206570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206574: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206574u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206578: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x206578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20657c: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x20657cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x206580: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x206580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x206584: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206584u;
    SET_GPR_U32(ctx, 31, 0x20658Cu);
    ctx->pc = 0x206588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206584u;
    // 0x206588: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206584u, 0x20658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20658Cu;
label_20658c:
    // 0x20658c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x20658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206590: 0xc7808334  lwc1        $f0, -0x7CCC($gp)
    ctx->pc = 0x206590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206594: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x206594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206598: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x206598u;
    {
        const bool branch_taken_0x206598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206598u;
        // 0x20659c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206598) {
            ctx->pc = 0x2065B0u;
            goto label_2065b0;
        }
    }
    ctx->pc = 0x2065A0u;
    // 0x2065a0: 0xc7808338  lwc1        $f0, -0x7CC8($gp)
    ctx->pc = 0x2065a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2065a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2065A4u;
    {
        const bool branch_taken_0x2065a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2065A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065A4u;
        // 0x2065a8: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065a4) {
            ctx->pc = 0x2065C8u;
            goto label_2065c8;
        }
    }
    ctx->pc = 0x2065ACu;
    // 0x2065ac: 0x0  nop
    ctx->pc = 0x2065acu;
    // NOP
label_2065b0:
    // 0x2065b0: 0xc780833c  lwc1        $f0, -0x7CC4($gp)
    ctx->pc = 0x2065b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2065b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2065b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2065b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2065B8u;
    {
        const bool branch_taken_0x2065b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2065b8) {
            ctx->pc = 0x2065C8u;
            goto label_2065c8;
        }
    }
    ctx->pc = 0x2065C0u;
    // 0x2065c0: 0xc7808340  lwc1        $f0, -0x7CC0($gp)
    ctx->pc = 0x2065c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2065c4: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x2065c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2065c8:
    // 0x2065c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2065c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2065cc: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2065ccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x2065d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2065d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2065d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2065D4u;
    {
        const bool branch_taken_0x2065d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2065d4) {
            ctx->pc = 0x2065E4u;
            goto label_2065e4;
        }
    }
    ctx->pc = 0x2065DCu;
    // 0x2065dc: 0xc7808344  lwc1        $f0, -0x7CBC($gp)
    ctx->pc = 0x2065dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2065e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2065e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2065e4:
    // 0x2065e4: 0xc7808348  lwc1        $f0, -0x7CB8($gp)
    ctx->pc = 0x2065e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2065e8: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2065e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2065ec: 0xc794834c  lwc1        $f20, -0x7CB4($gp)
    ctx->pc = 0x2065ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2065f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2065f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2065f4: 0xc7ac0128  lwc1        $f12, 0x128($sp)
    ctx->pc = 0x2065f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2065f8: 0xc7ad0120  lwc1        $f13, 0x120($sp)
    ctx->pc = 0x2065f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2065fc: 0x0  nop
    ctx->pc = 0x2065fcu;
    // NOP
    // 0x206600: 0x0  nop
    ctx->pc = 0x206600u;
    // NOP
    // 0x206604: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x206604u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x206608: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20660c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20660cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206610: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x206610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x206614: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x206618: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x206618u;
    SET_GPR_U32(ctx, 31, 0x206620u);
    ctx->pc = 0x20661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206618u;
    // 0x20661c: 0x28023  negu        $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x206618u, 0x206620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206620u;
label_206620:
    // 0x206620: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x206620u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x206624: 0xc7808350  lwc1        $f0, -0x7CB0($gp)
    ctx->pc = 0x206624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206628: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x206628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20662c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20662Cu;
    {
        const bool branch_taken_0x20662c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20662Cu;
        // 0x206630: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20662c) {
            ctx->pc = 0x206640u;
            goto label_206640;
        }
    }
    ctx->pc = 0x206634u;
    // 0x206634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206634u;
    {
        const bool branch_taken_0x206634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206634u;
        // 0x206638: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206634) {
            ctx->pc = 0x206650u;
            goto label_206650;
        }
    }
    ctx->pc = 0x20663Cu;
    // 0x20663c: 0x0  nop
    ctx->pc = 0x20663cu;
    // NOP
label_206640:
    // 0x206640: 0xc7808354  lwc1        $f0, -0x7CAC($gp)
    ctx->pc = 0x206640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206648: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x206648u;
    {
        const bool branch_taken_0x206648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206648) {
            ctx->pc = 0x20664Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206648u;
            // 0x20664c: 0x46140880  add.s       $f2, $f1, $f20 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206650u;
            goto label_206650;
        }
    }
    ctx->pc = 0x206650u;
label_206650:
    // 0x206650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206654: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x206654u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x206658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20665c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20665Cu;
    {
        const bool branch_taken_0x20665c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20665c) {
            ctx->pc = 0x20666Cu;
            goto label_20666c;
        }
    }
    ctx->pc = 0x206664u;
    // 0x206664: 0xc7808358  lwc1        $f0, -0x7CA8($gp)
    ctx->pc = 0x206664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206668: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x206668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20666c:
    // 0x20666c: 0xc780835c  lwc1        $f0, -0x7CA4($gp)
    ctx->pc = 0x20666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206670: 0xc7948360  lwc1        $f20, -0x7CA0($gp)
    ctx->pc = 0x206670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206674: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x206674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206678: 0x0  nop
    ctx->pc = 0x206678u;
    // NOP
    // 0x20667c: 0x0  nop
    ctx->pc = 0x20667cu;
    // NOP
    // 0x206680: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x206680u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x206684: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206684u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x206688: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x206688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20668c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20668cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x206690: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x206690u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x206694: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x206694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x206698: 0x2451e000  addiu       $s1, $v0, -0x2000
    ctx->pc = 0x206698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x20669c: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20669Cu;
    {
        const bool branch_taken_0x20669c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2066A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20669Cu;
        // 0x2066a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20669c) {
            ctx->pc = 0x2066ACu;
            goto label_2066ac;
        }
    }
    ctx->pc = 0x2066A4u;
    // 0x2066a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2066a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2066a8: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x2066a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_2066ac:
    // 0x2066ac: 0x2143b  dsra        $v0, $v0, 16
    ctx->pc = 0x2066acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 16);
    // 0x2066b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2066b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2066b4: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x2066b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
    // 0x2066b8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2066B8u;
    {
        const bool branch_taken_0x2066b8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2066BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066B8u;
        // 0x2066bc: 0xc7ac0128  lwc1        $f12, 0x128($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066b8) {
            ctx->pc = 0x2066C8u;
            goto label_2066c8;
        }
    }
    ctx->pc = 0x2066C0u;
    // 0x2066c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2066c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2066c4: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x2066c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_2066c8:
    // 0x2066c8: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2066c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2066cc: 0xc7ad0120  lwc1        $f13, 0x120($sp)
    ctx->pc = 0x2066ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2066d0: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2066D0u;
    SET_GPR_U32(ctx, 31, 0x2066D8u);
    ctx->pc = 0x2066D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2066D0u;
    // 0x2066d4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2066D0u, 0x2066D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066D8u;
label_2066d8:
    // 0x2066d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2066d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2066dc: 0xc7808364  lwc1        $f0, -0x7C9C($gp)
    ctx->pc = 0x2066dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2066e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2066e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2066e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2066E4u;
    {
        const bool branch_taken_0x2066e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2066E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066E4u;
        // 0x2066e8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066e4) {
            ctx->pc = 0x2066F8u;
            goto label_2066f8;
        }
    }
    ctx->pc = 0x2066ECu;
    // 0x2066ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2066ECu;
    {
        const bool branch_taken_0x2066ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066ECu;
        // 0x2066f0: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066ec) {
            ctx->pc = 0x206708u;
            goto label_206708;
        }
    }
    ctx->pc = 0x2066F4u;
    // 0x2066f4: 0x0  nop
    ctx->pc = 0x2066f4u;
    // NOP
label_2066f8:
    // 0x2066f8: 0xc7808368  lwc1        $f0, -0x7C98($gp)
    ctx->pc = 0x2066f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2066fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2066fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206700: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x206700u;
    {
        const bool branch_taken_0x206700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206700) {
            ctx->pc = 0x206704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206700u;
            // 0x206704: 0x46140880  add.s       $f2, $f1, $f20 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206708u;
            goto label_206708;
        }
    }
    ctx->pc = 0x206708u;
label_206708:
    // 0x206708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20670c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x20670cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x206710: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206714: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x206714u;
    {
        const bool branch_taken_0x206714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206714) {
            ctx->pc = 0x206724u;
            goto label_206724;
        }
    }
    ctx->pc = 0x20671Cu;
    // 0x20671c: 0xc780836c  lwc1        $f0, -0x7C94($gp)
    ctx->pc = 0x20671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206720: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x206720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_206724:
    // 0x206724: 0xc7808370  lwc1        $f0, -0x7C90($gp)
    ctx->pc = 0x206724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206728: 0xc7838374  lwc1        $f3, -0x7C8C($gp)
    ctx->pc = 0x206728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20672c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20672cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206730: 0x8643014e  lh          $v1, 0x14E($s2)
    ctx->pc = 0x206730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
    // 0x206734: 0x0  nop
    ctx->pc = 0x206734u;
    // NOP
    // 0x206738: 0x0  nop
    ctx->pc = 0x206738u;
    // NOP
    // 0x20673c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x20673cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x206740: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206740u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x206744: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x206744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206748: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x206748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x20674c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x206750: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x206750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x206754: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x206754u;
    {
        const bool branch_taken_0x206754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206754u;
        // 0x206758: 0x2a403  sra         $s4, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206754) {
            ctx->pc = 0x2067F0u;
            goto label_2067f0;
        }
    }
    ctx->pc = 0x20675Cu;
    // 0x20675c: 0x86420148  lh          $v0, 0x148($s2)
    ctx->pc = 0x20675cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x206760: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x206760u;
    {
        const bool branch_taken_0x206760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206760) {
            ctx->pc = 0x206764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206760u;
            // 0x206764: 0x964202aa  lhu         $v0, 0x2AA($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 682)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2067F4u;
            goto label_2067f4;
        }
    }
    ctx->pc = 0x206768u;
    // 0x206768: 0x92430184  lbu         $v1, 0x184($s2)
    ctx->pc = 0x206768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x20676c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x20676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x206770: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x206770u;
    {
        const bool branch_taken_0x206770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x206770) {
            ctx->pc = 0x206774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206770u;
            // 0x206774: 0x964202aa  lhu         $v0, 0x2AA($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 682)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2067F4u;
            goto label_2067f4;
        }
    }
    ctx->pc = 0x206778u;
    // 0x206778: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x206778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20677c: 0xc7808378  lwc1        $f0, -0x7C88($gp)
    ctx->pc = 0x20677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206780: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x206780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206784: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x206784u;
    {
        const bool branch_taken_0x206784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206784u;
        // 0x206788: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206784) {
            ctx->pc = 0x206798u;
            goto label_206798;
        }
    }
    ctx->pc = 0x20678Cu;
    // 0x20678c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20678Cu;
    {
        const bool branch_taken_0x20678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20678Cu;
        // 0x206790: 0x46031041  sub.s       $f1, $f2, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20678c) {
            ctx->pc = 0x2067A8u;
            goto label_2067a8;
        }
    }
    ctx->pc = 0x206794u;
    // 0x206794: 0x0  nop
    ctx->pc = 0x206794u;
    // NOP
label_206798:
    // 0x206798: 0xc780837c  lwc1        $f0, -0x7C84($gp)
    ctx->pc = 0x206798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20679c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20679cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2067a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2067A0u;
    {
        const bool branch_taken_0x2067a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2067a0) {
            ctx->pc = 0x2067A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2067A0u;
            // 0x2067a4: 0x46031040  add.s       $f1, $f2, $f3 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2067A8u;
            goto label_2067a8;
        }
    }
    ctx->pc = 0x2067A8u;
label_2067a8:
    // 0x2067a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2067a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2067ac: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2067acu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2067b0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2067b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2067b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2067B4u;
    {
        const bool branch_taken_0x2067b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2067b4) {
            ctx->pc = 0x2067C4u;
            goto label_2067c4;
        }
    }
    ctx->pc = 0x2067BCu;
    // 0x2067bc: 0xc7808380  lwc1        $f0, -0x7C80($gp)
    ctx->pc = 0x2067bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2067c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2067c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2067c4:
    // 0x2067c4: 0xc7808384  lwc1        $f0, -0x7C7C($gp)
    ctx->pc = 0x2067c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2067c8: 0xc7818388  lwc1        $f1, -0x7C78($gp)
    ctx->pc = 0x2067c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2067cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2067ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2067d0: 0x0  nop
    ctx->pc = 0x2067d0u;
    // NOP
    // 0x2067d4: 0x0  nop
    ctx->pc = 0x2067d4u;
    // NOP
    // 0x2067d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2067d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2067dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2067dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2067e0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2067e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2067e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2067e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2067e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2067E8u;
    {
        const bool branch_taken_0x2067e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067E8u;
        // 0x2067ec: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067e8) {
            ctx->pc = 0x2067F4u;
            goto label_2067f4;
        }
    }
    ctx->pc = 0x2067F0u;
label_2067f0:
    // 0x2067f0: 0x964202aa  lhu         $v0, 0x2AA($s2)
    ctx->pc = 0x2067f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 682)));
label_2067f4:
    // 0x2067f4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2067f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2067f8: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x2067f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x2067fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2067fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x206800: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x206800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x206804: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x206804u;
    {
        const bool branch_taken_0x206804 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x206804) {
            ctx->pc = 0x206808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206804u;
            // 0x206808: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20680Cu;
            goto label_20680c;
        }
    }
    ctx->pc = 0x20680Cu;
label_20680c:
    // 0x20680c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x20680cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x206810: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x206810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x206814: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x206814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206818: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x206818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20681c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206820: 0xc084784  jal         func_211E10
    ctx->pc = 0x206820u;
    SET_GPR_U32(ctx, 31, 0x206828u);
    ctx->pc = 0x206824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206820u;
    // 0x206824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x206820u, 0x206828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206828u;
label_206828:
    // 0x206828: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x206828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20682c: 0x26450750  addiu       $a1, $s2, 0x750
    ctx->pc = 0x20682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
    // 0x206830: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206830u;
    SET_GPR_U32(ctx, 31, 0x206838u);
    ctx->pc = 0x206834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206830u;
    // 0x206834: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206830u, 0x206838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206838u;
label_206838:
    // 0x206838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20683c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20683cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x206840: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x206840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206844: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x206844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x206848: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x206848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20684c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20684cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206850: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x206850u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x206854: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206858: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206858u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20685c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x20685cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206860: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x206860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x206864: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x206864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x206868: 0xc081676  jal         func_2059D8
    ctx->pc = 0x206868u;
    SET_GPR_U32(ctx, 31, 0x206870u);
    ctx->pc = 0x20686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206868u;
    // 0x20686c: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2059D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2059D8u, 0x206868u, 0x206870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206870u;
label_206870:
    // 0x206870: 0x86440222  lh          $a0, 0x222($s2)
    ctx->pc = 0x206870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 546)));
    // 0x206874: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x206874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x206878: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x206878u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x20687c: 0x96480222  lhu         $t0, 0x222($s2)
    ctx->pc = 0x20687cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 546)));
    // 0x206880: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x206880u;
    {
        const bool branch_taken_0x206880 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x206884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206880u;
        // 0x206884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206880) {
            ctx->pc = 0x2068B8u;
            goto label_2068b8;
        }
    }
    ctx->pc = 0x206888u;
    // 0x206888: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x206888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20688c: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x20688cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_206890:
    // 0x206890: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x206890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x206894: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x206894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x206898: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x206898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20689c: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x20689cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2068a0: 0x84430220  lh          $v1, 0x220($v0)
    ctx->pc = 0x2068a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2068a4: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2068a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2068a8: 0x741826  xor         $v1, $v1, $s4
    ctx->pc = 0x2068a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 20));
    // 0x2068ac: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2068acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2068b0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2068B0u;
    {
        const bool branch_taken_0x2068b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2068B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068B0u;
        // 0x2068b4: 0xafa2016c  sw          $v0, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068b0) {
            ctx->pc = 0x206890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206890;
        }
    }
    ctx->pc = 0x2068B8u;
label_2068b8:
    // 0x2068b8: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x2068b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2068bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2068BCu;
    {
        const bool branch_taken_0x2068bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068BCu;
        // 0x2068c0: 0x81400  sll         $v0, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068bc) {
            ctx->pc = 0x2068F0u;
            goto label_2068f0;
        }
    }
    ctx->pc = 0x2068C4u;
    // 0x2068c4: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x2068c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2068c8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x2068c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x2068cc: 0xa6430222  sh          $v1, 0x222($s2)
    ctx->pc = 0x2068ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x2068d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2068d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2068d4: 0xa4540224  sh          $s4, 0x224($v0)
    ctx->pc = 0x2068d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 548), (uint16_t)GPR_U32(ctx, 20));
    // 0x2068d8: 0x86430222  lh          $v1, 0x222($s2)
    ctx->pc = 0x2068d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 546)));
    // 0x2068dc: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2068dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2068e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2068E0u;
    {
        const bool branch_taken_0x2068e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2068E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068E0u;
        // 0x2068e4: 0x2e662390  sltiu       $a2, $s3, 0x2390 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9104) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068e0) {
            ctx->pc = 0x2068F4u;
            goto label_2068f4;
        }
    }
    ctx->pc = 0x2068E8u;
    // 0x2068e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2068e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2068ec: 0xa6420222  sh          $v0, 0x222($s2)
    ctx->pc = 0x2068ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 546), (uint16_t)GPR_U32(ctx, 2));
label_2068f0:
    // 0x2068f0: 0x2e662390  sltiu       $a2, $s3, 0x2390
    ctx->pc = 0x2068f0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9104) ? 1 : 0);
label_2068f4:
    // 0x2068f4: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2068F4u;
    {
        const bool branch_taken_0x2068f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068F4u;
        // 0x2068f8: 0x6623bc70  daddiu      $v1, $s1, -0x4390 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294950000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068f4) {
            ctx->pc = 0x206944u;
            goto label_206944;
        }
    }
    ctx->pc = 0x2068FCu;
    // 0x2068fc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2068fcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x206900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x206904: 0xc783838c  lwc1        $f3, -0x7C74($gp)
    ctx->pc = 0x206904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x206908: 0xc7818390  lwc1        $f1, -0x7C70($gp)
    ctx->pc = 0x206908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20690c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206910: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x206910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x206914: 0x0  nop
    ctx->pc = 0x206914u;
    // NOP
    // 0x206918: 0x0  nop
    ctx->pc = 0x206918u;
    // NOP
    // 0x20691c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x20691cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x206920: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x206920u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x206924: 0x460110a9  min.s       $f2, $f2, $f1
    ctx->pc = 0x206924u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[1]);
    // 0x206928: 0xc64001e0  lwc1        $f0, 0x1E0($s2)
    ctx->pc = 0x206928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20692c: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x20692cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x206930: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x206930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206934: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x206934u;
    {
        const bool branch_taken_0x206934 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206934u;
        // 0x206938: 0xe64001e0  swc1        $f0, 0x1E0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206934) {
            ctx->pc = 0x206940u;
            goto label_206940;
        }
    }
    ctx->pc = 0x20693Cu;
    // 0x20693c: 0xa6540220  sh          $s4, 0x220($s2)
    ctx->pc = 0x20693cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 544), (uint16_t)GPR_U32(ctx, 20));
label_206940:
    // 0x206940: 0x6623bc70  daddiu      $v1, $s1, -0x4390
    ctx->pc = 0x206940u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294950000);
label_206944:
    // 0x206944: 0x3402b8df  ori         $v0, $zero, 0xB8DF
    ctx->pc = 0x206944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47327);
    // 0x206948: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x206948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20694c: 0x6623c38f  daddiu      $v1, $s1, -0x3C71
    ctx->pc = 0x20694cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294951823);
    // 0x206950: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206954: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x206954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x206958: 0x82a80b  movn        $s5, $a0, $v0
    ctx->pc = 0x206958u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
    // 0x20695c: 0x6624838f  daddiu      $a0, $s1, -0x7C71
    ctx->pc = 0x20695cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294935439);
    // 0x206960: 0x2c63471f  sltiu       $v1, $v1, 0x471F
    ctx->pc = 0x206960u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18207) ? 1 : 0);
    // 0x206964: 0x36a20002  ori         $v0, $s5, 0x2
    ctx->pc = 0x206964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x206968: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x206968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x20696c: 0x2c84471f  sltiu       $a0, $a0, 0x471F
    ctx->pc = 0x20696cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18207) ? 1 : 0);
    // 0x206970: 0x43a80b  movn        $s5, $v0, $v1
    ctx->pc = 0x206970u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x206974: 0x3402b8e0  ori         $v0, $zero, 0xB8E0
    ctx->pc = 0x206974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47328);
    // 0x206978: 0x36a30004  ori         $v1, $s5, 0x4
    ctx->pc = 0x206978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
    // 0x20697c: 0x6625fc70  daddiu      $a1, $s1, -0x390
    ctx->pc = 0x20697cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294966384);
    // 0x206980: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x206980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x206984: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x206984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x206988: 0x64a80b  movn        $s5, $v1, $a0
    ctx->pc = 0x206988u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x20698c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x20698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x206990: 0x36a30008  ori         $v1, $s5, 0x8
    ctx->pc = 0x206990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
    // 0x206994: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x206994u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x206998: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x206998u;
    {
        const bool branch_taken_0x206998 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206998u;
        // 0x20699c: 0x38c30000  xori        $v1, $a2, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206998) {
            ctx->pc = 0x2069A8u;
            goto label_2069a8;
        }
    }
    ctx->pc = 0x2069A0u;
    // 0x2069a0: 0x36a20020  ori         $v0, $s5, 0x20
    ctx->pc = 0x2069a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
    // 0x2069a4: 0x43a80b  movn        $s5, $v0, $v1
    ctx->pc = 0x2069a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_2069a8:
    // 0x2069a8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2069a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2069ac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2069acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2069b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2069b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069b4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2069b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2069b8: 0x24440210  addiu       $a0, $v0, 0x210
    ctx->pc = 0x2069b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2069bc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2069bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069c0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2069c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2069c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2069c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2069c8: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x2069c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x2069cc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2069ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2069d0: 0x964302a0  lhu         $v1, 0x2A0($s2)
    ctx->pc = 0x2069d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 672)));
    // 0x2069d4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2069d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2069d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2069d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2069dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2069dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2069e0: 0xa64302a0  sh          $v1, 0x2A0($s2)
    ctx->pc = 0x2069e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 672), (uint16_t)GPR_U32(ctx, 3));
    // 0x2069e4: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x2069e4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2069e8: 0x2010  mfhi        $a0
    ctx->pc = 0x2069e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2069ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2069ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2069f0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2069f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2069f4: 0xc084784  jal         func_211E10
    ctx->pc = 0x2069F4u;
    SET_GPR_U32(ctx, 31, 0x2069FCu);
    ctx->pc = 0x2069F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069F4u;
    // 0x2069f8: 0x24840240  addiu       $a0, $a0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2069F4u, 0x2069FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069FCu;
label_2069fc:
    // 0x2069fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2069fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206a00: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x206a00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206a04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x206a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x206a08: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x206a08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x206a0c: 0x700314a9  por         $v0, $zero, $v1
    ctx->pc = 0x206a0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x206a10: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x206a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x206a14: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x206a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x206a18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x206A18u;
    {
        const bool branch_taken_0x206a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A18u;
        // 0x206a1c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a18) {
            ctx->pc = 0x206A24u;
            goto label_206a24;
        }
    }
    ctx->pc = 0x206A20u;
label_206a20:
    // 0x206a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x206a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206a24:
    // 0x206a24: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x206a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_206a28:
    // 0x206a28: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x206a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a2c: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x206a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x206a30: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x206a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x206a34: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x206a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x206a38: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x206a38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x206a3c: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x206a3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x206a40: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x206a40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x206a44: 0xdfb701a8  ld          $s7, 0x1A8($sp)
    ctx->pc = 0x206a44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x206a48: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x206a48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x206a4c: 0xdfbf01b8  ld          $ra, 0x1B8($sp)
    ctx->pc = 0x206a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x206a50: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x206a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x206a54: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x206a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x206a58: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x206a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x206A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A5Cu;
        // 0x206a60: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206A64u;
    // 0x206a64: 0x0  nop
    ctx->pc = 0x206a64u;
    // NOP
    ctx->pc = 0x206a68u;
}
