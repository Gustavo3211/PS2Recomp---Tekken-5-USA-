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

// Function: sub_00348900
// Address: 0x348900 - 0x348c50
void sub_00348900_0x348900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348900_0x348900");
#endif

    switch (ctx->pc) {
        case 0x34893cu: goto label_34893c;
        case 0x34899cu: goto label_34899c;
        default: break;
    }

    ctx->pc = 0x348900u;

    // 0x348900: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x348900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x348904: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x348904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348908: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x348908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x34890c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34890cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x348910: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x348910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x348914: 0x24434c40  addiu       $v1, $v0, 0x4C40
    ctx->pc = 0x348914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 19520));
    // 0x348918: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x348918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x34891c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x34891cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348920: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x348924: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x348924u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348928: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x348928u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34892c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348930: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x348930u;
    {
        const bool branch_taken_0x348930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348930u;
        // 0x348934: 0x1a0282d  daddu       $a1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348930) {
            ctx->pc = 0x348998u;
            goto label_348998;
        }
    }
    ctx->pc = 0x348938u;
    // 0x348938: 0x246201e0  addiu       $v0, $v1, 0x1E0
    ctx->pc = 0x348938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_34893c:
    // 0x34893c: 0x686e0007  ldl         $t6, 0x7($v1)
    ctx->pc = 0x34893cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x348940: 0x6c6e0000  ldr         $t6, 0x0($v1)
    ctx->pc = 0x348940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x348944: 0x686f000f  ldl         $t7, 0xF($v1)
    ctx->pc = 0x348944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x348948: 0x6c6f0008  ldr         $t7, 0x8($v1)
    ctx->pc = 0x348948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x34894c: 0x68700017  ldl         $s0, 0x17($v1)
    ctx->pc = 0x34894cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x348950: 0x6c700010  ldr         $s0, 0x10($v1)
    ctx->pc = 0x348950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x348954: 0x6871001f  ldl         $s1, 0x1F($v1)
    ctx->pc = 0x348954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x348958: 0x6c710018  ldr         $s1, 0x18($v1)
    ctx->pc = 0x348958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x34895c: 0xb08e0007  sdl         $t6, 0x7($a0)
    ctx->pc = 0x34895cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x348960: 0xb48e0000  sdr         $t6, 0x0($a0)
    ctx->pc = 0x348960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x348964: 0xb08f000f  sdl         $t7, 0xF($a0)
    ctx->pc = 0x348964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x348968: 0xb48f0008  sdr         $t7, 0x8($a0)
    ctx->pc = 0x348968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34896c: 0xb0900017  sdl         $s0, 0x17($a0)
    ctx->pc = 0x34896cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x348970: 0xb4900010  sdr         $s0, 0x10($a0)
    ctx->pc = 0x348970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x348974: 0xb091001f  sdl         $s1, 0x1F($a0)
    ctx->pc = 0x348974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x348978: 0xb4910018  sdr         $s1, 0x18($a0)
    ctx->pc = 0x348978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34897c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x34897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x348980: 0x0  nop
    ctx->pc = 0x348980u;
    // NOP
    // 0x348984: 0x0  nop
    ctx->pc = 0x348984u;
    // NOP
    // 0x348988: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x348988u;
    {
        const bool branch_taken_0x348988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348988u;
        // 0x34898c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348988) {
            ctx->pc = 0x34893Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34893c;
        }
    }
    ctx->pc = 0x348990u;
    // 0x348990: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x348990u;
    {
        const bool branch_taken_0x348990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348990) {
            ctx->pc = 0x3489D0u;
            goto label_3489d0;
        }
    }
    ctx->pc = 0x348998u;
label_348998:
    // 0x348998: 0x246201e0  addiu       $v0, $v1, 0x1E0
    ctx->pc = 0x348998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_34899c:
    // 0x34899c: 0xdc6e0000  ld          $t6, 0x0($v1)
    ctx->pc = 0x34899cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3489a0: 0xdc6f0008  ld          $t7, 0x8($v1)
    ctx->pc = 0x3489a0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3489a4: 0xdc700010  ld          $s0, 0x10($v1)
    ctx->pc = 0x3489a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3489a8: 0xdc710018  ld          $s1, 0x18($v1)
    ctx->pc = 0x3489a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3489ac: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x3489acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x3489b0: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x3489b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x3489b4: 0xfc900010  sd          $s0, 0x10($a0)
    ctx->pc = 0x3489b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 16));
    // 0x3489b8: 0xfc910018  sd          $s1, 0x18($a0)
    ctx->pc = 0x3489b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 17));
    // 0x3489bc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3489bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3489c0: 0x0  nop
    ctx->pc = 0x3489c0u;
    // NOP
    // 0x3489c4: 0x0  nop
    ctx->pc = 0x3489c4u;
    // NOP
    // 0x3489c8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3489C8u;
    {
        const bool branch_taken_0x3489c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3489CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489C8u;
        // 0x3489cc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489c8) {
            ctx->pc = 0x34899Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34899c;
        }
    }
    ctx->pc = 0x3489D0u;
label_3489d0:
    // 0x3489d0: 0x686e0007  ldl         $t6, 0x7($v1)
    ctx->pc = 0x3489d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x3489d4: 0x6c6e0000  ldr         $t6, 0x0($v1)
    ctx->pc = 0x3489d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x3489d8: 0x686f000f  ldl         $t7, 0xF($v1)
    ctx->pc = 0x3489d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x3489dc: 0x6c6f0008  ldr         $t7, 0x8($v1)
    ctx->pc = 0x3489dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x3489e0: 0x68700017  ldl         $s0, 0x17($v1)
    ctx->pc = 0x3489e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x3489e4: 0x6c700010  ldr         $s0, 0x10($v1)
    ctx->pc = 0x3489e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x3489e8: 0xb08e0007  sdl         $t6, 0x7($a0)
    ctx->pc = 0x3489e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3489ec: 0xb48e0000  sdr         $t6, 0x0($a0)
    ctx->pc = 0x3489ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3489f0: 0xb08f000f  sdl         $t7, 0xF($a0)
    ctx->pc = 0x3489f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3489f4: 0xb48f0008  sdr         $t7, 0x8($a0)
    ctx->pc = 0x3489f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3489f8: 0xb0900017  sdl         $s0, 0x17($a0)
    ctx->pc = 0x3489f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3489fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3489fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x348a00: 0x14e20023  bne         $a3, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x348A00u;
    {
        const bool branch_taken_0x348a00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x348A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A00u;
        // 0x348a04: 0xb4900010  sdr         $s0, 0x10($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a00) {
            ctx->pc = 0x348A90u;
            goto label_348a90;
        }
    }
    ctx->pc = 0x348A08u;
    // 0x348a08: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x348a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x348a0c: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x348a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x348a10: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x348a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x348a14: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x348a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x348a18: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x348a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x348a1c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x348a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x348a20: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x348a20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x348a24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x348a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348a28: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x348A28u;
    {
        const bool branch_taken_0x348a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x348A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A28u;
        // 0x348a2c: 0x240200df  addiu       $v0, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a28) {
            ctx->pc = 0x348A68u;
            goto label_348a68;
        }
    }
    ctx->pc = 0x348A30u;
    // 0x348a30: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x348a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x348a34: 0x24a2ff4a  addiu       $v0, $a1, -0xB6
    ctx->pc = 0x348a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967114));
    // 0x348a38: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x348a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x348a3c: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x348A3Cu;
    {
        const bool branch_taken_0x348a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348a3c) {
            ctx->pc = 0x348A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348A3Cu;
            // 0x348a40: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348B58u;
            goto label_348b58;
        }
    }
    ctx->pc = 0x348A44u;
    // 0x348a44: 0x24a2ff36  addiu       $v0, $a1, -0xCA
    ctx->pc = 0x348a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967094));
    // 0x348a48: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x348a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x348a4c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x348A4Cu;
    {
        const bool branch_taken_0x348a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348a4c) {
            ctx->pc = 0x348A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348A4Cu;
            // 0x348a50: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348B58u;
            goto label_348b58;
        }
    }
    ctx->pc = 0x348A54u;
    // 0x348a54: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x348a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x348a58: 0x50a2003f  beql        $a1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x348A58u;
    {
        const bool branch_taken_0x348a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x348a58) {
            ctx->pc = 0x348A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348A58u;
            // 0x348a5c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348B58u;
            goto label_348b58;
        }
    }
    ctx->pc = 0x348A60u;
    // 0x348a60: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x348A60u;
    {
        const bool branch_taken_0x348a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A60u;
        // 0x348a64: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a60) {
            ctx->pc = 0x348B54u;
            goto label_348b54;
        }
    }
    ctx->pc = 0x348A68u;
label_348a68:
    // 0x348a68: 0x5462003a  bnel        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x348A68u;
    {
        const bool branch_taken_0x348a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x348a68) {
            ctx->pc = 0x348A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348A68u;
            // 0x348a6c: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348B54u;
            goto label_348b54;
        }
    }
    ctx->pc = 0x348A70u;
    // 0x348a70: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x348a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x348a74: 0x24a2ff36  addiu       $v0, $a1, -0xCA
    ctx->pc = 0x348a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967094));
    // 0x348a78: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x348a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x348a7c: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x348A7Cu;
    {
        const bool branch_taken_0x348a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348a7c) {
            ctx->pc = 0x348A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348A7Cu;
            // 0x348a80: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348B58u;
            goto label_348b58;
        }
    }
    ctx->pc = 0x348A84u;
    // 0x348a84: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x348A84u;
    {
        const bool branch_taken_0x348a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A84u;
        // 0x348a88: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a84) {
            ctx->pc = 0x348B54u;
            goto label_348b54;
        }
    }
    ctx->pc = 0x348A8Cu;
    // 0x348a8c: 0x0  nop
    ctx->pc = 0x348a8cu;
    // NOP
label_348a90:
    // 0x348a90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x348a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348a94: 0x14e20031  bne         $a3, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x348A94u;
    {
        const bool branch_taken_0x348a94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x348A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A94u;
        // 0x348a98: 0x24a2ff5f  addiu       $v0, $a1, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a94) {
            ctx->pc = 0x348B5Cu;
            goto label_348b5c;
        }
    }
    ctx->pc = 0x348A9Cu;
    // 0x348a9c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x348a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x348aa0: 0x2403008e  addiu       $v1, $zero, 0x8E
    ctx->pc = 0x348aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x348aa4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x348aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348aa8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x348aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x348aac: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x348AACu;
    {
        const bool branch_taken_0x348aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x348AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AACu;
        // 0x348ab0: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348aac) {
            ctx->pc = 0x348B50u;
            goto label_348b50;
        }
    }
    ctx->pc = 0x348AB4u;
    // 0x348ab4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x348ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x348ab8: 0x240300de  addiu       $v1, $zero, 0xDE
    ctx->pc = 0x348ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x348abc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x348abcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x348ac0: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x348ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x348ac4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x348ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x348ac8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x348ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x348acc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x348accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348ad0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x348AD0u;
    {
        const bool branch_taken_0x348ad0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x348AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AD0u;
        // 0x348ad4: 0x240200df  addiu       $v0, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ad0) {
            ctx->pc = 0x348B18u;
            goto label_348b18;
        }
    }
    ctx->pc = 0x348AD8u;
    // 0x348ad8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x348ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x348adc: 0x24a2ff4a  addiu       $v0, $a1, -0xB6
    ctx->pc = 0x348adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967114));
    // 0x348ae0: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x348ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x348ae4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x348AE4u;
    {
        const bool branch_taken_0x348ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348ae4) {
            ctx->pc = 0x348AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348AE4u;
            // 0x348ae8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348B58u;
            goto label_348b58;
        }
    }
    ctx->pc = 0x348AECu;
    // 0x348aec: 0x24a2ff36  addiu       $v0, $a1, -0xCA
    ctx->pc = 0x348aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967094));
    // 0x348af0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x348af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x348af4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x348AF4u;
    {
        const bool branch_taken_0x348af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348af4) {
            ctx->pc = 0x348AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348AF4u;
            // 0x348af8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348B58u;
            goto label_348b58;
        }
    }
    ctx->pc = 0x348AFCu;
    // 0x348afc: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x348afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x348b00: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348B00u;
    {
        const bool branch_taken_0x348b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x348B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B00u;
        // 0x348b04: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b00) {
            ctx->pc = 0x348B10u;
            goto label_348b10;
        }
    }
    ctx->pc = 0x348B08u;
    // 0x348b08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x348B08u;
    {
        const bool branch_taken_0x348b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B08u;
        // 0x348b0c: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b08) {
            ctx->pc = 0x348B54u;
            goto label_348b54;
        }
    }
    ctx->pc = 0x348B10u;
label_348b10:
    // 0x348b10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x348B10u;
    {
        const bool branch_taken_0x348b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B10u;
        // 0x348b14: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b10) {
            ctx->pc = 0x348B58u;
            goto label_348b58;
        }
    }
    ctx->pc = 0x348B18u;
label_348b18:
    // 0x348b18: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x348B18u;
    {
        const bool branch_taken_0x348b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x348B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B18u;
        // 0x348b1c: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b18) {
            ctx->pc = 0x348B48u;
            goto label_348b48;
        }
    }
    ctx->pc = 0x348B20u;
    // 0x348b20: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x348b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x348b24: 0x24a2ff36  addiu       $v0, $a1, -0xCA
    ctx->pc = 0x348b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967094));
    // 0x348b28: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x348b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x348b2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348B2Cu;
    {
        const bool branch_taken_0x348b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B2Cu;
        // 0x348b30: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b2c) {
            ctx->pc = 0x348B40u;
            goto label_348b40;
        }
    }
    ctx->pc = 0x348B34u;
    // 0x348b34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x348B34u;
    {
        const bool branch_taken_0x348b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B34u;
        // 0x348b38: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b34) {
            ctx->pc = 0x348B58u;
            goto label_348b58;
        }
    }
    ctx->pc = 0x348B3Cu;
    // 0x348b3c: 0x0  nop
    ctx->pc = 0x348b3cu;
    // NOP
label_348b40:
    // 0x348b40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x348B40u;
    {
        const bool branch_taken_0x348b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B40u;
        // 0x348b44: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b40) {
            ctx->pc = 0x348B54u;
            goto label_348b54;
        }
    }
    ctx->pc = 0x348B48u;
label_348b48:
    // 0x348b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x348B48u;
    {
        const bool branch_taken_0x348b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B48u;
        // 0x348b4c: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b48) {
            ctx->pc = 0x348B54u;
            goto label_348b54;
        }
    }
    ctx->pc = 0x348B50u;
label_348b50:
    // 0x348b50: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x348b50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_348b54:
    // 0x348b54: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x348b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_348b58:
    // 0x348b58: 0x24a2ff5f  addiu       $v0, $a1, -0xA1
    ctx->pc = 0x348b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967135));
label_348b5c:
    // 0x348b5c: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x348b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x348b60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x348B60u;
    {
        const bool branch_taken_0x348b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B60u;
        // 0x348b64: 0xd10c0  sll         $v0, $t5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b60) {
            ctx->pc = 0x348B80u;
            goto label_348b80;
        }
    }
    ctx->pc = 0x348B68u;
    // 0x348b68: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x348b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x348b6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x348b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b70: 0x8ca4fafc  lw          $a0, -0x504($a1)
    ctx->pc = 0x348b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294966012)));
    // 0x348b74: 0x8c43faf8  lw          $v1, -0x508($v0)
    ctx->pc = 0x348b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966008)));
    // 0x348b78: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x348b78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x348b7c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x348b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_348b80:
    // 0x348b80: 0x11600015  beqz        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x348B80u;
    {
        const bool branch_taken_0x348b80 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b80) {
            ctx->pc = 0x348BD8u;
            goto label_348bd8;
        }
    }
    ctx->pc = 0x348B88u;
    // 0x348b88: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x348b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348b8c: 0x2482ffb6  addiu       $v0, $a0, -0x4A
    ctx->pc = 0x348b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967222));
    // 0x348b90: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x348b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x348b94: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x348B94u;
    {
        const bool branch_taken_0x348b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B94u;
        // 0x348b98: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b94) {
            ctx->pc = 0x348BF8u;
            goto label_348bf8;
        }
    }
    ctx->pc = 0x348B9Cu;
    // 0x348b9c: 0x2482ff92  addiu       $v0, $a0, -0x6E
    ctx->pc = 0x348b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x348ba0: 0x2c42000d  sltiu       $v0, $v0, 0xD
    ctx->pc = 0x348ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x348ba4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x348BA4u;
    {
        const bool branch_taken_0x348ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348ba4) {
            ctx->pc = 0x348BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348BA4u;
            // 0x348ba8: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348BB8u;
            goto label_348bb8;
        }
    }
    ctx->pc = 0x348BACu;
    // 0x348bac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x348BACu;
    {
        const bool branch_taken_0x348bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BACu;
        // 0x348bb0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bac) {
            ctx->pc = 0x348BF8u;
            goto label_348bf8;
        }
    }
    ctx->pc = 0x348BB4u;
    // 0x348bb4: 0x0  nop
    ctx->pc = 0x348bb4u;
    // NOP
label_348bb8:
    // 0x348bb8: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x348bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x348bbc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x348BBCu;
    {
        const bool branch_taken_0x348bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x348BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BBCu;
        // 0x348bc0: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bbc) {
            ctx->pc = 0x348BFCu;
            goto label_348bfc;
        }
    }
    ctx->pc = 0x348BC4u;
    // 0x348bc4: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x348BC4u;
    {
        const bool branch_taken_0x348bc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x348BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BC4u;
        // 0x348bc8: 0x24020094  addiu       $v0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bc4) {
            ctx->pc = 0x348BFCu;
            goto label_348bfc;
        }
    }
    ctx->pc = 0x348BCCu;
    // 0x348bcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x348BCCu;
    {
        const bool branch_taken_0x348bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BCCu;
        // 0x348bd0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bcc) {
            ctx->pc = 0x348BFCu;
            goto label_348bfc;
        }
    }
    ctx->pc = 0x348BD4u;
    // 0x348bd4: 0x0  nop
    ctx->pc = 0x348bd4u;
    // NOP
label_348bd8:
    // 0x348bd8: 0x11800008  beqz        $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x348BD8u;
    {
        const bool branch_taken_0x348bd8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x348bd8) {
            ctx->pc = 0x348BFCu;
            goto label_348bfc;
        }
    }
    ctx->pc = 0x348BE0u;
    // 0x348be0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x348be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348be4: 0x2862006e  slti        $v0, $v1, 0x6E
    ctx->pc = 0x348be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x348be8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348BE8u;
    {
        const bool branch_taken_0x348be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BE8u;
        // 0x348bec: 0x2862007b  slti        $v0, $v1, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348be8) {
            ctx->pc = 0x348BFCu;
            goto label_348bfc;
        }
    }
    ctx->pc = 0x348BF0u;
    // 0x348bf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x348BF0u;
    {
        const bool branch_taken_0x348bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BF0u;
        // 0x348bf4: 0x24620002  addiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bf0) {
            ctx->pc = 0x348BFCu;
            goto label_348bfc;
        }
    }
    ctx->pc = 0x348BF8u;
label_348bf8:
    // 0x348bf8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x348bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_348bfc:
    // 0x348bfc: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x348BFCu;
    {
        const bool branch_taken_0x348bfc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BFCu;
        // 0x348c00: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bfc) {
            ctx->pc = 0x348C40u;
            goto label_348c40;
        }
    }
    ctx->pc = 0x348C04u;
    // 0x348c04: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x348c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x348c08: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x348C08u;
    {
        const bool branch_taken_0x348c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x348C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C08u;
        // 0x348c0c: 0xdfb00200  ld          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c08) {
            ctx->pc = 0x348C44u;
            goto label_348c44;
        }
    }
    ctx->pc = 0x348C10u;
    // 0x348c10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x348c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348c14: 0x28420094  slti        $v0, $v0, 0x94
    ctx->pc = 0x348c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)148) ? 1 : 0);
    // 0x348c18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x348C18u;
    {
        const bool branch_taken_0x348c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C18u;
        // 0x348c1c: 0xdfb10208  ld          $s1, 0x208($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c18) {
            ctx->pc = 0x348C48u;
            goto label_348c48;
        }
    }
    ctx->pc = 0x348C20u;
    // 0x348c20: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x348c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x348c24: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x348c24u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x348c28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x348c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348c2c: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x348c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x348c30: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x348C30u;
    {
        const bool branch_taken_0x348c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348c30) {
            ctx->pc = 0x348C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348C30u;
            // 0x348c34: 0x2462005f  addiu       $v0, $v1, 0x5F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 95));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348C3Cu;
            goto label_348c3c;
        }
    }
    ctx->pc = 0x348C38u;
    // 0x348c38: 0x2462005e  addiu       $v0, $v1, 0x5E
    ctx->pc = 0x348c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
label_348c3c:
    // 0x348c3c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x348c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_348c40:
    // 0x348c40: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x348c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_348c44:
    // 0x348c44: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x348c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
label_348c48:
    // 0x348c48: 0x3e00008  jr          $ra
    ctx->pc = 0x348C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C48u;
        // 0x348c4c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348C50u;
}
