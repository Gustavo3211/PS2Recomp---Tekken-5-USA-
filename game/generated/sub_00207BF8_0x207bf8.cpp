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

// Function: sub_00207BF8
// Address: 0x207bf8 - 0x207f88
void sub_00207BF8_0x207bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207BF8_0x207bf8");
#endif

    switch (ctx->pc) {
        case 0x207c48u: goto label_207c48;
        case 0x207c50u: goto label_207c50;
        case 0x207c94u: goto label_207c94;
        case 0x207d04u: goto label_207d04;
        case 0x207d10u: goto label_207d10;
        case 0x207d20u: goto label_207d20;
        case 0x207d54u: goto label_207d54;
        case 0x207d60u: goto label_207d60;
        case 0x207d74u: goto label_207d74;
        case 0x207d84u: goto label_207d84;
        case 0x207db8u: goto label_207db8;
        case 0x207e18u: goto label_207e18;
        case 0x207e28u: goto label_207e28;
        case 0x207e78u: goto label_207e78;
        case 0x207e88u: goto label_207e88;
        case 0x207f34u: goto label_207f34;
        default: break;
    }

    ctx->pc = 0x207bf8u;

    // 0x207bf8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x207bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x207bfc: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x207bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x207c00: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x207c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x207c04: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x207c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x207c08: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x207c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x207c0c: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x207c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x207c10: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x207c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x207c14: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x207c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x207c18: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x207c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x207c1c: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x207c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x207c20: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x207c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x207c24: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x207c24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x207c28: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x207c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x207c2c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x207c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x207c30: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x207c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x207c34: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x207c34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c38: 0xafa50134  sw          $a1, 0x134($sp)
    ctx->pc = 0x207c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 5));
    // 0x207c3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c40: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x207c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c44: 0x0  nop
    ctx->pc = 0x207c44u;
    // NOP
label_207c48:
    // 0x207c48: 0x1620c0  sll         $a0, $s6, 3
    ctx->pc = 0x207c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x207c4c: 0x0  nop
    ctx->pc = 0x207c4cu;
    // NOP
label_207c50:
    // 0x207c50: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x207c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x207c54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x207c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x207c58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207c5c: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x207c5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x207c60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x207c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x207c64: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x207C64u;
    {
        const bool branch_taken_0x207c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C64u;
        // 0x207c68: 0xac4003d0  sw          $zero, 0x3D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c64) {
            ctx->pc = 0x207C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207c50;
        }
    }
    ctx->pc = 0x207C6Cu;
    // 0x207c6c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x207c6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x207c70: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x207c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x207c74: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x207C74u;
    {
        const bool branch_taken_0x207c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207c74) {
            ctx->pc = 0x207C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207C74u;
            // 0x207c78: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207c48;
        }
    }
    ctx->pc = 0x207C7Cu;
    // 0x207c7c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x207c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x207c80: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x207c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x207c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c88: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x207c88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c8c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x207C8Cu;
    SET_GPR_U32(ctx, 31, 0x207C94u);
    ctx->pc = 0x207C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C8Cu;
    // 0x207c90: 0xac60041c  sw          $zero, 0x41C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1052), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x207C8Cu, 0x207C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C94u;
label_207c94:
    // 0x207c94: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x207c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207c98: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x207c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x207c9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x207c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x207ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x207ca4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x207ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x207ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cac: 0xc4800750  lwc1        $f0, 0x750($a0)
    ctx->pc = 0x207cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207cb0: 0xc4810758  lwc1        $f1, 0x758($a0)
    ctx->pc = 0x207cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207cb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x207cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cb8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x207cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x207cbc: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x207cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x207cc0: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x207cc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x207cc4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x207cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x207cc8: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x207cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x207ccc: 0x7ba800a0  lq          $t0, 0xA0($sp)
    ctx->pc = 0x207cccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x207cd0: 0x245e0750  addiu       $fp, $v0, 0x750
    ctx->pc = 0x207cd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x207cd4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x207cd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x207cd8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x207cd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207cdc: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x207cdcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x207ce0: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x207ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x207ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x207ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207ce8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x207ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x207cec: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x207cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x207cf0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x207cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x207cf4: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x207cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x207cf8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x207cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x207cfc: 0xc089164  jal         func_224590
    ctx->pc = 0x207CFCu;
    SET_GPR_U32(ctx, 31, 0x207D04u);
    ctx->pc = 0x207D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CFCu;
    // 0x207d00: 0xafa90070  sw          $t1, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224590u, 0x207CFCu, 0x207D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D04u;
label_207d04:
    // 0x207d04: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x207d04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x207d08: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x207d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x207d0c: 0x0  nop
    ctx->pc = 0x207d0cu;
    // NOP
label_207d10:
    // 0x207d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d14: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x207d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d18: 0xc04a151  jal         func_128544
    ctx->pc = 0x207D18u;
    SET_GPR_U32(ctx, 31, 0x207D20u);
    ctx->pc = 0x207D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D18u;
    // 0x207d1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x207D18u, 0x207D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D20u;
label_207d20:
    // 0x207d20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x207d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x207d24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x207d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207d28: 0xc79483a4  lwc1        $f20, -0x7C5C($gp)
    ctx->pc = 0x207d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x207d2c: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x207D2Cu;
    {
        const bool branch_taken_0x207d2c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D2Cu;
        // 0x207d30: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d2c) {
            ctx->pc = 0x207D3Cu;
            goto label_207d3c;
        }
    }
    ctx->pc = 0x207D34u;
    // 0x207d34: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x207d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x207d38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x207d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_207d3c:
    // 0x207d3c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x207d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x207d40: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x207d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x207d44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x207d44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d48: 0xc48c0020  lwc1        $f12, 0x20($a0)
    ctx->pc = 0x207d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207d4c: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x207D4Cu;
    SET_GPR_U32(ctx, 31, 0x207D54u);
    ctx->pc = 0x207D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D4Cu;
    // 0x207d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x207D4Cu, 0x207D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D54u;
label_207d54:
    // 0x207d54: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x207d54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x207d58: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x207d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x207d5c: 0x0  nop
    ctx->pc = 0x207d5cu;
    // NOP
label_207d60:
    // 0x207d60: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x207d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x207d64: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x207d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d6c: 0xc08491e  jal         func_212478
    ctx->pc = 0x207D6Cu;
    SET_GPR_U32(ctx, 31, 0x207D74u);
    ctx->pc = 0x207D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D6Cu;
    // 0x207d70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x207D6Cu, 0x207D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D74u;
label_207d74:
    // 0x207d74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x207d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d78: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x207d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d7c: 0xc084774  jal         func_211DD0
    ctx->pc = 0x207D7Cu;
    SET_GPR_U32(ctx, 31, 0x207D84u);
    ctx->pc = 0x207D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D7Cu;
    // 0x207d80: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x207D7Cu, 0x207D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D84u;
label_207d84:
    // 0x207d84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x207d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x207d88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x207d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207d8c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x207d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x207d90: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x207d94: 0x2483d420  addiu       $v1, $a0, -0x2BE0
    ctx->pc = 0x207d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    // 0x207d98: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x207d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x207d9c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x207d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x207da0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207da4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x207da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207da8: 0x8c6407f8  lw          $a0, 0x7F8($v1)
    ctx->pc = 0x207da8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3ADC18u));
    // 0x207dac: 0x1044005c  beq         $v0, $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x207DACu;
    {
        const bool branch_taken_0x207dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x207DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DACu;
        // 0x207db0: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dac) {
            ctx->pc = 0x207F20u;
            goto label_207f20;
        }
    }
    ctx->pc = 0x207DB4u;
    // 0x207db4: 0x0  nop
    ctx->pc = 0x207db4u;
    // NOP
label_207db8:
    // 0x207db8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x207db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x207dbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207dc0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x207dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x207dc4: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x207dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x207dc8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x207DC8u;
    {
        const bool branch_taken_0x207dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DC8u;
        // 0x207dcc: 0x8c950058  lw          $s5, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dc8) {
            ctx->pc = 0x207EA0u;
            goto label_207ea0;
        }
    }
    ctx->pc = 0x207DD0u;
    // 0x207dd0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x207dd4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x207dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x207dd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207ddc: 0x8c6342e0  lw          $v1, 0x42E0($v1)
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17120)));
    // 0x207de0: 0x600008  jr          $v1
    ctx->pc = 0x207DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207DE8u: goto label_207de8;
            case 0x207E48u: goto label_207e48;
            case 0x207EA0u: goto label_207ea0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207DE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x207DE8u;
label_207de8:
    // 0x207de8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x207de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x207dec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207df0: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x207df0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x207df4: 0x1a60002a  blez        $s3, . + 4 + (0x2A << 2)
    ctx->pc = 0x207DF4u;
    {
        const bool branch_taken_0x207df4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x207DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DF4u;
        // 0x207df8: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207df4) {
            ctx->pc = 0x207EA0u;
            goto label_207ea0;
        }
    }
    ctx->pc = 0x207DFCu;
    // 0x207dfc: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x207dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x207e00: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x207e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x207e04: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x207e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x207e08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207e0c: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x207e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x207e10: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x207e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207e14: 0x0  nop
    ctx->pc = 0x207e14u;
    // NOP
label_207e18:
    // 0x207e18: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x207e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e1c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x207e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e20: 0xc081e94  jal         func_207A50
    ctx->pc = 0x207E20u;
    SET_GPR_U32(ctx, 31, 0x207E28u);
    ctx->pc = 0x207E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E20u;
    // 0x207e24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A50u, 0x207E20u, 0x207E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E28u;
label_207e28:
    // 0x207e28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x207E28u;
    {
        const bool branch_taken_0x207e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E28u;
        // 0x207e2c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e28) {
            ctx->pc = 0x207EA0u;
            goto label_207ea0;
        }
    }
    ctx->pc = 0x207E30u;
    // 0x207e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x207e34: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x207e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x207e38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x207E38u;
    {
        const bool branch_taken_0x207e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E38u;
        // 0x207e3c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e38) {
            ctx->pc = 0x207E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207e18;
        }
    }
    ctx->pc = 0x207E40u;
    // 0x207e40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x207E40u;
    {
        const bool branch_taken_0x207e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e40) {
            ctx->pc = 0x207EA0u;
            goto label_207ea0;
        }
    }
    ctx->pc = 0x207E48u;
label_207e48:
    // 0x207e48: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x207e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x207e4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e50: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x207e50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207e54: 0x1a600012  blez        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x207E54u;
    {
        const bool branch_taken_0x207e54 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x207E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E54u;
        // 0x207e58: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e54) {
            ctx->pc = 0x207EA0u;
            goto label_207ea0;
        }
    }
    ctx->pc = 0x207E5Cu;
    // 0x207e5c: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x207e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x207e60: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x207e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x207e64: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x207e68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207e6c: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x207e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x207e70: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x207e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207e74: 0x0  nop
    ctx->pc = 0x207e74u;
    // NOP
label_207e78:
    // 0x207e78: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x207e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x207e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e80: 0xc081e94  jal         func_207A50
    ctx->pc = 0x207E80u;
    SET_GPR_U32(ctx, 31, 0x207E88u);
    ctx->pc = 0x207E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E80u;
    // 0x207e84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A50u, 0x207E80u, 0x207E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E88u;
label_207e88:
    // 0x207e88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207E88u;
    {
        const bool branch_taken_0x207e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E88u;
        // 0x207e8c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e88) {
            ctx->pc = 0x207EA0u;
            goto label_207ea0;
        }
    }
    ctx->pc = 0x207E90u;
    // 0x207e90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x207e94: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x207e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x207e98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x207E98u;
    {
        const bool branch_taken_0x207e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E98u;
        // 0x207e9c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e98) {
            ctx->pc = 0x207E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207e78;
        }
    }
    ctx->pc = 0x207EA0u;
label_207ea0:
    // 0x207ea0: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x207EA0u;
    {
        const bool branch_taken_0x207ea0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x207EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EA0u;
        // 0x207ea4: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ea0) {
            ctx->pc = 0x207EDCu;
            goto label_207edc;
        }
    }
    ctx->pc = 0x207EA8u;
    // 0x207ea8: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x207EA8u;
    {
        const bool branch_taken_0x207ea8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x207EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EA8u;
        // 0x207eac: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ea8) {
            ctx->pc = 0x207EE0u;
            goto label_207ee0;
        }
    }
    ctx->pc = 0x207EB0u;
    // 0x207eb0: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x207eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x207eb4: 0x8c6203d4  lw          $v0, 0x3D4($v1)
    ctx->pc = 0x207eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 980)));
    // 0x207eb8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x207EB8u;
    {
        const bool branch_taken_0x207eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EB8u;
        // 0x207ebc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207eb8) {
            ctx->pc = 0x207EFCu;
            goto label_207efc;
        }
    }
    ctx->pc = 0x207EC0u;
    // 0x207ec0: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x207EC0u;
    {
        const bool branch_taken_0x207ec0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EC0u;
        // 0x207ec4: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ec0) {
            ctx->pc = 0x207EDCu;
            goto label_207edc;
        }
    }
    ctx->pc = 0x207EC8u;
    // 0x207ec8: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x207ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x207ecc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207ECCu;
    {
        const bool branch_taken_0x207ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207ECCu;
        // 0x207ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ecc) {
            ctx->pc = 0x207ED8u;
            goto label_207ed8;
        }
    }
    ctx->pc = 0x207ED4u;
    // 0x207ed4: 0xac62041c  sw          $v0, 0x41C($v1)
    ctx->pc = 0x207ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1052), GPR_U32(ctx, 2));
label_207ed8:
    // 0x207ed8: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x207ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_207edc:
    // 0x207edc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x207edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_207ee0:
    // 0x207ee0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x207ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x207ee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207ee8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207eec: 0x8c4303d0  lw          $v1, 0x3D0($v0)
    ctx->pc = 0x207eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
    // 0x207ef0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x207EF0u;
    {
        const bool branch_taken_0x207ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EF0u;
        // 0x207ef4: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ef0) {
            ctx->pc = 0x207F20u;
            goto label_207f20;
        }
    }
    ctx->pc = 0x207EF8u;
    // 0x207ef8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x207ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_207efc:
    // 0x207efc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x207efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x207f00: 0x2483d420  addiu       $v1, $a0, -0x2BE0
    ctx->pc = 0x207f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    // 0x207f04: 0x8c6407f8  lw          $a0, 0x7F8($v1)
    ctx->pc = 0x207f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2040)));
    // 0x207f08: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x207f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x207f0c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x207f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x207f10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x207f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f14: 0x1444ffa8  bne         $v0, $a0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x207F14u;
    {
        const bool branch_taken_0x207f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x207F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F14u;
        // 0x207f18: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f14) {
            ctx->pc = 0x207DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207db8;
        }
    }
    ctx->pc = 0x207F1Cu;
    // 0x207f1c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x207f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_207f20:
    // 0x207f20: 0xc78c83a8  lwc1        $f12, -0x7C58($gp)
    ctx->pc = 0x207f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f2c: 0xc084a62  jal         func_212988
    ctx->pc = 0x207F2Cu;
    SET_GPR_U32(ctx, 31, 0x207F34u);
    ctx->pc = 0x207F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F2Cu;
    // 0x207f30: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x207F2Cu, 0x207F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F34u;
label_207f34:
    // 0x207f34: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x207f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x207f38: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x207F38u;
    {
        const bool branch_taken_0x207f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F38u;
        // 0x207f3c: 0x27a300f0  addiu       $v1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f38) {
            ctx->pc = 0x207D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207d60;
        }
    }
    ctx->pc = 0x207F40u;
    // 0x207f40: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x207f44: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x207f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x207f48: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x207F48u;
    {
        const bool branch_taken_0x207f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F48u;
        // 0x207f4c: 0x27a300d0  addiu       $v1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f48) {
            ctx->pc = 0x207D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207d10;
        }
    }
    ctx->pc = 0x207F50u;
    // 0x207f50: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x207f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x207f54: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x207f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x207f58: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x207f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x207f5c: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x207f5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x207f60: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x207f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x207f64: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x207f64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x207f68: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x207f68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x207f6c: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x207f6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x207f70: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x207f70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x207f74: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x207f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x207f78: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x207f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x207f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x207F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F7Cu;
        // 0x207f80: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207F84u;
    // 0x207f84: 0x0  nop
    ctx->pc = 0x207f84u;
    // NOP
    ctx->pc = 0x207f88u;
}
