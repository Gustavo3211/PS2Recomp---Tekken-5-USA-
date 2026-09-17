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

// Function: sub_00206A68
// Address: 0x206a68 - 0x206e08
void sub_00206A68_0x206a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206A68_0x206a68");
#endif

    switch (ctx->pc) {
        case 0x206b38u: goto label_206b38;
        case 0x206b50u: goto label_206b50;
        case 0x206b68u: goto label_206b68;
        case 0x206b7cu: goto label_206b7c;
        case 0x206b94u: goto label_206b94;
        case 0x206ba8u: goto label_206ba8;
        case 0x206bb8u: goto label_206bb8;
        case 0x206bccu: goto label_206bcc;
        case 0x206bdcu: goto label_206bdc;
        case 0x206c08u: goto label_206c08;
        case 0x206c18u: goto label_206c18;
        case 0x206c28u: goto label_206c28;
        case 0x206c3cu: goto label_206c3c;
        case 0x206c4cu: goto label_206c4c;
        case 0x206c58u: goto label_206c58;
        case 0x206c78u: goto label_206c78;
        case 0x206c98u: goto label_206c98;
        case 0x206cc0u: goto label_206cc0;
        case 0x206d48u: goto label_206d48;
        case 0x206d80u: goto label_206d80;
        case 0x206d90u: goto label_206d90;
        case 0x206da8u: goto label_206da8;
        case 0x206dc4u: goto label_206dc4;
        default: break;
    }

    ctx->pc = 0x206a68u;

    // 0x206a68: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x206a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x206a6c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x206a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x206a70: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x206a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x206a74: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x206a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x206a78: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x206a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x206a7c: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x206a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x206a80: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x206a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x206a84: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x206a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x206a88: 0x27b30110  addiu       $s3, $sp, 0x110
    ctx->pc = 0x206a88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x206a8c: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x206a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x206a90: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x206a90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x206a94: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x206a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x206a98: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x206a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x206a9c: 0x7f080  sll         $fp, $a3, 2
    ctx->pc = 0x206a9cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x206aa0: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x206aa0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x206aa4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x206aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x206aa8: 0x2610b548  addiu       $s0, $s0, -0x4AB8
    ctx->pc = 0x206aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948168));
    // 0x206aac: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x206aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x206ab0: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x206ab0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x206ab4: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x206ab4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x206ab8: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x206ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x206abc: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x206abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x206ac0: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x206ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x206ac4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x206ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x206ac8: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x206ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x206acc: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x206accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x206ad0: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x206ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x206ad4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x206ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x206ad8: 0xafa8012c  sw          $t0, 0x12C($sp)
    ctx->pc = 0x206ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 8));
    // 0x206adc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x206adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x206ae0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x206ae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x206ae4: 0x78a80040  lq          $t0, 0x40($a1)
    ctx->pc = 0x206ae4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x206ae8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206aec: 0xc48205d4  lwc1        $f2, 0x5D4($a0)
    ctx->pc = 0x206aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206af0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x206af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206af4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x206af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x206af8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206afc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x206afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x206b00: 0x786205d0  lq          $v0, 0x5D0($v1)
    ctx->pc = 0x206b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 1488)));
    // 0x206b04: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x206b04u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x206b08: 0x7e680000  sq          $t0, 0x0($s3)
    ctx->pc = 0x206b08u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 8));
    // 0x206b0c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x206b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x206b10: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x206b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206b14: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x206b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206b18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206b18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206b1c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x206b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x206b20: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x206b20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x206b24: 0xe7b50114  swc1        $f21, 0x114($sp)
    ctx->pc = 0x206b24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x206b28: 0xe7b6011c  swc1        $f22, 0x11C($sp)
    ctx->pc = 0x206b28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x206b2c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x206b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x206b30: 0xc0847da  jal         func_211F68
    ctx->pc = 0x206B30u;
    SET_GPR_U32(ctx, 31, 0x206B38u);
    ctx->pc = 0x206B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B30u;
    // 0x206b34: 0xe7a10118  swc1        $f1, 0x118($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x206B30u, 0x206B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B38u;
label_206b38:
    // 0x206b38: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x206b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x206b3c: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x206b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x206b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b48: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x206B48u;
    SET_GPR_U32(ctx, 31, 0x206B50u);
    ctx->pc = 0x206B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B48u;
    // 0x206b4c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x206B48u, 0x206B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B50u;
label_206b50:
    // 0x206b50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x206b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b54: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x206b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x206b58: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x206b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x206b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b60: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206B60u;
    SET_GPR_U32(ctx, 31, 0x206B68u);
    ctx->pc = 0x206B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B60u;
    // 0x206b64: 0xe7b500fc  swc1        $f21, 0xFC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206B60u, 0x206B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B68u;
label_206b68:
    // 0x206b68: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x206b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x206b6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b74: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x206B74u;
    SET_GPR_U32(ctx, 31, 0x206B7Cu);
    ctx->pc = 0x206B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B74u;
    // 0x206b78: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x206B74u, 0x206B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B7Cu;
label_206b7c:
    // 0x206b7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x206b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b80: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206b84: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x206b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x206b88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x206b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b8c: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206B8Cu;
    SET_GPR_U32(ctx, 31, 0x206B94u);
    ctx->pc = 0x206B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B8Cu;
    // 0x206b90: 0xe7b500fc  swc1        $f21, 0xFC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206B8Cu, 0x206B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B94u;
label_206b94:
    // 0x206b94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b98: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x206b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x206b9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x206b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ba0: 0xc084784  jal         func_211E10
    ctx->pc = 0x206BA0u;
    SET_GPR_U32(ctx, 31, 0x206BA8u);
    ctx->pc = 0x206BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BA0u;
    // 0x206ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x206BA0u, 0x206BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BA8u;
label_206ba8:
    // 0x206ba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x206ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bb0: 0xc084814  jal         func_212050
    ctx->pc = 0x206BB0u;
    SET_GPR_U32(ctx, 31, 0x206BB8u);
    ctx->pc = 0x206BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BB0u;
    // 0x206bb4: 0xe7b50104  swc1        $f21, 0x104($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x206BB0u, 0x206BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BB8u;
label_206bb8:
    // 0x206bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bc0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x206bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bc4: 0xc084784  jal         func_211E10
    ctx->pc = 0x206BC4u;
    SET_GPR_U32(ctx, 31, 0x206BCCu);
    ctx->pc = 0x206BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BC4u;
    // 0x206bc8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x206BC4u, 0x206BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BCCu;
label_206bcc:
    // 0x206bcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x206bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bd4: 0xc084814  jal         func_212050
    ctx->pc = 0x206BD4u;
    SET_GPR_U32(ctx, 31, 0x206BDCu);
    ctx->pc = 0x206BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BD4u;
    // 0x206bd8: 0xe7b50104  swc1        $f21, 0x104($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x206BD4u, 0x206BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BDCu;
label_206bdc:
    // 0x206bdc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x206bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x206be0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x206be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206be4: 0x45000078  bc1f        . + 4 + (0x78 << 2)
    ctx->pc = 0x206BE4u;
    {
        const bool branch_taken_0x206be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE4u;
        // 0x206be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206be4) {
            ctx->pc = 0x206DC8u;
            goto label_206dc8;
        }
    }
    ctx->pc = 0x206BECu;
    // 0x206bec: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x206becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206bf0: 0x45020076  bc1fl       . + 4 + (0x76 << 2)
    ctx->pc = 0x206BF0u;
    {
        const bool branch_taken_0x206bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206bf0) {
            ctx->pc = 0x206BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206BF0u;
            // 0x206bf4: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206DCCu;
            goto label_206dcc;
        }
    }
    ctx->pc = 0x206BF8u;
    // 0x206bf8: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x206bfc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x206bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x206c00: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206C00u;
    SET_GPR_U32(ctx, 31, 0x206C08u);
    ctx->pc = 0x206C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C00u;
    // 0x206c04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206C00u, 0x206C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C08u;
label_206c08:
    // 0x206c08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x206c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c0c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x206c10: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206C10u;
    SET_GPR_U32(ctx, 31, 0x206C18u);
    ctx->pc = 0x206C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C10u;
    // 0x206c14: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206C10u, 0x206C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C18u;
label_206c18:
    // 0x206c18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x206c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c1c: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x206c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x206c20: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206C20u;
    SET_GPR_U32(ctx, 31, 0x206C28u);
    ctx->pc = 0x206C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C20u;
    // 0x206c24: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206C20u, 0x206C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C28u;
label_206c28:
    // 0x206c28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x206c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c2c: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x206c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x206c30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x206c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c34: 0xc084784  jal         func_211E10
    ctx->pc = 0x206C34u;
    SET_GPR_U32(ctx, 31, 0x206C3Cu);
    ctx->pc = 0x206C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C34u;
    // 0x206c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x206C34u, 0x206C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C3Cu;
label_206c3c:
    // 0x206c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c44: 0xc0847da  jal         func_211F68
    ctx->pc = 0x206C44u;
    SET_GPR_U32(ctx, 31, 0x206C4Cu);
    ctx->pc = 0x206C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C44u;
    // 0x206c48: 0xe7b6013c  swc1        $f22, 0x13C($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x206C44u, 0x206C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C4Cu;
label_206c4c:
    // 0x206c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x206c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c50: 0xc084814  jal         func_212050
    ctx->pc = 0x206C50u;
    SET_GPR_U32(ctx, 31, 0x206C58u);
    ctx->pc = 0x206C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C50u;
    // 0x206c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x206C50u, 0x206C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C58u;
label_206c58:
    // 0x206c58: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x206c58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206c5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x206C5Cu;
    {
        const bool branch_taken_0x206c5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C5Cu;
        // 0x206c60: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c5c) {
            ctx->pc = 0x206C80u;
            goto label_206c80;
        }
    }
    ctx->pc = 0x206C64u;
    // 0x206c64: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x206c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x206c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c70: 0xc08166c  jal         func_2059B0
    ctx->pc = 0x206C70u;
    SET_GPR_U32(ctx, 31, 0x206C78u);
    ctx->pc = 0x206C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C70u;
    // 0x206c74: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2059B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2059B0u, 0x206C70u, 0x206C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C78u;
label_206c78:
    // 0x206c78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x206C78u;
    {
        const bool branch_taken_0x206c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C78u;
        // 0x206c7c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c78) {
            ctx->pc = 0x206C9Cu;
            goto label_206c9c;
        }
    }
    ctx->pc = 0x206C80u;
label_206c80:
    // 0x206c80: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x206c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x206c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c8c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x206c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c90: 0xc0816e6  jal         func_205B98
    ctx->pc = 0x206C90u;
    SET_GPR_U32(ctx, 31, 0x206C98u);
    ctx->pc = 0x206C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C90u;
    // 0x206c94: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B98u, 0x206C90u, 0x206C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C98u;
label_206c98:
    // 0x206c98: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x206c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_206c9c:
    // 0x206c9c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x206c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x206ca0: 0xc4432114  lwc1        $f3, 0x2114($v0)
    ctx->pc = 0x206ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x206ca4: 0x27b50120  addiu       $s5, $sp, 0x120
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x206ca8: 0xc4602118  lwc1        $f0, 0x2118($v1)
    ctx->pc = 0x206ca8u;
    { uint32_t bits = FAST_READ32(0x152118u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x206cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206cb0: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x206cb0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x206cb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206cb8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x206cb8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x206cbc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x206cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_206cc0:
    // 0x206cc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x206cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x206cc4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x206cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206cc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x206cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206ccc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x206cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206cd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x206cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206cd4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x206CD4u;
    {
        const bool branch_taken_0x206cd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CD4u;
        // 0x206cd8: 0x2a030004  slti        $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cd4) {
            ctx->pc = 0x206CE0u;
            goto label_206ce0;
        }
    }
    ctx->pc = 0x206CDCu;
    // 0x206cdc: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x206cdcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_206ce0:
    // 0x206ce0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x206ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206ce4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x206CE4u;
    {
        const bool branch_taken_0x206ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206ce4) {
            ctx->pc = 0x206CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206CE4u;
            // 0x206ce8: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CECu;
            goto label_206cec;
        }
    }
    ctx->pc = 0x206CECu;
label_206cec:
    // 0x206cec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x206cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206cf0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x206cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206cf4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x206CF4u;
    {
        const bool branch_taken_0x206cf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206cf4) {
            ctx->pc = 0x206CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206CF4u;
            // 0x206cf8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CFCu;
            goto label_206cfc;
        }
    }
    ctx->pc = 0x206CFCu;
label_206cfc:
    // 0x206cfc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x206cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206d00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x206D00u;
    {
        const bool branch_taken_0x206d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206d00) {
            ctx->pc = 0x206D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D00u;
            // 0x206d04: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D08u;
            goto label_206d08;
        }
    }
    ctx->pc = 0x206D08u;
label_206d08:
    // 0x206d08: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x206D08u;
    {
        const bool branch_taken_0x206d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D08u;
        // 0x206d0c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d08) {
            ctx->pc = 0x206CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206cc0;
        }
    }
    ctx->pc = 0x206D10u;
    // 0x206d10: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x206d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x206d14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x206d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x206d18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x206d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206d1c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x206d1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x206d20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206d24: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x206d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x206d28: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x206d28u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x206d2c: 0x2694b548  addiu       $s4, $s4, -0x4AB8
    ctx->pc = 0x206d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948168));
    // 0x206d30: 0x29ea021  addu        $s4, $s4, $fp
    ctx->pc = 0x206d30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x206d34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x206d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d38: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x206d38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x206d3c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x206d3cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x206d40: 0x46011502  mul.s       $f20, $f2, $f1
    ctx->pc = 0x206d40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x206d44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_206d48:
    // 0x206d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d4c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x206d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x206d50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x206d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206d58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x206d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206d5c: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x206d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x206d60: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x206d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x206d64: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x206d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x206d68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x206d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206d6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x206d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206d70: 0xe7b6013c  swc1        $f22, 0x13C($sp)
    ctx->pc = 0x206d70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x206d74: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x206d74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x206d78: 0xc0847da  jal         func_211F68
    ctx->pc = 0x206D78u;
    SET_GPR_U32(ctx, 31, 0x206D80u);
    ctx->pc = 0x206D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D78u;
    // 0x206d7c: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x206D78u, 0x206D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D80u;
label_206d80:
    // 0x206d80: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x206d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x206d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d88: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x206D88u;
    SET_GPR_U32(ctx, 31, 0x206D90u);
    ctx->pc = 0x206D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D88u;
    // 0x206d8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x206D88u, 0x206D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D90u;
label_206d90:
    // 0x206d90: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x206d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x206d94: 0x2c42821  addu        $a1, $s6, $a0
    ctx->pc = 0x206d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x206d98: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x206d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x206d9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x206d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206da0: 0xc084774  jal         func_211DD0
    ctx->pc = 0x206DA0u;
    SET_GPR_U32(ctx, 31, 0x206DA8u);
    ctx->pc = 0x206DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DA0u;
    // 0x206da4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x206DA0u, 0x206DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DA8u;
label_206da8:
    // 0x206da8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x206da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x206dac: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x206DACu;
    {
        const bool branch_taken_0x206dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DACu;
        // 0x206db0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206dac) {
            ctx->pc = 0x206D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206d48;
        }
    }
    ctx->pc = 0x206DB4u;
    // 0x206db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206db8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dbc: 0xc081676  jal         func_2059D8
    ctx->pc = 0x206DBCu;
    SET_GPR_U32(ctx, 31, 0x206DC4u);
    ctx->pc = 0x206DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DBCu;
    // 0x206dc0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2059D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2059D8u, 0x206DBCu, 0x206DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DC4u;
label_206dc4:
    // 0x206dc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x206dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_206dc8:
    // 0x206dc8: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x206dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_206dcc:
    // 0x206dcc: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x206dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x206dd0: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x206dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x206dd4: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x206dd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x206dd8: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x206dd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x206ddc: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x206ddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x206de0: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x206de0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x206de4: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x206de4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x206de8: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x206de8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x206dec: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x206decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x206df0: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x206df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x206df4: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x206df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x206df8: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x206df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x206DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DFCu;
        // 0x206e00: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206E04u;
    // 0x206e04: 0x0  nop
    ctx->pc = 0x206e04u;
    // NOP
    ctx->pc = 0x206e08u;
}
