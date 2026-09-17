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

// Function: sub_002539A0
// Address: 0x2539a0 - 0x253b50
void sub_002539A0_0x2539a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002539A0_0x2539a0");
#endif

    switch (ctx->pc) {
        case 0x2539fcu: goto label_2539fc;
        case 0x253a04u: goto label_253a04;
        case 0x253a7cu: goto label_253a7c;
        case 0x253aa0u: goto label_253aa0;
        case 0x253ab8u: goto label_253ab8;
        case 0x253ae0u: goto label_253ae0;
        case 0x253b04u: goto label_253b04;
        case 0x253b0cu: goto label_253b0c;
        case 0x253b20u: goto label_253b20;
        default: break;
    }

    ctx->pc = 0x2539a0u;

    // 0x2539a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2539a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2539a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2539a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2539a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2539ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2539acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539b0: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x2539b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x2539b4: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x2539b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2539b8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2539b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2539bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2539bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539c0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2539c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2539c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2539c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2539ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539d0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2539d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2539d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2539d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2539d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2539dc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2539dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2539e0: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2539e0u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2539e4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2539e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2539e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2539e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2539ec: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2539ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2539f0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2539f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2539f4: 0xc0984ce  jal         func_261338
    ctx->pc = 0x2539F4u;
    SET_GPR_U32(ctx, 31, 0x2539FCu);
    ctx->pc = 0x2539F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539F4u;
    // 0x2539f8: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x261338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261338u, 0x2539F4u, 0x2539FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539FCu;
label_2539fc:
    // 0x2539fc: 0xc095334  jal         func_254CD0
    ctx->pc = 0x2539FCu;
    SET_GPR_U32(ctx, 31, 0x253A04u);
    ctx->pc = 0x253A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539FCu;
    // 0x253a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CD0u, 0x2539FCu, 0x253A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A04u;
label_253a04:
    // 0x253a04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x253a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a08: 0x52400046  beql        $s2, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x253A08u;
    {
        const bool branch_taken_0x253a08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x253a08) {
            ctx->pc = 0x253A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253A08u;
            // 0x253a0c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253B24u;
            goto label_253b24;
        }
    }
    ctx->pc = 0x253A10u;
    // 0x253a10: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x253a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253a18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a1c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x253a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x253a20: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x253a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x253a24: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x253a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x253a28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x253a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x253a2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x253A2Cu;
    {
        const bool branch_taken_0x253a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253a2c) {
            ctx->pc = 0x253A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253A2Cu;
            // 0x253a30: 0xc6150018  lwc1        $f21, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x253A40u;
            goto label_253a40;
        }
    }
    ctx->pc = 0x253A34u;
    // 0x253a34: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x253a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x253A38u;
    {
        const bool branch_taken_0x253a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A38u;
        // 0x253a3c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a38) {
            ctx->pc = 0x253AB8u;
            goto label_253ab8;
        }
    }
    ctx->pc = 0x253A40u;
label_253a40:
    // 0x253a40: 0xc6140010  lwc1        $f20, 0x10($s0)
    ctx->pc = 0x253a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253a44: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x253a44u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x253a48: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x253a48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x253a4c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x253a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x253a50: 0x46000004  c1          0x4
    ctx->pc = 0x253a50u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x253a54: 0x2622fffb  addiu       $v0, $s1, -0x5
    ctx->pc = 0x253a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
    // 0x253a58: 0x2794c170  addiu       $s4, $gp, -0x3E90
    ctx->pc = 0x253a58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x253a5c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x253a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a60: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x253a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x253a64: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x253a64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x253a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253A68u;
    {
        const bool branch_taken_0x253a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A68u;
        // 0x253a6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a68) {
            ctx->pc = 0x253A90u;
            goto label_253a90;
        }
    }
    ctx->pc = 0x253A70u;
    // 0x253a70: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x253a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x253a74: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x253A74u;
    SET_GPR_U32(ctx, 31, 0x253A7Cu);
    ctx->pc = 0x253A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A74u;
    // 0x253a78: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x253A74u, 0x253A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A7Cu;
label_253a7c:
    // 0x253a7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x253a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a80: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x253a80u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x253a84: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253a88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x253A88u;
    {
        const bool branch_taken_0x253a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A88u;
        // 0x253a8c: 0x4600ab47  neg.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a88) {
            ctx->pc = 0x253AB0u;
            goto label_253ab0;
        }
    }
    ctx->pc = 0x253A90u;
label_253a90:
    // 0x253a90: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x253a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x253a94: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x253a94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x253a98: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x253A98u;
    SET_GPR_U32(ctx, 31, 0x253AA0u);
    ctx->pc = 0x253A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A98u;
    // 0x253a9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x253A98u, 0x253AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AA0u;
label_253aa0:
    // 0x253aa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x253aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253aa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x253aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x253aa8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x253aa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x253aac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_253ab0:
    // 0x253ab0: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x253AB0u;
    SET_GPR_U32(ctx, 31, 0x253AB8u);
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x253AB0u, 0x253AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AB8u;
label_253ab8:
    // 0x253ab8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253abc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x253ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x253ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253acc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x253accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x253ad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x253ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ad4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253ad8: 0xc091bda  jal         func_246F68
    ctx->pc = 0x253AD8u;
    SET_GPR_U32(ctx, 31, 0x253AE0u);
    ctx->pc = 0x253ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AD8u;
    // 0x253adc: 0x92440031  lbu         $a0, 0x31($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246F68u, 0x253AD8u, 0x253AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AE0u;
label_253ae0:
    // 0x253ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ae4: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x253ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x253ae8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x253ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253aec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x253aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253af0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253af4: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253AF4u;
    {
        const bool branch_taken_0x253af4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x253AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AF4u;
        // 0x253af8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253af4) {
            ctx->pc = 0x253B18u;
            goto label_253b18;
        }
    }
    ctx->pc = 0x253AFCu;
    // 0x253afc: 0xc094c2a  jal         func_2530A8
    ctx->pc = 0x253AFCu;
    SET_GPR_U32(ctx, 31, 0x253B04u);
    ctx->pc = 0x2530A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2530A8u, 0x253AFCu, 0x253B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B04u;
label_253b04:
    // 0x253b04: 0xc08850c  jal         func_221430
    ctx->pc = 0x253B04u;
    SET_GPR_U32(ctx, 31, 0x253B0Cu);
    ctx->pc = 0x253B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B04u;
    // 0x253b08: 0x32a40001  andi        $a0, $s5, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x221430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221430u, 0x253B04u, 0x253B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B0Cu;
label_253b0c:
    // 0x253b0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x253B0Cu;
    {
        const bool branch_taken_0x253b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B0Cu;
        // 0x253b10: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b0c) {
            ctx->pc = 0x253B24u;
            goto label_253b24;
        }
    }
    ctx->pc = 0x253B14u;
    // 0x253b14: 0x0  nop
    ctx->pc = 0x253b14u;
    // NOP
label_253b18:
    // 0x253b18: 0xc094c2a  jal         func_2530A8
    ctx->pc = 0x253B18u;
    SET_GPR_U32(ctx, 31, 0x253B20u);
    ctx->pc = 0x253B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B18u;
    // 0x253b1c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2530A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2530A8u, 0x253B18u, 0x253B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B20u;
label_253b20:
    // 0x253b20: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x253b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_253b24:
    // 0x253b24: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x253b24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253b28: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x253b28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253b2c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x253b2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x253b30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x253b30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253b34: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x253b34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x253b38: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x253b38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253b3c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x253b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x253b40: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x253b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x253b44: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x253b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253b48: 0x3e00008  jr          $ra
    ctx->pc = 0x253B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B48u;
        // 0x253b4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253B50u;
}
