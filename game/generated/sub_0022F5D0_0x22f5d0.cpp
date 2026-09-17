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

// Function: sub_0022F5D0
// Address: 0x22f5d0 - 0x22f780
void sub_0022F5D0_0x22f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F5D0_0x22f5d0");
#endif

    switch (ctx->pc) {
        case 0x22f688u: goto label_22f688;
        case 0x22f728u: goto label_22f728;
        case 0x22f75cu: goto label_22f75c;
        case 0x22f764u: goto label_22f764;
        default: break;
    }

    ctx->pc = 0x22f5d0u;

    // 0x22f5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f5d4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x22f5d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22f5dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22f5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22f5e4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22f5e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22f5ec: 0x24529a70  addiu       $s2, $v0, -0x6590
    ctx->pc = 0x22f5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x22f5f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x22f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x22f5f4: 0x8d100010  lw          $s0, 0x10($t0)
    ctx->pc = 0x22f5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x22f5f8: 0x6a020017  ldl         $v0, 0x17($s0)
    ctx->pc = 0x22f5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22f5fc: 0x6e020010  ldr         $v0, 0x10($s0)
    ctx->pc = 0x22f5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22f600: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x22f600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22f604: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x22f604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22f608: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x22f608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f60c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x22f60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f610: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x22f610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f614: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x22f614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f618: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x22f618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22f61c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F61Cu;
    {
        const bool branch_taken_0x22f61c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F61Cu;
        // 0x22f620: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f61c) {
            ctx->pc = 0x22F638u;
            goto label_22f638;
        }
    }
    ctx->pc = 0x22F624u;
    // 0x22f624: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22f624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f628: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22f628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22f62c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F62Cu;
    {
        const bool branch_taken_0x22f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F62Cu;
        // 0x22f630: 0x9602000e  lhu         $v0, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f62c) {
            ctx->pc = 0x22F650u;
            goto label_22f650;
        }
    }
    ctx->pc = 0x22F634u;
    // 0x22f634: 0x0  nop
    ctx->pc = 0x22f634u;
    // NOP
label_22f638:
    // 0x22f638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f63c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22f63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22f640: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22f640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f644: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22f644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22f648: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x22f648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x22f64c: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x22f64cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_22f650:
    // 0x22f650: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F650u;
    {
        const bool branch_taken_0x22f650 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F650u;
        // 0x22f654: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f650) {
            ctx->pc = 0x22F668u;
            goto label_22f668;
        }
    }
    ctx->pc = 0x22F658u;
    // 0x22f658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f65c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F65Cu;
    {
        const bool branch_taken_0x22f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F65Cu;
        // 0x22f660: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f65c) {
            ctx->pc = 0x22F680u;
            goto label_22f680;
        }
    }
    ctx->pc = 0x22F664u;
    // 0x22f664: 0x0  nop
    ctx->pc = 0x22f664u;
    // NOP
label_22f668:
    // 0x22f668: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22f66c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f670: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22f674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f678: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22f678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f67c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22f67cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22f680:
    // 0x22f680: 0x1a200027  blez        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x22F680u;
    {
        const bool branch_taken_0x22f680 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F680u;
        // 0x22f684: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f680) {
            ctx->pc = 0x22F720u;
            goto label_22f720;
        }
    }
    ctx->pc = 0x22F688u;
label_22f688:
    // 0x22f688: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x22f688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22f68c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x22f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22f690: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x22f690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x22f694: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22f694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22f698: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22f698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22f69c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x22f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x22f6a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22f6a4: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x22f6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x22f6a8: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x22f6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x22f6ac: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22f6b0: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x22f6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f6b4: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x22f6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f6b8: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x22f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x22f6bc: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x22f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x22f6c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22f6c4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x22f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x22f6c8: 0xf1302a  slt         $a2, $a3, $s1
    ctx->pc = 0x22f6c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x22f6cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f6d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22f6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f6d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22f6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22f6d8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x22f6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x22f6dc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x22f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x22f6e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f6e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x22f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f6e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f6ec: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x22f6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x22f6f0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x22f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x22f6f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22f6f8: 0x68a90007  ldl         $t1, 0x7($a1)
    ctx->pc = 0x22f6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x22f6fc: 0x6ca90000  ldr         $t1, 0x0($a1)
    ctx->pc = 0x22f6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x22f700: 0x68aa000f  ldl         $t2, 0xF($a1)
    ctx->pc = 0x22f700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x22f704: 0x6caa0008  ldr         $t2, 0x8($a1)
    ctx->pc = 0x22f704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x22f708: 0xb0690017  sdl         $t1, 0x17($v1)
    ctx->pc = 0x22f708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f70c: 0xb4690010  sdr         $t1, 0x10($v1)
    ctx->pc = 0x22f70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f710: 0xb06a001f  sdl         $t2, 0x1F($v1)
    ctx->pc = 0x22f710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f714: 0xb46a0018  sdr         $t2, 0x18($v1)
    ctx->pc = 0x22f714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22f718: 0x14c0ffdb  bnez        $a2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x22F718u;
    {
        const bool branch_taken_0x22f718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F718u;
        // 0x22f71c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f718) {
            ctx->pc = 0x22F688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f688;
        }
    }
    ctx->pc = 0x22F720u;
label_22f720:
    // 0x22f720: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x22F720u;
    SET_GPR_U32(ctx, 31, 0x22F728u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x22F720u, 0x22F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F728u;
label_22f728:
    // 0x22f728: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x22f728u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22f72c: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x22f72cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22f730: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x22f730u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22f734: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x22f734u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22f738: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x22f738u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x22f73c: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x22f73cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x22f740: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x22f740u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x22f744: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x22f744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x22f748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f74c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x22f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22f750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f754: 0xc0c96f2  jal         func_325BC8
    ctx->pc = 0x22F754u;
    SET_GPR_U32(ctx, 31, 0x22F75Cu);
    ctx->pc = 0x22F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F754u;
    // 0x22f758: 0x34e702e0  ori         $a3, $a3, 0x2E0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)736);
    ctx->in_delay_slot = false;
    ctx->pc = 0x325BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325BC8u, 0x22F754u, 0x22F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F75Cu;
label_22f75c:
    // 0x22f75c: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x22F75Cu;
    SET_GPR_U32(ctx, 31, 0x22F764u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x22F75Cu, 0x22F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F764u;
label_22f764:
    // 0x22f764: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22f764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f768: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22f768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f76c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22f76cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f770: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22f770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22f774: 0x3e00008  jr          $ra
    ctx->pc = 0x22F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F774u;
        // 0x22f778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F77Cu;
    // 0x22f77c: 0x0  nop
    ctx->pc = 0x22f77cu;
    // NOP
    ctx->pc = 0x22f780u;
}
