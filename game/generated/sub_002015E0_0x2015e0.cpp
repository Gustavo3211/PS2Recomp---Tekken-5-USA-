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

// Function: sub_002015E0
// Address: 0x2015e0 - 0x201b98
void sub_002015E0_0x2015e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002015E0_0x2015e0");
#endif

    switch (ctx->pc) {
        case 0x20164cu: goto label_20164c;
        case 0x2016acu: goto label_2016ac;
        case 0x201708u: goto label_201708;
        case 0x201728u: goto label_201728;
        case 0x201734u: goto label_201734;
        case 0x2017bcu: goto label_2017bc;
        case 0x201808u: goto label_201808;
        case 0x201818u: goto label_201818;
        case 0x201850u: goto label_201850;
        case 0x2018ecu: goto label_2018ec;
        case 0x201938u: goto label_201938;
        default: break;
    }

    ctx->pc = 0x2015e0u;

    // 0x2015e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2015e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2015e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2015e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015e8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2015e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2015ec: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2015ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2015f0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2015f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2015f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2015f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015f8: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2015f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2015fc: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2015fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x201600: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x201600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x201604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201608: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x201608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x20160c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x20160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x201610: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x201610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x201614: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x201614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x201618: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x201618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x20161c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x20161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x201620: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x201620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x201624: 0xc6200644  lwc1        $f0, 0x644($s1)
    ctx->pc = 0x201624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201628: 0x86220156  lh          $v0, 0x156($s1)
    ctx->pc = 0x201628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 342)));
    // 0x20162c: 0xc6210688  lwc1        $f1, 0x688($s1)
    ctx->pc = 0x20162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201630: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x201630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x201634: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x201634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x201638: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x201638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20163c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20163cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x201640: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x201640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x201644: 0xc04a151  jal         func_128544
    ctx->pc = 0x201644u;
    SET_GPR_U32(ctx, 31, 0x20164Cu);
    ctx->pc = 0x201648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201644u;
    // 0x201648: 0x86370216  lh          $s7, 0x216($s1) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 534)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x201644u, 0x20164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20164Cu;
label_20164c:
    // 0x20164c: 0x96230304  lhu         $v1, 0x304($s1)
    ctx->pc = 0x20164cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x201650: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x201650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x201654: 0x96240308  lhu         $a0, 0x308($s1)
    ctx->pc = 0x201654u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 776)));
    // 0x201658: 0xa7a30020  sh          $v1, 0x20($sp)
    ctx->pc = 0x201658u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x20165c: 0xa7a2002c  sh          $v0, 0x2C($sp)
    ctx->pc = 0x20165cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x201660: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x201660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x201664: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x201664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x201668: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x201668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20166c: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x20166cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x201670: 0x6a050017  ldl         $a1, 0x17($s0)
    ctx->pc = 0x201670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x201674: 0x6e050010  ldr         $a1, 0x10($s0)
    ctx->pc = 0x201674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x201678: 0x8a06001b  lwl         $a2, 0x1B($s0)
    ctx->pc = 0x201678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x20167c: 0x9a060018  lwr         $a2, 0x18($s0)
    ctx->pc = 0x20167cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x201680: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x201680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201684: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x201684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201688: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x201688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20168c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x20168cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201690: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x201690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201694: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x201694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201698: 0xaba6001b  swl         $a2, 0x1B($sp)
    ctx->pc = 0x201698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x20169c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20169Cu;
    {
        const bool branch_taken_0x20169c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20169Cu;
        // 0x2016a0: 0xbba60018  swr         $a2, 0x18($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20169c) {
            ctx->pc = 0x2016B8u;
            goto label_2016b8;
        }
    }
    ctx->pc = 0x2016A4u;
    // 0x2016a4: 0xc080574  jal         func_2015D0
    ctx->pc = 0x2016A4u;
    SET_GPR_U32(ctx, 31, 0x2016ACu);
    ctx->pc = 0x2016A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2016A4u;
    // 0x2016a8: 0x86240154  lh          $a0, 0x154($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015D0u, 0x2016A4u, 0x2016ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2016ACu;
label_2016ac:
    // 0x2016ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2016ACu;
    {
        const bool branch_taken_0x2016ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016ACu;
        // 0x2016b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016ac) {
            ctx->pc = 0x2016C8u;
            goto label_2016c8;
        }
    }
    ctx->pc = 0x2016B4u;
    // 0x2016b4: 0x0  nop
    ctx->pc = 0x2016b4u;
    // NOP
label_2016b8:
    // 0x2016b8: 0x8e230314  lw          $v1, 0x314($s1)
    ctx->pc = 0x2016b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x2016bc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2016bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016c0: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x2016c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2016c4: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x2016c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
label_2016c8:
    // 0x2016c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2016c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2016cc: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x2016ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x2016d0: 0xa62802fe  sh          $t0, 0x2FE($s1)
    ctx->pc = 0x2016d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 8));
    // 0x2016d4: 0x9454002a  lhu         $s4, 0x2A($v0)
    ctx->pc = 0x2016d4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x2016d8: 0x1e800002  bgtz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2016D8u;
    {
        const bool branch_taken_0x2016d8 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x2016DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016D8u;
        // 0x2016dc: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016d8) {
            ctx->pc = 0x2016E4u;
            goto label_2016e4;
        }
    }
    ctx->pc = 0x2016E0u;
    // 0x2016e0: 0x94540024  lhu         $s4, 0x24($v0)
    ctx->pc = 0x2016e0u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
label_2016e4:
    // 0x2016e4: 0xc6200754  lwc1        $f0, 0x754($s1)
    ctx->pc = 0x2016e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2016e8: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x2016e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2016ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2016ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2016f0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2016f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2016f4: 0x6020001  bltzl       $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2016F4u;
    {
        const bool branch_taken_0x2016f4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2016f4) {
            ctx->pc = 0x2016F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2016F4u;
            // 0x2016f8: 0x94500024  lhu         $s0, 0x24($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2016FCu;
            goto label_2016fc;
        }
    }
    ctx->pc = 0x2016FCu;
label_2016fc:
    // 0x2016fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2016fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201700: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x201700u;
    SET_GPR_U32(ctx, 31, 0x201708u);
    ctx->pc = 0x201704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201700u;
    // 0x201704: 0x13b0c0  sll         $s6, $s3, 3 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4B0u, 0x201700u, 0x201708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201708u;
label_201708:
    // 0x201708: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x201708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x20170c: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x20170cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x201710: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x201710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x201714: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x201714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x201718: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x201718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20171c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20171cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201720: 0xc096b10  jal         func_25AC40
    ctx->pc = 0x201720u;
    SET_GPR_U32(ctx, 31, 0x201728u);
    ctx->pc = 0x201724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201720u;
    // 0x201724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC40u, 0x201720u, 0x201728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201728u;
label_201728:
    // 0x201728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20172c: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x20172Cu;
    SET_GPR_U32(ctx, 31, 0x201734u);
    ctx->pc = 0x201730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20172Cu;
    // 0x201730: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x20172Cu, 0x201734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201734u;
label_201734:
    // 0x201734: 0x2d31023  subu        $v0, $s6, $s3
    ctx->pc = 0x201734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x201738: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x201738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20173c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x20173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x201740: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x201740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201744: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x201748: 0x86230078  lh          $v1, 0x78($s1)
    ctx->pc = 0x201748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x20174c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x20174cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x201750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x201754: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x201754u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x201758: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x201758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20175c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x20175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x201760: 0x28450065  slti        $a1, $v0, 0x65
    ctx->pc = 0x201760u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x201764: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x201764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x201768: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x201768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x20176c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x20176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x201770: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x201770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x201774: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x201774u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x201778: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x201778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20177c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x20177cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x201780: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x201780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x201784: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x201784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x201788: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201788u;
    {
        const bool branch_taken_0x201788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201788u;
        // 0x20178c: 0xe6200128  swc1        $f0, 0x128($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201788) {
            ctx->pc = 0x2017A0u;
            goto label_2017a0;
        }
    }
    ctx->pc = 0x201790u;
    // 0x201790: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x201790u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201794: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x201794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x201798: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x201798u;
    {
        const bool branch_taken_0x201798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201798u;
        // 0x20179c: 0xc78082d8  lwc1        $f0, -0x7D28($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201798) {
            ctx->pc = 0x2017B4u;
            goto label_2017b4;
        }
    }
    ctx->pc = 0x2017A0u;
label_2017a0:
    // 0x2017a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2017a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2017a4: 0xc78182dc  lwc1        $f1, -0x7D24($gp)
    ctx->pc = 0x2017a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2017a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2017a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2017ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2017acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2017b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2017b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2017b4:
    // 0x2017b4: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2017B4u;
    SET_GPR_U32(ctx, 31, 0x2017BCu);
    ctx->pc = 0x2017B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017B4u;
    // 0x2017b8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2017B4u, 0x2017BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017BCu;
label_2017bc:
    // 0x2017bc: 0x86220078  lh          $v0, 0x78($s1)
    ctx->pc = 0x2017bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2017c0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2017c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2017c4: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x2017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2017c8: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x2017c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2017cc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2017ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2017d0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2017d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2017d4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2017d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2017d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2017d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2017dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2017dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2017e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2017e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2017e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2017e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2017e8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2017E8u;
    {
        const bool branch_taken_0x2017e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2017ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017E8u;
        // 0x2017ec: 0xe620011c  swc1        $f0, 0x11C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017e8) {
            ctx->pc = 0x201828u;
            goto label_201828;
        }
    }
    ctx->pc = 0x2017F0u;
    // 0x2017f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2017f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2017f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2017f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2017f8: 0xc78082e0  lwc1        $f0, -0x7D20($gp)
    ctx->pc = 0x2017f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2017fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2017FCu;
    {
        const bool branch_taken_0x2017fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017FCu;
        // 0x201800: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017fc) {
            ctx->pc = 0x201840u;
            goto label_201840;
        }
    }
    ctx->pc = 0x201804u;
    // 0x201804: 0x0  nop
    ctx->pc = 0x201804u;
    // NOP
label_201808:
    // 0x201808: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20180c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x20180cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201810: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x201810u;
    {
        const bool branch_taken_0x201810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201810u;
        // 0x201814: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201810) {
            ctx->pc = 0x2019BCu;
            goto label_2019bc;
        }
    }
    ctx->pc = 0x201818u;
label_201818:
    // 0x201818: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x201818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20181c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x20181Cu;
    {
        const bool branch_taken_0x20181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20181Cu;
        // 0x201820: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20181c) {
            ctx->pc = 0x2019BCu;
            goto label_2019bc;
        }
    }
    ctx->pc = 0x201824u;
    // 0x201824: 0x0  nop
    ctx->pc = 0x201824u;
    // NOP
label_201828:
    // 0x201828: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x201828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20182c: 0xc78182e4  lwc1        $f1, -0x7D1C($gp)
    ctx->pc = 0x20182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201830: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x201830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x201834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201838: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20183c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x20183cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_201840:
    // 0x201840: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x201840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201844: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x201844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x201848: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x201848u;
    SET_GPR_U32(ctx, 31, 0x201850u);
    ctx->pc = 0x20184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201848u;
    // 0x20184c: 0x43a823  subu        $s5, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x201848u, 0x201850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201850u;
label_201850:
    // 0x201850: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x201850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x201854: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x201854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x201858: 0x2405ff9c  addiu       $a1, $zero, -0x64
    ctx->pc = 0x201858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x20185c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x20185cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x201860: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x201860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x201864: 0x2d32023  subu        $a0, $s6, $s3
    ctx->pc = 0x201864u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x201868: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x201868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x20186c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201870: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x201870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x201874: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x201874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201878: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x201878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20187c: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x20187cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x201880: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x201880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x201884: 0x2a02ff9c  slti        $v0, $s0, -0x64
    ctx->pc = 0x201884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967196) ? 1 : 0);
    // 0x201888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x201888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20188c: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x20188cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x201890: 0x2a020065  slti        $v0, $s0, 0x65
    ctx->pc = 0x201890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x201894: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x201894u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x201898: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x201898u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x20189c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x20189cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2018a0: 0x2101018  mult        $v0, $s0, $s0
    ctx->pc = 0x2018a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2018a4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2018a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2018a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2018a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2018ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2018acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2018b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2018b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2018b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2018b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2018b8: 0xe6210120  swc1        $f1, 0x120($s1)
    ctx->pc = 0x2018b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x2018bc: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2018BCu;
    {
        const bool branch_taken_0x2018bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2018bc) {
            ctx->pc = 0x2018C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2018BCu;
            // 0x2018c0: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2018C4u;
            goto label_2018c4;
        }
    }
    ctx->pc = 0x2018C4u;
label_2018c4:
    // 0x2018c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2018c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2018c8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2018c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2018cc: 0x0  nop
    ctx->pc = 0x2018ccu;
    // NOP
    // 0x2018d0: 0x0  nop
    ctx->pc = 0x2018d0u;
    // NOP
    // 0x2018d4: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2018d4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2018d8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2018d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2018dc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2018DCu;
    {
        const bool branch_taken_0x2018dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2018E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018DCu;
        // 0x2018e0: 0xe6200124  swc1        $f0, 0x124($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018dc) {
            ctx->pc = 0x2018F0u;
            goto label_2018f0;
        }
    }
    ctx->pc = 0x2018E4u;
    // 0x2018e4: 0xc04754c  jal         func_11D530
    ctx->pc = 0x2018E4u;
    SET_GPR_U32(ctx, 31, 0x2018ECu);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x2018E4u, 0x2018ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018ECu;
label_2018ec:
    // 0x2018ec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2018ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2018f0:
    // 0x2018f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2018f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2018f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2018f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2018f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2018f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2018fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2018fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x201900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201904: 0x96490006  lhu         $t1, 0x6($s2)
    ctx->pc = 0x201904u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x201908: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x201908u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20190c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x20190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x201910: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x201910u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x201914: 0x3812  mflo        $a3
    ctx->pc = 0x201914u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x201918: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x201918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x20191c: 0xc2380a  movz        $a3, $a2, $v0
    ctx->pc = 0x20191cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x201920: 0x2871823  subu        $v1, $s4, $a3
    ctx->pc = 0x201920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x201924: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x201924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x201928: 0x88202a  slt         $a0, $a0, $t0
    ctx->pc = 0x201928u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x20192c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20192Cu;
    {
        const bool branch_taken_0x20192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20192Cu;
        // 0x201930: 0xc4400a  movz        $t0, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20192c) {
            ctx->pc = 0x201980u;
            goto label_201980;
        }
    }
    ctx->pc = 0x201934u;
    // 0x201934: 0x0  nop
    ctx->pc = 0x201934u;
    // NOP
label_201938:
    // 0x201938: 0x8e240310  lw          $a0, 0x310($s1)
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x20193c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x201940: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x201940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x201944: 0x54a2001e  bnel        $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x201944u;
    {
        const bool branch_taken_0x201944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x201944) {
            ctx->pc = 0x201948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201944u;
            // 0x201948: 0xa62802fe  sh          $t0, 0x2FE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019C0u;
            goto label_2019c0;
        }
    }
    ctx->pc = 0x20194Cu;
    // 0x20194c: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x20194cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x201950: 0x681023  subu        $v0, $v1, $t0
    ctx->pc = 0x201950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x201954: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x201954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x201958: 0x2c420013  sltiu       $v0, $v0, 0x13
    ctx->pc = 0x201958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x20195c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x20195Cu;
    {
        const bool branch_taken_0x20195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20195c) {
            ctx->pc = 0x201960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20195Cu;
            // 0x201960: 0xa62802fe  sh          $t0, 0x2FE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019C0u;
            goto label_2019c0;
        }
    }
    ctx->pc = 0x201964u;
    // 0x201964: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x201964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x201968: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x201968u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20196c: 0x143100a  movz        $v0, $t2, $v1
    ctx->pc = 0x20196cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x201970: 0x1022023  subu        $a0, $t0, $v0
    ctx->pc = 0x201970u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x201974: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x201974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201978: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x201978u;
    {
        const bool branch_taken_0x201978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201978u;
        // 0x20197c: 0xe43821  addu        $a3, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201978) {
            ctx->pc = 0x2019BCu;
            goto label_2019bc;
        }
    }
    ctx->pc = 0x201980u;
label_201980:
    // 0x201980: 0x5520ffa1  bnel        $t1, $zero, . + 4 + (-0x5F << 2)
    ctx->pc = 0x201980u;
    {
        const bool branch_taken_0x201980 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x201980) {
            ctx->pc = 0x201984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201980u;
            // 0x201984: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201808;
        }
    }
    ctx->pc = 0x201988u;
    // 0x201988: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x201988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x20198c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x201990: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201990u;
    {
        const bool branch_taken_0x201990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201990) {
            ctx->pc = 0x2019A0u;
            goto label_2019a0;
        }
    }
    ctx->pc = 0x201998u;
    // 0x201998: 0x150aff9f  bne         $t0, $t2, . + 4 + (-0x61 << 2)
    ctx->pc = 0x201998u;
    {
        const bool branch_taken_0x201998 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x20199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201998u;
        // 0x20199c: 0xe81021  addu        $v0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201998) {
            ctx->pc = 0x201818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201818;
        }
    }
    ctx->pc = 0x2019A0u;
label_2019a0:
    // 0x2019a0: 0x5660ffe5  bnel        $s3, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2019A0u;
    {
        const bool branch_taken_0x2019a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2019a0) {
            ctx->pc = 0x2019A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2019A0u;
            // 0x2019a4: 0x8e2300c4  lw          $v1, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201938;
        }
    }
    ctx->pc = 0x2019A8u;
    // 0x2019a8: 0x24e7000a  addiu       $a3, $a3, 0xA
    ctx->pc = 0x2019a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x2019ac: 0x2871023  subu        $v0, $s4, $a3
    ctx->pc = 0x2019acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2019b0: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x2019b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2019b4: 0x268182a  slt         $v1, $s3, $t0
    ctx->pc = 0x2019b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2019b8: 0x143400a  movz        $t0, $t2, $v1
    ctx->pc = 0x2019b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 10));
label_2019bc:
    // 0x2019bc: 0xa62802fe  sh          $t0, 0x2FE($s1)
    ctx->pc = 0x2019bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 8));
label_2019c0:
    // 0x2019c0: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x2019c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2019c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2019C4u;
    {
        const bool branch_taken_0x2019c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2019c4) {
            ctx->pc = 0x2019C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2019C4u;
            // 0x2019c8: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019DCu;
            goto label_2019dc;
        }
    }
    ctx->pc = 0x2019CCu;
    // 0x2019cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2019ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2019d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2019d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2019d4: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x2019d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x2019d8: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x2019d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_2019dc:
    // 0x2019dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2019DCu;
    {
        const bool branch_taken_0x2019dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2019dc) {
            ctx->pc = 0x2019E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2019DCu;
            // 0x2019e0: 0xa62202fe  sh          $v0, 0x2FE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019E4u;
            goto label_2019e4;
        }
    }
    ctx->pc = 0x2019E4u;
label_2019e4:
    // 0x2019e4: 0x96220308  lhu         $v0, 0x308($s1)
    ctx->pc = 0x2019e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 776)));
    // 0x2019e8: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x2019e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2019ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2019ECu;
    {
        const bool branch_taken_0x2019ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2019F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019ECu;
        // 0x2019f0: 0xae2302ac  sw          $v1, 0x2AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019ec) {
            ctx->pc = 0x201A68u;
            goto label_201a68;
        }
    }
    ctx->pc = 0x2019F4u;
    // 0x2019f4: 0x8e250314  lw          $a1, 0x314($s1)
    ctx->pc = 0x2019f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x2019f8: 0x96240078  lhu         $a0, 0x78($s1)
    ctx->pc = 0x2019f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2019fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2019fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201a00: 0xae2202f0  sw          $v0, 0x2F0($s1)
    ctx->pc = 0x201a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
    // 0x201a04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201a08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x201a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x201a0c: 0xae2202ac  sw          $v0, 0x2AC($s1)
    ctx->pc = 0x201a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 2));
    // 0x201a10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201a14: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x201a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x201a18: 0xa62202a6  sh          $v0, 0x2A6($s1)
    ctx->pc = 0x201a18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 678), (uint16_t)GPR_U32(ctx, 2));
    // 0x201a1c: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x201a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x201a20: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x201a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x201a24: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x201a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x201a28: 0xa62402aa  sh          $a0, 0x2AA($s1)
    ctx->pc = 0x201a28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 682), (uint16_t)GPR_U32(ctx, 4));
    // 0x201a2c: 0xa62402a8  sh          $a0, 0x2A8($s1)
    ctx->pc = 0x201a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 680), (uint16_t)GPR_U32(ctx, 4));
    // 0x201a30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201a34: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x201a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x201a38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x201A38u;
    {
        const bool branch_taken_0x201a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a38) {
            ctx->pc = 0x201A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A38u;
            // 0x201a3c: 0xa62002a4  sh          $zero, 0x2A4($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A60u;
            goto label_201a60;
        }
    }
    ctx->pc = 0x201A40u;
    // 0x201a40: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x201a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201a44: 0xa62202a4  sh          $v0, 0x2A4($s1)
    ctx->pc = 0x201a44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 2));
    // 0x201a48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201a4c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x201a4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x201a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201a58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x201A58u;
    {
        const bool branch_taken_0x201a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A58u;
        // 0x201a5c: 0xe62002dc  swc1        $f0, 0x2DC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a58) {
            ctx->pc = 0x201AD0u;
            goto label_201ad0;
        }
    }
    ctx->pc = 0x201A60u;
label_201a60:
    // 0x201a60: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x201A60u;
    {
        const bool branch_taken_0x201a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A60u;
        // 0x201a64: 0xae2002dc  sw          $zero, 0x2DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a60) {
            ctx->pc = 0x201AD0u;
            goto label_201ad0;
        }
    }
    ctx->pc = 0x201A68u;
label_201a68:
    // 0x201a68: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x201a68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201a6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201A6Cu;
    {
        const bool branch_taken_0x201a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A6Cu;
        // 0x201a70: 0x262402ac  addiu       $a0, $s1, 0x2AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 684));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a6c) {
            ctx->pc = 0x201AA8u;
            goto label_201aa8;
        }
    }
    ctx->pc = 0x201A74u;
    // 0x201a74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x201a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201a78: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x201a78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201a7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x201a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x201a80: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x201a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x201a84: 0xa62302a4  sh          $v1, 0x2A4($s1)
    ctx->pc = 0x201a84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 3));
    // 0x201a88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x201a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x201a8c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x201a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201a90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x201a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201a98: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x201a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x201a9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x201A9Cu;
    {
        const bool branch_taken_0x201a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A9Cu;
        // 0x201aa0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a9c) {
            ctx->pc = 0x201AB8u;
            goto label_201ab8;
        }
    }
    ctx->pc = 0x201AA4u;
    // 0x201aa4: 0x0  nop
    ctx->pc = 0x201aa4u;
    // NOP
label_201aa8:
    // 0x201aa8: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x201aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x201aac: 0xa62002a4  sh          $zero, 0x2A4($s1)
    ctx->pc = 0x201aacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 0));
    // 0x201ab0: 0xae2202ac  sw          $v0, 0x2AC($s1)
    ctx->pc = 0x201ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 2));
    // 0x201ab4: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x201ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_201ab8:
    // 0x201ab8: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x201ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x201abc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x201ac0: 0xa62302a6  sh          $v1, 0x2A6($s1)
    ctx->pc = 0x201ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 678), (uint16_t)GPR_U32(ctx, 3));
    // 0x201ac4: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x201ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x201ac8: 0xa62202aa  sh          $v0, 0x2AA($s1)
    ctx->pc = 0x201ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 682), (uint16_t)GPR_U32(ctx, 2));
    // 0x201acc: 0xa62202a8  sh          $v0, 0x2A8($s1)
    ctx->pc = 0x201accu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 680), (uint16_t)GPR_U32(ctx, 2));
label_201ad0:
    // 0x201ad0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x201ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x201ad4: 0xa6220144  sh          $v0, 0x144($s1)
    ctx->pc = 0x201ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 324), (uint16_t)GPR_U32(ctx, 2));
    // 0x201ad8: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x201ad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x201adc: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x201ADCu;
    {
        const bool branch_taken_0x201adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201adc) {
            ctx->pc = 0x201AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201ADCu;
            // 0x201ae0: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201B68u;
            goto label_201b68;
        }
    }
    ctx->pc = 0x201AE4u;
    // 0x201ae4: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x201ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x201ae8: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x201ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201aec: 0xa52018  mult        $a0, $a1, $a1
    ctx->pc = 0x201aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201af0: 0x72051018  mult1       $v0, $s0, $a1
    ctx->pc = 0x201af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x201af4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x201af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x201af8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201afc: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x201afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x201b00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x201b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201b04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x201b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201b08: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x201b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x201b0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201B0Cu;
    {
        const bool branch_taken_0x201b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B0Cu;
        // 0x201b10: 0x2881023  subu        $v0, $s4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b0c) {
            ctx->pc = 0x201B30u;
            goto label_201b30;
        }
    }
    ctx->pc = 0x201B14u;
    // 0x201b14: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x201b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x201b18: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x201b18u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x201b1c: 0x8012  mflo        $s0
    ctx->pc = 0x201b1cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x201b20: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x201b20u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201b28: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x201b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x201b2c: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x201b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_201b30:
    // 0x201b30: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x201b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x201b34: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x201b34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x201b38: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x201B38u;
    {
        const bool branch_taken_0x201b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B38u;
        // 0x201b3c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b38) {
            ctx->pc = 0x201B68u;
            goto label_201b68;
        }
    }
    ctx->pc = 0x201B40u;
    // 0x201b40: 0x841818  mult        $v1, $a0, $a0
    ctx->pc = 0x201b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201b44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x201b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x201b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201b4c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x201b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x201b50: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x201b50u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x201b54: 0x8012  mflo        $s0
    ctx->pc = 0x201b54u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x201b58: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x201b58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201b60: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x201b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x201b64: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x201b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_201b68:
    // 0x201b68: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x201b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x201b6c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x201b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x201b70: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x201b70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201b74: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x201b74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x201b78: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x201b78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x201b7c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x201b7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x201b80: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x201b80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x201b84: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x201b84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x201b88: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x201b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x201b8c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x201b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x201b90: 0x3e00008  jr          $ra
    ctx->pc = 0x201B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B90u;
        // 0x201b94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B98u;
}
