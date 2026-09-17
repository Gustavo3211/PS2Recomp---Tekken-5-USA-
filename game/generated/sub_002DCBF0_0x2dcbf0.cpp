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

// Function: sub_002DCBF0
// Address: 0x2dcbf0 - 0x2dce88
void sub_002DCBF0_0x2dcbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCBF0_0x2dcbf0");
#endif

    switch (ctx->pc) {
        case 0x2dcc38u: goto label_2dcc38;
        case 0x2dcc9cu: goto label_2dcc9c;
        case 0x2dcce0u: goto label_2dcce0;
        case 0x2dccf8u: goto label_2dccf8;
        case 0x2dcd14u: goto label_2dcd14;
        case 0x2dcd38u: goto label_2dcd38;
        case 0x2dcd88u: goto label_2dcd88;
        case 0x2dcd98u: goto label_2dcd98;
        case 0x2dce30u: goto label_2dce30;
        default: break;
    }

    ctx->pc = 0x2dcbf0u;

    // 0x2dcbf0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2dcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2dcbf4: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x2dcbf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x2dcbf8: 0x2443f610  addiu       $v1, $v0, -0x9F0
    ctx->pc = 0x2dcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
    // 0x2dcbfc: 0xffb10228  sd          $s1, 0x228($sp)
    ctx->pc = 0x2dcbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 17));
    // 0x2dcc00: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2dcc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2dcc04: 0xffb40240  sd          $s4, 0x240($sp)
    ctx->pc = 0x2dcc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
    // 0x2dcc08: 0xffb60250  sd          $s6, 0x250($sp)
    ctx->pc = 0x2dcc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 22));
    // 0x2dcc0c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2dcc0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dcc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dcc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc18: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x2dcc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    // 0x2dcc1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2dcc1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc20: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x2dcc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x2dcc24: 0xffb30238  sd          $s3, 0x238($sp)
    ctx->pc = 0x2dcc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 19));
    // 0x2dcc28: 0xffb50248  sd          $s5, 0x248($sp)
    ctx->pc = 0x2dcc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 21));
    // 0x2dcc2c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DCC2Cu;
    {
        const bool branch_taken_0x2dcc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC2Cu;
        // 0x2dcc30: 0xffbf0258  sd          $ra, 0x258($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc2c) {
            ctx->pc = 0x2DCC98u;
            goto label_2dcc98;
        }
    }
    ctx->pc = 0x2DCC34u;
    // 0x2dcc34: 0x246201e0  addiu       $v0, $v1, 0x1E0
    ctx->pc = 0x2dcc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_2dcc38:
    // 0x2dcc38: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2dcc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2dcc3c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2dcc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2dcc40: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2dcc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2dcc44: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2dcc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2dcc48: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2dcc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2dcc4c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2dcc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2dcc50: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2dcc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2dcc54: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2dcc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2dcc58: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2dcc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcc5c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2dcc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcc60: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2dcc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcc64: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2dcc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcc68: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2dcc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcc6c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2dcc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcc70: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2dcc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcc74: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2dcc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcc78: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2dcc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2dcc7c: 0x0  nop
    ctx->pc = 0x2dcc7cu;
    // NOP
    // 0x2dcc80: 0x0  nop
    ctx->pc = 0x2dcc80u;
    // NOP
    // 0x2dcc84: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2DCC84u;
    {
        const bool branch_taken_0x2dcc84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC84u;
        // 0x2dcc88: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc84) {
            ctx->pc = 0x2DCC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcc38;
        }
    }
    ctx->pc = 0x2DCC8Cu;
    // 0x2dcc8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DCC8Cu;
    {
        const bool branch_taken_0x2dcc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc8c) {
            ctx->pc = 0x2DCCD0u;
            goto label_2dccd0;
        }
    }
    ctx->pc = 0x2DCC94u;
    // 0x2dcc94: 0x0  nop
    ctx->pc = 0x2dcc94u;
    // NOP
label_2dcc98:
    // 0x2dcc98: 0x246201e0  addiu       $v0, $v1, 0x1E0
    ctx->pc = 0x2dcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_2dcc9c:
    // 0x2dcc9c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2dcc9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcca0: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x2dcca0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dcca4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2dcca4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2dcca8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2dcca8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2dccac: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x2dccacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2dccb0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2dccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2dccb4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x2dccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2dccb8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x2dccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2dccbc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2dccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2dccc0: 0x0  nop
    ctx->pc = 0x2dccc0u;
    // NOP
    // 0x2dccc4: 0x0  nop
    ctx->pc = 0x2dccc4u;
    // NOP
    // 0x2dccc8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DCCC8u;
    {
        const bool branch_taken_0x2dccc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCC8u;
        // 0x2dcccc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dccc8) {
            ctx->pc = 0x2DCC9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcc9c;
        }
    }
    ctx->pc = 0x2DCCD0u;
label_2dccd0:
    // 0x2dccd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dccd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dccd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2dccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2dccdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2dccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcce0:
    // 0x2dcce0: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2DCCE0u;
    {
        const bool branch_taken_0x2dcce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCE0u;
        // 0x2dcce4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcce0) {
            ctx->pc = 0x2DCE4Cu;
            goto label_2dce4c;
        }
    }
    ctx->pc = 0x2DCCE8u;
    // 0x2dcce8: 0x232a821  addu        $s5, $s1, $s2
    ctx->pc = 0x2dcce8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2dccec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dccecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccf0: 0x3a48021  addu        $s0, $sp, $a0
    ctx->pc = 0x2dccf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2dccf4: 0x0  nop
    ctx->pc = 0x2dccf4u;
    // NOP
label_2dccf8:
    // 0x2dccf8: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2dccf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2dccfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dcd00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2dcd00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dcd04: 0x5462004b  bnel        $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2DCD04u;
    {
        const bool branch_taken_0x2dcd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dcd04) {
            ctx->pc = 0x2DCD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD04u;
            // 0x2dcd08: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCE34u;
            goto label_2dce34;
        }
    }
    ctx->pc = 0x2DCD0Cu;
    // 0x2dcd0c: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2DCD0Cu;
    SET_GPR_U32(ctx, 31, 0x2DCD14u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2DCD0Cu, 0x2DCD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD14u;
label_2dcd14:
    // 0x2dcd14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dcd14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd18: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2dcd18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd1c: 0x19400038  blez        $t2, . + 4 + (0x38 << 2)
    ctx->pc = 0x2DCD1Cu;
    {
        const bool branch_taken_0x2dcd1c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2DCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD1Cu;
        // 0x2dcd20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd1c) {
            ctx->pc = 0x2DCE00u;
            goto label_2dce00;
        }
    }
    ctx->pc = 0x2DCD24u;
    // 0x2dcd24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2dcd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2dcd28: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2dcd28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd2c: 0x244cf7f8  addiu       $t4, $v0, -0x808
    ctx->pc = 0x2dcd2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965240));
    // 0x2dcd30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2dcd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd34: 0x27a901f0  addiu       $t1, $sp, 0x1F0
    ctx->pc = 0x2dcd34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2dcd38:
    // 0x2dcd38: 0x69820007  ldl         $v0, 0x7($t4)
    ctx->pc = 0x2dcd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2dcd3c: 0x6d820000  ldr         $v0, 0x0($t4)
    ctx->pc = 0x2dcd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2dcd40: 0x6983000f  ldl         $v1, 0xF($t4)
    ctx->pc = 0x2dcd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2dcd44: 0x6d830008  ldr         $v1, 0x8($t4)
    ctx->pc = 0x2dcd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2dcd48: 0x69840017  ldl         $a0, 0x17($t4)
    ctx->pc = 0x2dcd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2dcd4c: 0x6d840010  ldr         $a0, 0x10($t4)
    ctx->pc = 0x2dcd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2dcd50: 0x6985001f  ldl         $a1, 0x1F($t4)
    ctx->pc = 0x2dcd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2dcd54: 0x6d850018  ldr         $a1, 0x18($t4)
    ctx->pc = 0x2dcd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2dcd58: 0xb1220007  sdl         $v0, 0x7($t1)
    ctx->pc = 0x2dcd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcd5c: 0xb5220000  sdr         $v0, 0x0($t1)
    ctx->pc = 0x2dcd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcd60: 0xb123000f  sdl         $v1, 0xF($t1)
    ctx->pc = 0x2dcd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcd64: 0xb5230008  sdr         $v1, 0x8($t1)
    ctx->pc = 0x2dcd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcd68: 0xb1240017  sdl         $a0, 0x17($t1)
    ctx->pc = 0x2dcd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcd6c: 0xb5240010  sdr         $a0, 0x10($t1)
    ctx->pc = 0x2dcd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcd70: 0xb125001f  sdl         $a1, 0x1F($t1)
    ctx->pc = 0x2dcd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcd74: 0xb5250018  sdr         $a1, 0x18($t1)
    ctx->pc = 0x2dcd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcd78: 0x81820020  lb          $v0, 0x20($t4)
    ctx->pc = 0x2dcd78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x2dcd7c: 0x81830021  lb          $v1, 0x21($t4)
    ctx->pc = 0x2dcd7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 33)));
    // 0x2dcd80: 0xa1220020  sb          $v0, 0x20($t1)
    ctx->pc = 0x2dcd80u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dcd84: 0xa1230021  sb          $v1, 0x21($t1)
    ctx->pc = 0x2dcd84u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 33), (uint8_t)GPR_U32(ctx, 3));
label_2dcd88:
    // 0x2dcd88: 0x81240000  lb          $a0, 0x0($t1)
    ctx->pc = 0x2dcd88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2dcd8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCD8Cu;
    {
        const bool branch_taken_0x2dcd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD8Cu;
        // 0x2dcd90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd8c) {
            ctx->pc = 0x2DCDA0u;
            goto label_2dcda0;
        }
    }
    ctx->pc = 0x2DCD94u;
    // 0x2dcd94: 0x0  nop
    ctx->pc = 0x2dcd94u;
    // NOP
label_2dcd98:
    // 0x2dcd98: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x2dcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2dcd9c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2dcd9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2dcda0:
    // 0x2dcda0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DCDA0u;
    {
        const bool branch_taken_0x2dcda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDA0u;
        // 0x2dcda4: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcda0) {
            ctx->pc = 0x2DCDD0u;
            goto label_2dcdd0;
        }
    }
    ctx->pc = 0x2DCDA8u;
    // 0x2dcda8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2dcda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2dcdac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2dcdacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcdb0: 0x0  nop
    ctx->pc = 0x2dcdb0u;
    // NOP
    // 0x2dcdb4: 0x5464fff8  bnel        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DCDB4u;
    {
        const bool branch_taken_0x2dcdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2dcdb4) {
            ctx->pc = 0x2DCDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCDB4u;
            // 0x2dcdb8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcd98;
        }
    }
    ctx->pc = 0x2DCDBCu;
    // 0x2dcdbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dcdbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dcdc0: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x2dcdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2dcdc4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2dcdc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcdc8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2DCDC8u;
    {
        const bool branch_taken_0x2dcdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDC8u;
        // 0x2dcdcc: 0x1123021  addu        $a2, $t0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcdc8) {
            ctx->pc = 0x2DCD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcd88;
        }
    }
    ctx->pc = 0x2DCDD0u;
label_2dcdd0:
    // 0x2dcdd0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2dcdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2dcdd4: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x2dcdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2dcdd8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2dcdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2dcddc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2dcddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2dcde0: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x2dcde0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcde4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2dcde4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dcde8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DCDE8u;
    {
        const bool branch_taken_0x2dcde8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dcde8) {
            ctx->pc = 0x2DCE00u;
            goto label_2dce00;
        }
    }
    ctx->pc = 0x2DCDF0u;
    // 0x2dcdf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2dcdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2dcdf4: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x2dcdf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2dcdf8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2DCDF8u;
    {
        const bool branch_taken_0x2dcdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdf8) {
            ctx->pc = 0x2DCD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcd38;
        }
    }
    ctx->pc = 0x2DCE00u;
label_2dce00:
    // 0x2dce00: 0x54ea000c  bnel        $a3, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x2DCE00u;
    {
        const bool branch_taken_0x2dce00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        if (branch_taken_0x2dce00) {
            ctx->pc = 0x2DCE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCE00u;
            // 0x2dce04: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCE34u;
            goto label_2dce34;
        }
    }
    ctx->pc = 0x2DCE08u;
    // 0x2dce08: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x2dce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2dce0c: 0x2922021  addu        $a0, $s4, $s2
    ctx->pc = 0x2dce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2dce10: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2dce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2dce14: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2dce14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dce18: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x2dce18u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dce1c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2dce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2dce20: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x2dce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2dce24: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2dce24u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2dce28: 0xc04a151  jal         func_128544
    ctx->pc = 0x2DCE28u;
    SET_GPR_U32(ctx, 31, 0x2DCE30u);
    ctx->pc = 0x2DCE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE28u;
    // 0x2dce2c: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2DCE28u, 0x2DCE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE30u;
label_2dce30:
    // 0x2dce30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2dce30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2dce34:
    // 0x2dce34: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2dce34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2dce38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce3c: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2dce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2dce40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dce44: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2DCE44u;
    {
        const bool branch_taken_0x2dce44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE44u;
        // 0x2dce48: 0x3a48021  addu        $s0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce44) {
            ctx->pc = 0x2DCCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dccf8;
        }
    }
    ctx->pc = 0x2DCE4Cu;
label_2dce4c:
    // 0x2dce4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dce4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dce50: 0x2a420028  slti        $v0, $s2, 0x28
    ctx->pc = 0x2dce50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2dce54: 0x5440ffa2  bnel        $v0, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2DCE54u;
    {
        const bool branch_taken_0x2dce54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dce54) {
            ctx->pc = 0x2DCE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCE54u;
            // 0x2dce58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcce0;
        }
    }
    ctx->pc = 0x2DCE5Cu;
    // 0x2dce5c: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x2dce5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2dce60: 0xdfb10228  ld          $s1, 0x228($sp)
    ctx->pc = 0x2dce60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2dce64: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x2dce64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2dce68: 0xdfb30238  ld          $s3, 0x238($sp)
    ctx->pc = 0x2dce68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x2dce6c: 0xdfb40240  ld          $s4, 0x240($sp)
    ctx->pc = 0x2dce6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2dce70: 0xdfb50248  ld          $s5, 0x248($sp)
    ctx->pc = 0x2dce70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2dce74: 0xdfb60250  ld          $s6, 0x250($sp)
    ctx->pc = 0x2dce74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2dce78: 0xdfbf0258  ld          $ra, 0x258($sp)
    ctx->pc = 0x2dce78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2dce7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE7Cu;
        // 0x2dce80: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCE84u;
    // 0x2dce84: 0x0  nop
    ctx->pc = 0x2dce84u;
    // NOP
    ctx->pc = 0x2dce88u;
}
