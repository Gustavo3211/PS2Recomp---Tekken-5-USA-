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

// Function: sub_00259BD0
// Address: 0x259bd0 - 0x259f90
void sub_00259BD0_0x259bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259BD0_0x259bd0");
#endif

    switch (ctx->pc) {
        case 0x259c1cu: goto label_259c1c;
        case 0x259d08u: goto label_259d08;
        case 0x259d20u: goto label_259d20;
        case 0x259d40u: goto label_259d40;
        case 0x259dd8u: goto label_259dd8;
        case 0x259e18u: goto label_259e18;
        case 0x259eb0u: goto label_259eb0;
        case 0x259ec0u: goto label_259ec0;
        case 0x259f04u: goto label_259f04;
        case 0x259f48u: goto label_259f48;
        default: break;
    }

    ctx->pc = 0x259bd0u;

    // 0x259bd0: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x259bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x259bd4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x259bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x259bd8: 0x24422280  addiu       $v0, $v0, 0x2280
    ctx->pc = 0x259bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8832));
    // 0x259bdc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x259bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259be0: 0xffb00350  sd          $s0, 0x350($sp)
    ctx->pc = 0x259be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 16));
    // 0x259be4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x259be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x259be8: 0xffb10358  sd          $s1, 0x358($sp)
    ctx->pc = 0x259be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 856), GPR_U64(ctx, 17));
    // 0x259bec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x259becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259bf0: 0xffb20360  sd          $s2, 0x360($sp)
    ctx->pc = 0x259bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 18));
    // 0x259bf4: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x259bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x259bf8: 0xffb30368  sd          $s3, 0x368($sp)
    ctx->pc = 0x259bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 872), GPR_U64(ctx, 19));
    // 0x259bfc: 0xffb50378  sd          $s5, 0x378($sp)
    ctx->pc = 0x259bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 888), GPR_U64(ctx, 21));
    // 0x259c00: 0xffb60380  sd          $s6, 0x380($sp)
    ctx->pc = 0x259c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 22));
    // 0x259c04: 0xffb70388  sd          $s7, 0x388($sp)
    ctx->pc = 0x259c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 904), GPR_U64(ctx, 23));
    // 0x259c08: 0xffbe0390  sd          $fp, 0x390($sp)
    ctx->pc = 0x259c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 30));
    // 0x259c0c: 0xffbf0398  sd          $ra, 0x398($sp)
    ctx->pc = 0x259c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 920), GPR_U64(ctx, 31));
    // 0x259c10: 0xe7b403a0  swc1        $f20, 0x3A0($sp)
    ctx->pc = 0x259c10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x259c14: 0xffb40370  sd          $s4, 0x370($sp)
    ctx->pc = 0x259c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 20));
    // 0x259c18: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x259c18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_259c1c:
    // 0x259c1c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x259c1cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259c20: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x259c20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x259c24: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x259c24u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x259c28: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x259c28u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x259c2c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x259c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x259c30: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x259c30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x259c34: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x259c34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x259c38: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x259c38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x259c3c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x259c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x259c40: 0x0  nop
    ctx->pc = 0x259c40u;
    // NOP
    // 0x259c44: 0x0  nop
    ctx->pc = 0x259c44u;
    // NOP
    // 0x259c48: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x259C48u;
    {
        const bool branch_taken_0x259c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x259C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C48u;
        // 0x259c4c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c48) {
            ctx->pc = 0x259C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259c1c;
        }
    }
    ctx->pc = 0x259C50u;
    // 0x259c50: 0x8f83aa20  lw          $v1, -0x55E0($gp)
    ctx->pc = 0x259c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945312)));
    // 0x259c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259c58: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x259C58u;
    {
        const bool branch_taken_0x259c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C58u;
        // 0x259c5c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c58) {
            ctx->pc = 0x259C90u;
            goto label_259c90;
        }
    }
    ctx->pc = 0x259C60u;
    // 0x259c60: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x259c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x259c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259c68: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x259c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x259c6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259c70: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x259c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x259c74: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x259c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x259c78: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x259c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x259c7c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x259c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x259c80: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x259c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x259c84: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x259c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x259c88: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x259c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x259c8c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x259c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_259c90:
    // 0x259c90: 0x8ca805ac  lw          $t0, 0x5AC($a1)
    ctx->pc = 0x259c90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1452)));
    // 0x259c94: 0x8ca305a0  lw          $v1, 0x5A0($a1)
    ctx->pc = 0x259c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1440)));
    // 0x259c98: 0x24422300  addiu       $v0, $v0, 0x2300
    ctx->pc = 0x259c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8960));
    // 0x259c9c: 0x8ca405a4  lw          $a0, 0x5A4($a1)
    ctx->pc = 0x259c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1444)));
    // 0x259ca0: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x259ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x259ca4: 0x8ca505a8  lw          $a1, 0x5A8($a1)
    ctx->pc = 0x259ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1448)));
    // 0x259ca8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x259ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x259cac: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x259cacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259cb0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x259cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x259cb4: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x259cb4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x259cb8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x259cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x259cbc: 0xffa700a0  sd          $a3, 0xA0($sp)
    ctx->pc = 0x259cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 7));
    // 0x259cc0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x259cc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259cc4: 0xafa402c4  sw          $a0, 0x2C4($sp)
    ctx->pc = 0x259cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 4));
    // 0x259cc8: 0xffa600a8  sd          $a2, 0xA8($sp)
    ctx->pc = 0x259cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 6));
    // 0x259ccc: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x259cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x259cd0: 0xafa502c8  sw          $a1, 0x2C8($sp)
    ctx->pc = 0x259cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 5));
    // 0x259cd4: 0xafa802cc  sw          $t0, 0x2CC($sp)
    ctx->pc = 0x259cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 8));
    // 0x259cd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259cdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x259cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x259ce0: 0x6ba202c7  ldl         $v0, 0x2C7($sp)
    ctx->pc = 0x259ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x259ce4: 0x6fa202c0  ldr         $v0, 0x2C0($sp)
    ctx->pc = 0x259ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x259ce8: 0x6ba302cf  ldl         $v1, 0x2CF($sp)
    ctx->pc = 0x259ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x259cec: 0x6fa302c8  ldr         $v1, 0x2C8($sp)
    ctx->pc = 0x259cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 712); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x259cf0: 0xb3a202b7  sdl         $v0, 0x2B7($sp)
    ctx->pc = 0x259cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259cf4: 0xb7a202b0  sdr         $v0, 0x2B0($sp)
    ctx->pc = 0x259cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259cf8: 0xb3a302bf  sdl         $v1, 0x2BF($sp)
    ctx->pc = 0x259cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 703); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259cfc: 0xb7a302b8  sdr         $v1, 0x2B8($sp)
    ctx->pc = 0x259cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259d00: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x259D00u;
    SET_GPR_U32(ctx, 31, 0x259D08u);
    ctx->pc = 0x259D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D00u;
    // 0x259d04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x259D00u, 0x259D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D08u;
label_259d08:
    // 0x259d08: 0x27a902d0  addiu       $t1, $sp, 0x2D0
    ctx->pc = 0x259d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x259d0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x259d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d10: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x259d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x259d14: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x259d14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d18: 0x1e17c2  srl         $v0, $fp, 31
    ctx->pc = 0x259d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x259d1c: 0x0  nop
    ctx->pc = 0x259d1cu;
    // NOP
label_259d20:
    // 0x259d20: 0x1e8040  sll         $s0, $fp, 1
    ctx->pc = 0x259d20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x259d24: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x259d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x259d28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x259d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x259d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x259d30: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x259d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d34: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x259d34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259d38: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x259d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x259d3c: 0x0  nop
    ctx->pc = 0x259d3cu;
    // NOP
label_259d40:
    // 0x259d40: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x259d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x259d44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259d48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x259d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259d4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x259d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259d50: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x259d50u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x259d54: 0xd8e90010  lqc2        $vf9, 0x10($a3)
    ctx->pc = 0x259d54u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x259d58: 0xd8ea0020  lqc2        $vf10, 0x20($a3)
    ctx->pc = 0x259d58u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x259d5c: 0xd8eb0030  lqc2        $vf11, 0x30($a3)
    ctx->pc = 0x259d5cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x259d60: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x259d60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259d64: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x259d64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x259d68: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x259d68u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x259d6c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x259d6cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x259d70: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x259d70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d74: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x259d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d78: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x259d78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d7c: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x259d7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x259d80: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x259d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d84: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x259d84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d88: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x259d88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d8c: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x259d8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x259d90: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x259d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d94: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x259d94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d98: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x259d98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259d9c: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x259d9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x259da0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x259da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259da4: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x259da4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259da8: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x259da8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x259dac: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x259dacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x259db0: 0xfae40000  sqc2        $vf4, 0x0($s7)
    ctx->pc = 0x259db0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x259db4: 0xfae50010  sqc2        $vf5, 0x10($s7)
    ctx->pc = 0x259db4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x259db8: 0xfae60020  sqc2        $vf6, 0x20($s7)
    ctx->pc = 0x259db8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x259dbc: 0xfae70030  sqc2        $vf7, 0x30($s7)
    ctx->pc = 0x259dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x259dc0: 0x1121021  addu        $v0, $t0, $s2
    ctx->pc = 0x259dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x259dc4: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x259dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x259dc8: 0x2b040  sll         $s6, $v0, 1
    ctx->pc = 0x259dc8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259dcc: 0x3a840  sll         $s5, $v1, 1
    ctx->pc = 0x259dccu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259dd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x259dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dd4: 0x0  nop
    ctx->pc = 0x259dd4u;
    // NOP
label_259dd8:
    // 0x259dd8: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x259dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x259ddc: 0x2d13021  addu        $a2, $s6, $s1
    ctx->pc = 0x259ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x259de0: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x259de0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x259de4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x259de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x259de8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x259de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x259dec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x259decu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x259df0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x259df0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x259df4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x259df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x259df8: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x259df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x259dfc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x259dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e04: 0x7fa70310  sq          $a3, 0x310($sp)
    ctx->pc = 0x259e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 7));
    // 0x259e08: 0x7fa80320  sq          $t0, 0x320($sp)
    ctx->pc = 0x259e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 8));
    // 0x259e0c: 0x7fa90330  sq          $t1, 0x330($sp)
    ctx->pc = 0x259e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 9));
    // 0x259e10: 0xc08491e  jal         func_212478
    ctx->pc = 0x259E10u;
    SET_GPR_U32(ctx, 31, 0x259E18u);
    ctx->pc = 0x259E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E10u;
    // 0x259e14: 0x7faa0340  sq          $t2, 0x340($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x259E10u, 0x259E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E18u;
label_259e18:
    // 0x259e18: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x259e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259e1c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x259e1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e20: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x259e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x259e24: 0x0  nop
    ctx->pc = 0x259e24u;
    // NOP
    // 0x259e28: 0x0  nop
    ctx->pc = 0x259e28u;
    // NOP
    // 0x259e2c: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x259e2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
    // 0x259e30: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x259e30u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259e34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x259e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x259e38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x259e38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x259e3c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x259e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x259e40: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x259e40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x259e44: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x259e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x259e48: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x259e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x259e4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x259e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x259e50: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x259e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x259e54: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x259e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x259e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x259e5c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x259e5cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259e60: 0x4bf8817d  vftoi4.xyzw $vf24, $vf16
    ctx->pc = 0x259e60u;
    { __m128 src = ctx->vu0_vf[16]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x259e64: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x259e64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x259e68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x259e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x259e6c: 0x7ba70310  lq          $a3, 0x310($sp)
    ctx->pc = 0x259e6cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x259e70: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x259e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x259e74: 0x7ba80320  lq          $t0, 0x320($sp)
    ctx->pc = 0x259e74u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x259e78: 0x7ba90330  lq          $t1, 0x330($sp)
    ctx->pc = 0x259e78u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x259e7c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x259E7Cu;
    {
        const bool branch_taken_0x259e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E7Cu;
        // 0x259e80: 0x7baa0340  lq          $t2, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e7c) {
            ctx->pc = 0x259DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259dd8;
        }
    }
    ctx->pc = 0x259E84u;
    // 0x259e84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x259e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x259e88: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x259e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x259e8c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x259E8Cu;
    {
        const bool branch_taken_0x259e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E8Cu;
        // 0x259e90: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e8c) {
            ctx->pc = 0x259D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259d40;
        }
    }
    ctx->pc = 0x259E94u;
    // 0x259e94: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x259e94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x259e98: 0x2bc20004  slti        $v0, $fp, 0x4
    ctx->pc = 0x259e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x259e9c: 0x5440ffa0  bnel        $v0, $zero, . + 4 + (-0x60 << 2)
    ctx->pc = 0x259E9Cu;
    {
        const bool branch_taken_0x259e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259e9c) {
            ctx->pc = 0x259EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259E9Cu;
            // 0x259ea0: 0x1e17c2  srl         $v0, $fp, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259d20;
        }
    }
    ctx->pc = 0x259EA4u;
    // 0x259ea4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x259ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x259ea8: 0xc095cde  jal         func_257378
    ctx->pc = 0x259EA8u;
    SET_GPR_U32(ctx, 31, 0x259EB0u);
    ctx->pc = 0x259EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EA8u;
    // 0x259eac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257378u, 0x259EA8u, 0x259EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EB0u;
label_259eb0:
    // 0x259eb0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x259eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259eb4: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x259eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x259eb8: 0x8f82aa20  lw          $v0, -0x55E0($gp)
    ctx->pc = 0x259eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945312)));
    // 0x259ebc: 0x0  nop
    ctx->pc = 0x259ebcu;
    // NOP
label_259ec0:
    // 0x259ec0: 0x14520013  bne         $v0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x259EC0u;
    {
        const bool branch_taken_0x259ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x259EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EC0u;
        // 0x259ec4: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ec0) {
            ctx->pc = 0x259F10u;
            goto label_259f10;
        }
    }
    ctx->pc = 0x259EC8u;
    // 0x259ec8: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x259ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x259ecc: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x259eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x259ed0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x259ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x259ed4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x259ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ed8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x259ed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259edc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x259edcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ee0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x259ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x259ee4: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x259ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x259ee8: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x259ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x259eec: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x259eecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ef0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x259ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x259ef4: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x259ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x259ef8: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x259ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x259efc: 0xc09615e  jal         func_258578
    ctx->pc = 0x259EFCu;
    SET_GPR_U32(ctx, 31, 0x259F04u);
    ctx->pc = 0x259F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EFCu;
    // 0x259f00: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258578u, 0x259EFCu, 0x259F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F04u;
label_259f04:
    // 0x259f04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x259F04u;
    {
        const bool branch_taken_0x259f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F04u;
        // 0x259f08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f04) {
            ctx->pc = 0x259F4Cu;
            goto label_259f4c;
        }
    }
    ctx->pc = 0x259F0Cu;
    // 0x259f0c: 0x0  nop
    ctx->pc = 0x259f0cu;
    // NOP
label_259f10:
    // 0x259f10: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x259f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x259f14: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x259f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x259f18: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x259f18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f1c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x259f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f20: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x259f20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f24: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x259f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x259f28: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x259f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x259f2c: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x259f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x259f30: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x259f30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f34: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x259f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x259f38: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x259f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x259f3c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x259f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x259f40: 0xc095ce6  jal         func_257398
    ctx->pc = 0x259F40u;
    SET_GPR_U32(ctx, 31, 0x259F48u);
    ctx->pc = 0x259F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F40u;
    // 0x259f44: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257398u, 0x259F40u, 0x259F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F48u;
label_259f48:
    // 0x259f48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x259f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_259f4c:
    // 0x259f4c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x259f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x259f50: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x259F50u;
    {
        const bool branch_taken_0x259f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259f50) {
            ctx->pc = 0x259F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259F50u;
            // 0x259f54: 0x8f82aa20  lw          $v0, -0x55E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259ec0;
        }
    }
    ctx->pc = 0x259F58u;
    // 0x259f58: 0xdfb00350  ld          $s0, 0x350($sp)
    ctx->pc = 0x259f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x259f5c: 0xdfb10358  ld          $s1, 0x358($sp)
    ctx->pc = 0x259f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x259f60: 0xdfb20360  ld          $s2, 0x360($sp)
    ctx->pc = 0x259f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x259f64: 0xdfb30368  ld          $s3, 0x368($sp)
    ctx->pc = 0x259f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x259f68: 0xdfb40370  ld          $s4, 0x370($sp)
    ctx->pc = 0x259f68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x259f6c: 0xdfb50378  ld          $s5, 0x378($sp)
    ctx->pc = 0x259f6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 888)));
    // 0x259f70: 0xdfb60380  ld          $s6, 0x380($sp)
    ctx->pc = 0x259f70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x259f74: 0xdfb70388  ld          $s7, 0x388($sp)
    ctx->pc = 0x259f74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x259f78: 0xdfbe0390  ld          $fp, 0x390($sp)
    ctx->pc = 0x259f78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x259f7c: 0xdfbf0398  ld          $ra, 0x398($sp)
    ctx->pc = 0x259f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 920)));
    // 0x259f80: 0xc7b403a0  lwc1        $f20, 0x3A0($sp)
    ctx->pc = 0x259f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259f84: 0x3e00008  jr          $ra
    ctx->pc = 0x259F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F84u;
        // 0x259f88: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259F8Cu;
    // 0x259f8c: 0x0  nop
    ctx->pc = 0x259f8cu;
    // NOP
    ctx->pc = 0x259f90u;
}
