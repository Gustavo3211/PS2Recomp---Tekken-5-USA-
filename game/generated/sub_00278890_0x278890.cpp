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

// Function: sub_00278890
// Address: 0x278890 - 0x278a40
void sub_00278890_0x278890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278890_0x278890");
#endif

    ctx->pc = 0x278890u;

    // 0x278890: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x278890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278894: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x278894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x278898: 0x9503003c  lhu         $v1, 0x3C($t0)
    ctx->pc = 0x278898u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x27889c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27889cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2788a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2788a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2788a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2788a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2788a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2788a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2788ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2788acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2788b0: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x2788b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x2788b4: 0x24e7a620  addiu       $a3, $a3, -0x59E0
    ctx->pc = 0x2788b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944288));
    // 0x2788b8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2788b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2788bc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2788bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2788c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2788c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2788c4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2788c4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2788c8: 0x2010  mfhi        $a0
    ctx->pc = 0x2788c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2788cc: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2788CCu;
    {
        const bool branch_taken_0x2788cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2788cc) {
            ctx->pc = 0x2788D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2788CCu;
            // 0x2788d0: 0x8ce3000c  lw          $v1, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278958u;
            goto label_278958;
        }
    }
    ctx->pc = 0x2788D4u;
    // 0x2788d4: 0x950606aa  lhu         $a2, 0x6AA($t0)
    ctx->pc = 0x2788d4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1706)));
    // 0x2788d8: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x2788d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2788dc: 0x30ca00f0  andi        $t2, $a2, 0xF0
    ctx->pc = 0x2788dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)240);
    // 0x2788e0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2788e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2788e4: 0x15420006  bne         $t2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2788E4u;
    {
        const bool branch_taken_0x2788e4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2788E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788E4u;
        // 0x2788e8: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788e4) {
            ctx->pc = 0x278900u;
            goto label_278900;
        }
    }
    ctx->pc = 0x2788ECu;
    // 0x2788ec: 0x950306ac  lhu         $v1, 0x6AC($t0)
    ctx->pc = 0x2788ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x2788f0: 0x94e2000e  lhu         $v0, 0xE($a3)
    ctx->pc = 0x2788f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x2788f4: 0x5062003b  beql        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2788F4u;
    {
        const bool branch_taken_0x2788f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2788f4) {
            ctx->pc = 0x2788F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2788F4u;
            // 0x2788f8: 0x24e90002  addiu       $t1, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2789E4u;
            goto label_2789e4;
        }
    }
    ctx->pc = 0x2788FCu;
    // 0x2788fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2788fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_278900:
    // 0x278900: 0x24e90002  addiu       $t1, $a3, 0x2
    ctx->pc = 0x278900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x278904: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x278908: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x278908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x27890c: 0xa48a0610  sh          $t2, 0x610($a0)
    ctx->pc = 0x27890cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1552), (uint16_t)GPR_U32(ctx, 10));
    // 0x278910: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x278910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278914: 0x950206ac  lhu         $v0, 0x6AC($t0)
    ctx->pc = 0x278914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x278918: 0xa4620644  sh          $v0, 0x644($v1)
    ctx->pc = 0x278918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1604), (uint16_t)GPR_U32(ctx, 2));
    // 0x27891c: 0xa4a00676  sh          $zero, 0x676($a1)
    ctx->pc = 0x27891cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1654), (uint16_t)GPR_U32(ctx, 0));
    // 0x278920: 0x950206aa  lhu         $v0, 0x6AA($t0)
    ctx->pc = 0x278920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1706)));
    // 0x278924: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x278924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x278928: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x278928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x27892c: 0xa4e2000c  sh          $v0, 0xC($a3)
    ctx->pc = 0x27892cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x278930: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x278934: 0x2c840018  sltiu       $a0, $a0, 0x18
    ctx->pc = 0x278934u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x278938: 0x950206ac  lhu         $v0, 0x6AC($t0)
    ctx->pc = 0x278938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x27893c: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x27893cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x278940: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x278940u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x278944: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x278944u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x278948: 0xa4e00010  sh          $zero, 0x10($a3)
    ctx->pc = 0x278948u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x27894c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x27894Cu;
    {
        const bool branch_taken_0x27894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27894Cu;
        // 0x278950: 0x950606aa  lhu         $a2, 0x6AA($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1706)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27894c) {
            ctx->pc = 0x2789E4u;
            goto label_2789e4;
        }
    }
    ctx->pc = 0x278954u;
    // 0x278954: 0x0  nop
    ctx->pc = 0x278954u;
    // NOP
label_278958:
    // 0x278958: 0x890206ad  lwl         $v0, 0x6AD($t0)
    ctx->pc = 0x278958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 1709); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x27895c: 0x990206aa  lwr         $v0, 0x6AA($t0)
    ctx->pc = 0x27895cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 1706); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x278960: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x278960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x278964: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x278964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x278968: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x278968u;
    {
        const bool branch_taken_0x278968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278968u;
        // 0x27896c: 0x950606aa  lhu         $a2, 0x6AA($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1706)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278968) {
            ctx->pc = 0x278980u;
            goto label_278980;
        }
    }
    ctx->pc = 0x278970u;
    // 0x278970: 0x950306ae  lhu         $v1, 0x6AE($t0)
    ctx->pc = 0x278970u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1710)));
    // 0x278974: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x278974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x278978: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x278978u;
    {
        const bool branch_taken_0x278978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278978) {
            ctx->pc = 0x2789E0u;
            goto label_2789e0;
        }
    }
    ctx->pc = 0x278980u;
label_278980:
    // 0x278980: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x278980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x278984: 0x24e90002  addiu       $t1, $a3, 0x2
    ctx->pc = 0x278984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x278988: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x278988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x27898c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x27898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x278990: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x278990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278994: 0xa4660610  sh          $a2, 0x610($v1)
    ctx->pc = 0x278994u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1552), (uint16_t)GPR_U32(ctx, 6));
    // 0x278998: 0x950206ac  lhu         $v0, 0x6AC($t0)
    ctx->pc = 0x278998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x27899c: 0xa4a20644  sh          $v0, 0x644($a1)
    ctx->pc = 0x27899cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1604), (uint16_t)GPR_U32(ctx, 2));
    // 0x2789a0: 0x950306ae  lhu         $v1, 0x6AE($t0)
    ctx->pc = 0x2789a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1710)));
    // 0x2789a4: 0xa4830676  sh          $v1, 0x676($a0)
    ctx->pc = 0x2789a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1654), (uint16_t)GPR_U32(ctx, 3));
    // 0x2789a8: 0x950506aa  lhu         $a1, 0x6AA($t0)
    ctx->pc = 0x2789a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1706)));
    // 0x2789ac: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2789acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2789b0: 0xa4e5000c  sh          $a1, 0xC($a3)
    ctx->pc = 0x2789b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x2789b4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2789b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2789b8: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x2789b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2789bc: 0x950406ac  lhu         $a0, 0x6AC($t0)
    ctx->pc = 0x2789bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x2789c0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2789c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2789c4: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x2789c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x2789c8: 0x950206ae  lhu         $v0, 0x6AE($t0)
    ctx->pc = 0x2789c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1710)));
    // 0x2789cc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2789ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2789d0: 0xa4e20010  sh          $v0, 0x10($a3)
    ctx->pc = 0x2789d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2789d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2789D4u;
    {
        const bool branch_taken_0x2789d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789D4u;
        // 0x2789d8: 0x950606aa  lhu         $a2, 0x6AA($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1706)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789d4) {
            ctx->pc = 0x2789E4u;
            goto label_2789e4;
        }
    }
    ctx->pc = 0x2789DCu;
    // 0x2789dc: 0x0  nop
    ctx->pc = 0x2789dcu;
    // NOP
label_2789e0:
    // 0x2789e0: 0x24e90002  addiu       $t1, $a3, 0x2
    ctx->pc = 0x2789e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_2789e4:
    // 0x2789e4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x2789e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2789e8: 0x24a400ff  addiu       $a0, $a1, 0xFF
    ctx->pc = 0x2789e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x2789ec: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x2789ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2789f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2789f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2789f4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2789f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2789f8: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x2789f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2789fc: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x2789fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x278a00: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x278a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x278a04: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x278a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x278a08: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x278a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x278a0c: 0xa4660010  sh          $a2, 0x10($v1)
    ctx->pc = 0x278a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x278a10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x278a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x278a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a18: 0x950206ac  lhu         $v0, 0x6AC($t0)
    ctx->pc = 0x278a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x278a1c: 0xa4a20210  sh          $v0, 0x210($a1)
    ctx->pc = 0x278a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 528), (uint16_t)GPR_U32(ctx, 2));
    // 0x278a20: 0x950306ae  lhu         $v1, 0x6AE($t0)
    ctx->pc = 0x278a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1710)));
    // 0x278a24: 0xa4830410  sh          $v1, 0x410($a0)
    ctx->pc = 0x278a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1040), (uint16_t)GPR_U32(ctx, 3));
    // 0x278a28: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x278a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x278a2c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x278a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278a30: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x278a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x278a34: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x278a34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x278a38: 0x3e00008  jr          $ra
    ctx->pc = 0x278A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A38u;
        // 0x278a3c: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278A40u;
}
