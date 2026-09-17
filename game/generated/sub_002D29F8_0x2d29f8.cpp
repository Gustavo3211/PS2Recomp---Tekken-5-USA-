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

// Function: sub_002D29F8
// Address: 0x2d29f8 - 0x2d2fd8
void sub_002D29F8_0x2d29f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D29F8_0x2d29f8");
#endif

    switch (ctx->pc) {
        case 0x2d2a70u: goto label_2d2a70;
        case 0x2d2ab4u: goto label_2d2ab4;
        case 0x2d2ae0u: goto label_2d2ae0;
        case 0x2d2b0cu: goto label_2d2b0c;
        case 0x2d2b38u: goto label_2d2b38;
        case 0x2d2b68u: goto label_2d2b68;
        case 0x2d2b98u: goto label_2d2b98;
        case 0x2d2bccu: goto label_2d2bcc;
        case 0x2d2bfcu: goto label_2d2bfc;
        case 0x2d2c2cu: goto label_2d2c2c;
        case 0x2d2c54u: goto label_2d2c54;
        case 0x2d2c84u: goto label_2d2c84;
        case 0x2d2c98u: goto label_2d2c98;
        case 0x2d2cd0u: goto label_2d2cd0;
        case 0x2d2d08u: goto label_2d2d08;
        case 0x2d2d38u: goto label_2d2d38;
        case 0x2d2d64u: goto label_2d2d64;
        case 0x2d2d90u: goto label_2d2d90;
        case 0x2d2dc0u: goto label_2d2dc0;
        case 0x2d2ddcu: goto label_2d2ddc;
        case 0x2d2decu: goto label_2d2dec;
        case 0x2d2e10u: goto label_2d2e10;
        case 0x2d2e40u: goto label_2d2e40;
        case 0x2d2ed0u: goto label_2d2ed0;
        case 0x2d2f1cu: goto label_2d2f1c;
        case 0x2d2f50u: goto label_2d2f50;
        default: break;
    }

    ctx->pc = 0x2d29f8u;

    // 0x2d29f8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2d29f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2d29fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2d29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d2a00: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2d2a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2d2a04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d2a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a08: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x2d2a08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d2a0c: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2d2a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2d2a10: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2d2a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2d2a14: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d2a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a18: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2d2a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2d2a1c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2d2a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a20: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x2d2a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x2d2a24: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d2a24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a28: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2d2a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2d2a2c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d2a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a30: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2d2a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2d2a34: 0xe7b60148  swc1        $f22, 0x148($sp)
    ctx->pc = 0x2d2a34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2d2a38: 0xe7b50140  swc1        $f21, 0x140($sp)
    ctx->pc = 0x2d2a38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2d2a3c: 0x1810  mfhi        $v1
    ctx->pc = 0x2d2a3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d2a40: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2d2a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d2a44: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2D2A44u;
    {
        const bool branch_taken_0x2d2a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A44u;
        // 0x2d2a48: 0xe7b40138  swc1        $f20, 0x138($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a44) {
            ctx->pc = 0x2D2C90u;
            goto label_2d2c90;
        }
    }
    ctx->pc = 0x2D2A4Cu;
    // 0x2d2a4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2a50: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d2a54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2a58: 0x8c63ed30  lw          $v1, -0x12D0($v1)
    ctx->pc = 0x2d2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962480)));
    // 0x2d2a5c: 0x600008  jr          $v1
    ctx->pc = 0x2D2A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2A68u: goto label_2d2a68;
            case 0x2D2B90u: goto label_2d2b90;
            case 0x2D2C90u: goto label_2d2c90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2A5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D2A64u;
    // 0x2d2a64: 0x0  nop
    ctx->pc = 0x2d2a64u;
    // NOP
label_2d2a68:
    // 0x2d2a68: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2A68u;
    SET_GPR_U32(ctx, 31, 0x2D2A70u);
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2A68u, 0x2D2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A70u;
label_2d2a70:
    // 0x2d2a70: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x2d2a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x2d2a74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d2a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d2a78: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2a78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2a7c: 0xc79493a8  lwc1        $f20, -0x6C58($gp)
    ctx->pc = 0x2d2a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d2a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2a88: 0xc78193ac  lwc1        $f1, -0x6C54($gp)
    ctx->pc = 0x2d2a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2a8c: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2d2a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2d2a90: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2d2a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2d2a94: 0xc79693b0  lwc1        $f22, -0x6C50($gp)
    ctx->pc = 0x2d2a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d2a98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d2a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d2a9c: 0x0  nop
    ctx->pc = 0x2d2a9cu;
    // NOP
    // 0x2d2aa0: 0x0  nop
    ctx->pc = 0x2d2aa0u;
    // NOP
    // 0x2d2aa4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2aa4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2aa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2aac: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2AACu;
    SET_GPR_U32(ctx, 31, 0x2D2AB4u);
    ctx->pc = 0x2D2AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2AACu;
    // 0x2d2ab0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2AACu, 0x2D2AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AB4u;
label_2d2ab4:
    // 0x2d2ab4: 0xc78193b4  lwc1        $f1, -0x6C4C($gp)
    ctx->pc = 0x2d2ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2ab8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2ab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2ac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2ac4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2d2ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2d2ac8: 0x0  nop
    ctx->pc = 0x2d2ac8u;
    // NOP
    // 0x2d2acc: 0x0  nop
    ctx->pc = 0x2d2accu;
    // NOP
    // 0x2d2ad0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2ad0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2ad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2ad8: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2AD8u;
    SET_GPR_U32(ctx, 31, 0x2D2AE0u);
    ctx->pc = 0x2D2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2AD8u;
    // 0x2d2adc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2AD8u, 0x2D2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AE0u;
label_2d2ae0:
    // 0x2d2ae0: 0xc78193b8  lwc1        $f1, -0x6C48($gp)
    ctx->pc = 0x2d2ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2ae4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2ae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2af0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2af4: 0x0  nop
    ctx->pc = 0x2d2af4u;
    // NOP
    // 0x2d2af8: 0x0  nop
    ctx->pc = 0x2d2af8u;
    // NOP
    // 0x2d2afc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2afcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2b00: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2d2b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2d2b04: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2B04u;
    SET_GPR_U32(ctx, 31, 0x2D2B0Cu);
    ctx->pc = 0x2D2B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B04u;
    // 0x2d2b08: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2B04u, 0x2D2B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B0Cu;
label_2d2b0c:
    // 0x2d2b0c: 0xc78193bc  lwc1        $f1, -0x6C44($gp)
    ctx->pc = 0x2d2b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2b18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2b1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2b20: 0x0  nop
    ctx->pc = 0x2d2b20u;
    // NOP
    // 0x2d2b24: 0x0  nop
    ctx->pc = 0x2d2b24u;
    // NOP
    // 0x2d2b28: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2b28u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2b2c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2d2b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2d2b30: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2B30u;
    SET_GPR_U32(ctx, 31, 0x2D2B38u);
    ctx->pc = 0x2D2B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B30u;
    // 0x2d2b34: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2B30u, 0x2D2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B38u;
label_2d2b38:
    // 0x2d2b38: 0xc78193c0  lwc1        $f1, -0x6C40($gp)
    ctx->pc = 0x2d2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2b40: 0xc78293c4  lwc1        $f2, -0x6C3C($gp)
    ctx->pc = 0x2d2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2b48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2b4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2b50: 0x0  nop
    ctx->pc = 0x2d2b50u;
    // NOP
    // 0x2d2b54: 0x0  nop
    ctx->pc = 0x2d2b54u;
    // NOP
    // 0x2d2b58: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2b58u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2b5c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d2b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d2b60: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2B60u;
    SET_GPR_U32(ctx, 31, 0x2D2B68u);
    ctx->pc = 0x2D2B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B60u;
    // 0x2d2b64: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2B60u, 0x2D2B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B68u;
label_2d2b68:
    // 0x2d2b68: 0xc78193c8  lwc1        $f1, -0x6C38($gp)
    ctx->pc = 0x2d2b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2b6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2b74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2b78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2b7c: 0x0  nop
    ctx->pc = 0x2d2b7cu;
    // NOP
    // 0x2d2b80: 0x0  nop
    ctx->pc = 0x2d2b80u;
    // NOP
    // 0x2d2b84: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2b84u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2b88: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2D2B88u;
    {
        const bool branch_taken_0x2d2b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B88u;
        // 0x2d2b8c: 0x46160000  add.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b88) {
            ctx->pc = 0x2D2DB8u;
            goto label_2d2db8;
        }
    }
    ctx->pc = 0x2D2B90u;
label_2d2b90:
    // 0x2d2b90: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2B90u;
    SET_GPR_U32(ctx, 31, 0x2D2B98u);
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2B90u, 0x2D2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B98u;
label_2d2b98:
    // 0x2d2b98: 0xc78293cc  lwc1        $f2, -0x6C34($gp)
    ctx->pc = 0x2d2b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2b9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2b9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2ba0: 0xc79493d0  lwc1        $f20, -0x6C30($gp)
    ctx->pc = 0x2d2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d2ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2ba8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2bac: 0xc78193d4  lwc1        $f1, -0x6C2C($gp)
    ctx->pc = 0x2d2bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2bb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d2bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d2bb4: 0x0  nop
    ctx->pc = 0x2d2bb4u;
    // NOP
    // 0x2d2bb8: 0x0  nop
    ctx->pc = 0x2d2bb8u;
    // NOP
    // 0x2d2bbc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2bbcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2bc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2bc4: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2BC4u;
    SET_GPR_U32(ctx, 31, 0x2D2BCCu);
    ctx->pc = 0x2D2BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2BC4u;
    // 0x2d2bc8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2BC4u, 0x2D2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BCCu;
label_2d2bcc:
    // 0x2d2bcc: 0xc78193d8  lwc1        $f1, -0x6C28($gp)
    ctx->pc = 0x2d2bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2bd0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2bd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2bd4: 0xc78293dc  lwc1        $f2, -0x6C24($gp)
    ctx->pc = 0x2d2bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2bdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2be0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2be4: 0x0  nop
    ctx->pc = 0x2d2be4u;
    // NOP
    // 0x2d2be8: 0x0  nop
    ctx->pc = 0x2d2be8u;
    // NOP
    // 0x2d2bec: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2becu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2bf0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d2bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d2bf4: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2BF4u;
    SET_GPR_U32(ctx, 31, 0x2D2BFCu);
    ctx->pc = 0x2D2BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2BF4u;
    // 0x2d2bf8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2BF4u, 0x2D2BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BFCu;
label_2d2bfc:
    // 0x2d2bfc: 0xc78193e0  lwc1        $f1, -0x6C20($gp)
    ctx->pc = 0x2d2bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2c00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2c00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2c04: 0xc78293e4  lwc1        $f2, -0x6C1C($gp)
    ctx->pc = 0x2d2c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2c0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2c10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2c14: 0x0  nop
    ctx->pc = 0x2d2c14u;
    // NOP
    // 0x2d2c18: 0x0  nop
    ctx->pc = 0x2d2c18u;
    // NOP
    // 0x2d2c1c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2c1cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2c20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d2c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d2c24: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2C24u;
    SET_GPR_U32(ctx, 31, 0x2D2C2Cu);
    ctx->pc = 0x2D2C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C24u;
    // 0x2d2c28: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2C24u, 0x2D2C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C2Cu;
label_2d2c2c:
    // 0x2d2c2c: 0xc78193e8  lwc1        $f1, -0x6C18($gp)
    ctx->pc = 0x2d2c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2c30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2c38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2c3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2c40: 0x0  nop
    ctx->pc = 0x2d2c40u;
    // NOP
    // 0x2d2c44: 0x0  nop
    ctx->pc = 0x2d2c44u;
    // NOP
    // 0x2d2c48: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2c48u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2c4c: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2C4Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C54u);
    ctx->pc = 0x2D2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C4Cu;
    // 0x2d2c50: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2C4Cu, 0x2D2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C54u;
label_2d2c54:
    // 0x2d2c54: 0xc78193ec  lwc1        $f1, -0x6C14($gp)
    ctx->pc = 0x2d2c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2c58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2c58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2c5c: 0xc78293f0  lwc1        $f2, -0x6C10($gp)
    ctx->pc = 0x2d2c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2c64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2c68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2c6c: 0x0  nop
    ctx->pc = 0x2d2c6cu;
    // NOP
    // 0x2d2c70: 0x0  nop
    ctx->pc = 0x2d2c70u;
    // NOP
    // 0x2d2c74: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2c74u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2c78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d2c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d2c7c: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2C7Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C84u);
    ctx->pc = 0x2D2C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C7Cu;
    // 0x2d2c80: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2C7Cu, 0x2D2C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C84u;
label_2d2c84:
    // 0x2d2c84: 0xc78193f4  lwc1        $f1, -0x6C0C($gp)
    ctx->pc = 0x2d2c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2c88: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2D2C88u;
    {
        const bool branch_taken_0x2d2c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C88u;
        // 0x2d2c8c: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c88) {
            ctx->pc = 0x2D2D98u;
            goto label_2d2d98;
        }
    }
    ctx->pc = 0x2D2C90u;
label_2d2c90:
    // 0x2d2c90: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2C90u;
    SET_GPR_U32(ctx, 31, 0x2D2C98u);
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2C90u, 0x2D2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C98u;
label_2d2c98:
    // 0x2d2c98: 0xc78293f8  lwc1        $f2, -0x6C08($gp)
    ctx->pc = 0x2d2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2c9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2ca0: 0xc79493fc  lwc1        $f20, -0x6C04($gp)
    ctx->pc = 0x2d2ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d2ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2cac: 0xc7819400  lwc1        $f1, -0x6C00($gp)
    ctx->pc = 0x2d2cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2cb0: 0xc7959404  lwc1        $f21, -0x6BFC($gp)
    ctx->pc = 0x2d2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d2cb4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d2cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d2cb8: 0x0  nop
    ctx->pc = 0x2d2cb8u;
    // NOP
    // 0x2d2cbc: 0x0  nop
    ctx->pc = 0x2d2cbcu;
    // NOP
    // 0x2d2cc0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2cc0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2cc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2cc8: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2CC8u;
    SET_GPR_U32(ctx, 31, 0x2D2CD0u);
    ctx->pc = 0x2D2CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2CC8u;
    // 0x2d2ccc: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2CC8u, 0x2D2CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CD0u;
label_2d2cd0:
    // 0x2d2cd0: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x2d2cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
    // 0x2d2cd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d2cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2cd8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2cdc: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x2d2cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x2d2ce0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d2ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d2ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2ce8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2cf0: 0x0  nop
    ctx->pc = 0x2d2cf0u;
    // NOP
    // 0x2d2cf4: 0x0  nop
    ctx->pc = 0x2d2cf4u;
    // NOP
    // 0x2d2cf8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2cf8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2cfc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d2cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d2d00: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2D00u;
    SET_GPR_U32(ctx, 31, 0x2D2D08u);
    ctx->pc = 0x2D2D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D00u;
    // 0x2d2d04: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2D00u, 0x2D2D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D08u;
label_2d2d08:
    // 0x2d2d08: 0xc7819408  lwc1        $f1, -0x6BF8($gp)
    ctx->pc = 0x2d2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2d0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2d0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2d10: 0xc782940c  lwc1        $f2, -0x6BF4($gp)
    ctx->pc = 0x2d2d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2d1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2d20: 0x0  nop
    ctx->pc = 0x2d2d20u;
    // NOP
    // 0x2d2d24: 0x0  nop
    ctx->pc = 0x2d2d24u;
    // NOP
    // 0x2d2d28: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2d28u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2d2c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d2d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d2d30: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2D30u;
    SET_GPR_U32(ctx, 31, 0x2D2D38u);
    ctx->pc = 0x2D2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D30u;
    // 0x2d2d34: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2D30u, 0x2D2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D38u;
label_2d2d38:
    // 0x2d2d38: 0xc7819410  lwc1        $f1, -0x6BF0($gp)
    ctx->pc = 0x2d2d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2d3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2d3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2d48: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2d2d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2d2d4c: 0x0  nop
    ctx->pc = 0x2d2d4cu;
    // NOP
    // 0x2d2d50: 0x0  nop
    ctx->pc = 0x2d2d50u;
    // NOP
    // 0x2d2d54: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2d54u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2d58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2d5c: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2D5Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D64u);
    ctx->pc = 0x2D2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D5Cu;
    // 0x2d2d60: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2D5Cu, 0x2D2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D64u;
label_2d2d64:
    // 0x2d2d64: 0xc7819414  lwc1        $f1, -0x6BEC($gp)
    ctx->pc = 0x2d2d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2d68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2d68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2d74: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2d2d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2d2d78: 0x0  nop
    ctx->pc = 0x2d2d78u;
    // NOP
    // 0x2d2d7c: 0x0  nop
    ctx->pc = 0x2d2d7cu;
    // NOP
    // 0x2d2d80: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2d80u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2d84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2d88: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2D88u;
    SET_GPR_U32(ctx, 31, 0x2D2D90u);
    ctx->pc = 0x2D2D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D88u;
    // 0x2d2d8c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2D88u, 0x2D2D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D90u;
label_2d2d90:
    // 0x2d2d90: 0xc7819418  lwc1        $f1, -0x6BE8($gp)
    ctx->pc = 0x2d2d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2d94: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2d2d98:
    // 0x2d2d98: 0xc782941c  lwc1        $f2, -0x6BE4($gp)
    ctx->pc = 0x2d2d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2da0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2da4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2da8: 0x0  nop
    ctx->pc = 0x2d2da8u;
    // NOP
    // 0x2d2dac: 0x0  nop
    ctx->pc = 0x2d2dacu;
    // NOP
    // 0x2d2db0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2db0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d2db4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d2db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2d2db8:
    // 0x2d2db8: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2DB8u;
    SET_GPR_U32(ctx, 31, 0x2D2DC0u);
    ctx->pc = 0x2D2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DB8u;
    // 0x2d2dbc: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2DB8u, 0x2D2DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DC0u;
label_2d2dc0:
    // 0x2d2dc0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2d2dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d2dc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d2dc8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2d2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2d2dcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d2dd0: 0x24107fff  addiu       $s0, $zero, 0x7FFF
    ctx->pc = 0x2d2dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2d2dd4: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2DD4u;
    SET_GPR_U32(ctx, 31, 0x2D2DDCu);
    ctx->pc = 0x2D2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DD4u;
    // 0x2d2dd8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2DD4u, 0x2D2DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DDCu;
label_2d2ddc:
    // 0x2d2ddc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d2de0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d2de4: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2DE4u;
    SET_GPR_U32(ctx, 31, 0x2D2DECu);
    ctx->pc = 0x2D2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DE4u;
    // 0x2d2de8: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2DE4u, 0x2D2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DECu;
label_2d2dec:
    // 0x2d2dec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2decu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2df0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d2df4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2df8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2d2dfc: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x2d2dfcu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d2e00: 0x1812  mflo        $v1
    ctx->pc = 0x2d2e00u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2d2e04: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x2d2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2d2e08: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2E08u;
    SET_GPR_U32(ctx, 31, 0x2D2E10u);
    ctx->pc = 0x2D2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E08u;
    // 0x2d2e0c: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2E08u, 0x2D2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E10u;
label_2d2e10:
    // 0x2d2e10: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2d2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2d2e14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2e14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2e18: 0x2484ec30  addiu       $a0, $a0, -0x13D0
    ctx->pc = 0x2d2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
    // 0x2d2e1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d2e20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d2e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2e28: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x2d2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2d2e2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2d2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d2e30: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x2d2e30u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d2e34: 0x1812  mflo        $v1
    ctx->pc = 0x2d2e34u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2d2e38: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x2d2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2d2e3c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x2d2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_2d2e40:
    // 0x2d2e40: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d2e40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2e44: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2d2e44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d2e48: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x2d2e48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d2e4c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x2d2e4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d2e50: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2d2e50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2d2e54: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x2d2e54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x2d2e58: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2d2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x2d2e5c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x2d2e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x2d2e60: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d2e64: 0x0  nop
    ctx->pc = 0x2d2e64u;
    // NOP
    // 0x2d2e68: 0x0  nop
    ctx->pc = 0x2d2e68u;
    // NOP
    // 0x2d2e6c: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D2E6Cu;
    {
        const bool branch_taken_0x2d2e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E6Cu;
        // 0x2d2e70: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e6c) {
            ctx->pc = 0x2D2E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2e40;
        }
    }
    ctx->pc = 0x2D2E74u;
    // 0x2d2e74: 0x3270000f  andi        $s0, $s3, 0xF
    ctx->pc = 0x2d2e74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x2d2e78: 0xc7839420  lwc1        $f3, -0x6BE0($gp)
    ctx->pc = 0x2d2e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2e7c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2d2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2d2e80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2e84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d2e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d2e88: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2d2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2d2e8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2e90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d2e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2e94: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2d2e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2e98: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d2e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d2e9c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2d2e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d2ea0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d2ea0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d2ea4: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x2d2ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2d2ea8: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x2d2ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2d2eac: 0xe6220044  swc1        $f2, 0x44($s1)
    ctx->pc = 0x2d2eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2d2eb0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2d2eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x2d2eb4: 0xe6340030  swc1        $f20, 0x30($s1)
    ctx->pc = 0x2d2eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2d2eb8: 0xe6340034  swc1        $f20, 0x34($s1)
    ctx->pc = 0x2d2eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2d2ebc: 0xe634001c  swc1        $f20, 0x1C($s1)
    ctx->pc = 0x2d2ebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2d2ec0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2d2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2d2ec4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2d2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2d2ec8: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2EC8u;
    SET_GPR_U32(ctx, 31, 0x2D2ED0u);
    ctx->pc = 0x2D2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2EC8u;
    // 0x2d2ecc: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2EC8u, 0x2D2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2ED0u;
label_2d2ed0:
    // 0x2d2ed0: 0xc7839424  lwc1        $f3, -0x6BDC($gp)
    ctx->pc = 0x2d2ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2ed4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2ed4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2ed8: 0xc7829428  lwc1        $f2, -0x6BD8($gp)
    ctx->pc = 0x2d2ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2ee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2ee8: 0xc781942c  lwc1        $f1, -0x6BD4($gp)
    ctx->pc = 0x2d2ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2eec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d2eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d2ef0: 0x0  nop
    ctx->pc = 0x2d2ef0u;
    // NOP
    // 0x2d2ef4: 0x0  nop
    ctx->pc = 0x2d2ef4u;
    // NOP
    // 0x2d2ef8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2d2ef8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2d2efc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2f00: 0x0  nop
    ctx->pc = 0x2d2f00u;
    // NOP
    // 0x2d2f04: 0x0  nop
    ctx->pc = 0x2d2f04u;
    // NOP
    // 0x2d2f08: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2d2f08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2d2f0c: 0x1682000e  bne         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2F0Cu;
    {
        const bool branch_taken_0x2d2f0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F0Cu;
        // 0x2d2f10: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f0c) {
            ctx->pc = 0x2D2F48u;
            goto label_2d2f48;
        }
    }
    ctx->pc = 0x2D2F14u;
    // 0x2d2f14: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2F14u;
    SET_GPR_U32(ctx, 31, 0x2D2F1Cu);
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2F14u, 0x2D2F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F1Cu;
label_2d2f1c:
    // 0x2d2f1c: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x2d2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2d2f20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2f20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2f24: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d2f28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2f2c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2d2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d2f30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2f34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d2f38: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2d2f38u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d2f3c: 0x1012  mflo        $v0
    ctx->pc = 0x2d2f3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d2f40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D2F40u;
    {
        const bool branch_taken_0x2d2f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F40u;
        // 0x2d2f44: 0x2442002d  addiu       $v0, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f40) {
            ctx->pc = 0x2D2F78u;
            goto label_2d2f78;
        }
    }
    ctx->pc = 0x2D2F48u;
label_2d2f48:
    // 0x2d2f48: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2F48u;
    SET_GPR_U32(ctx, 31, 0x2D2F50u);
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2F48u, 0x2D2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F50u;
label_2d2f50:
    // 0x2d2f50: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x2d2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2d2f54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2f54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d2f58: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d2f5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2f60: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2d2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d2f64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2f68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d2f6c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2d2f6cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d2f70: 0x1012  mflo        $v0
    ctx->pc = 0x2d2f70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d2f74: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x2d2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
label_2d2f78:
    // 0x2d2f78: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2d2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x2d2f7c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2d2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2d2f80: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2d2f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d2f84: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2d2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2d2f88: 0xc7819430  lwc1        $f1, -0x6BD0($gp)
    ctx->pc = 0x2d2f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2f8c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2d2f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2f90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d2f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2f94: 0xae550030  sw          $s5, 0x30($s2)
    ctx->pc = 0x2d2f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 21));
    // 0x2d2f98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2f9c: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x2d2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
    // 0x2d2fa0: 0xae440028  sw          $a0, 0x28($s2)
    ctx->pc = 0x2d2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 4));
    // 0x2d2fa4: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2d2fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2d2fa8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2d2fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2d2fac: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2d2facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2d2fb0: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2d2fb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d2fb4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2d2fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d2fb8: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x2d2fb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2d2fbc: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2d2fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d2fc0: 0xc7b60148  lwc1        $f22, 0x148($sp)
    ctx->pc = 0x2d2fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d2fc4: 0xc7b50140  lwc1        $f21, 0x140($sp)
    ctx->pc = 0x2d2fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d2fc8: 0xc7b40138  lwc1        $f20, 0x138($sp)
    ctx->pc = 0x2d2fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d2fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FCCu;
        // 0x2d2fd0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2FD4u;
    // 0x2d2fd4: 0x0  nop
    ctx->pc = 0x2d2fd4u;
    // NOP
    ctx->pc = 0x2d2fd8u;
}
