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

// Function: sub_00284580
// Address: 0x284580 - 0x284980
void sub_00284580_0x284580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284580_0x284580");
#endif

    switch (ctx->pc) {
        case 0x2846e0u: goto label_2846e0;
        case 0x284718u: goto label_284718;
        case 0x284720u: goto label_284720;
        case 0x284778u: goto label_284778;
        case 0x2847a8u: goto label_2847a8;
        case 0x2847b0u: goto label_2847b0;
        case 0x2847d4u: goto label_2847d4;
        case 0x284818u: goto label_284818;
        case 0x284870u: goto label_284870;
        case 0x2848c0u: goto label_2848c0;
        case 0x2848d8u: goto label_2848d8;
        default: break;
    }

    ctx->pc = 0x284580u;

    // 0x284580: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x284580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x284584: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x284584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x284588: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x284588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x28458c: 0x244888d0  addiu       $t0, $v0, -0x7730
    ctx->pc = 0x28458cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x284590: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x284590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x284594: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x284594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x284598: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x284598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x28459c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28459cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2845a0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2845a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2845a4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2845a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2845a8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2845a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2845ac: 0x24c683c0  addiu       $a2, $a2, -0x7C40
    ctx->pc = 0x2845acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935488));
    // 0x2845b0: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2845b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2845b4: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2845b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2845b8: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2845b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2845bc: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2845bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2845c0: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2845c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2845c4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2845c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2845c8: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x2845c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2845cc: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2845CCu;
    {
        const bool branch_taken_0x2845cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2845D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845CCu;
        // 0x2845d0: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845cc) {
            ctx->pc = 0x2845DCu;
            goto label_2845dc;
        }
    }
    ctx->pc = 0x2845D4u;
    // 0x2845d4: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x2845d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2845d8: 0xafa80070  sw          $t0, 0x70($sp)
    ctx->pc = 0x2845d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 8));
label_2845dc:
    // 0x2845dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2845dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2845e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2845e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2845e4: 0x244a95c0  addiu       $t2, $v0, -0x6A40
    ctx->pc = 0x2845e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940096));
    // 0x2845e8: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x2845e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2845ec: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x2845ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2845f0: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x2845f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2845f4: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x2845f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2845f8: 0x69490017  ldl         $t1, 0x17($t2)
    ctx->pc = 0x2845f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2845fc: 0x6d490010  ldr         $t1, 0x10($t2)
    ctx->pc = 0x2845fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x284600: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x284600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284604: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x284604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284608: 0xb3a8000f  sdl         $t0, 0xF($sp)
    ctx->pc = 0x284608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28460c: 0xb7a80008  sdr         $t0, 0x8($sp)
    ctx->pc = 0x28460cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284610: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x284610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284614: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x284614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284618: 0x6947001f  ldl         $a3, 0x1F($t2)
    ctx->pc = 0x284618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28461c: 0x6d470018  ldr         $a3, 0x18($t2)
    ctx->pc = 0x28461cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x284620: 0x69480027  ldl         $t0, 0x27($t2)
    ctx->pc = 0x284620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x284624: 0x6d480020  ldr         $t0, 0x20($t2)
    ctx->pc = 0x284624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x284628: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x284628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28462c: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x28462cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284630: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x284630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284634: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x284634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284638: 0x24ca0020  addiu       $t2, $a2, 0x20
    ctx->pc = 0x284638u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x28463c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284640: 0x246995e8  addiu       $t1, $v1, -0x6A18
    ctx->pc = 0x284640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940136));
    // 0x284644: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x284644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x284648: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x284648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28464c: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x28464cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x284650: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x284650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x284654: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x284654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x284658: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x284658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28465c: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x28465cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284660: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x284660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284664: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x284664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284668: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x284668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28466c: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x28466cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284670: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x284670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284674: 0x6922001f  ldl         $v0, 0x1F($t1)
    ctx->pc = 0x284674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x284678: 0x6d220018  ldr         $v0, 0x18($t1)
    ctx->pc = 0x284678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28467c: 0x69270027  ldl         $a3, 0x27($t1)
    ctx->pc = 0x28467cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x284680: 0x6d270020  ldr         $a3, 0x20($t1)
    ctx->pc = 0x284680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x284684: 0x6928002f  ldl         $t0, 0x2F($t1)
    ctx->pc = 0x284684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x284688: 0x6d280028  ldr         $t0, 0x28($t1)
    ctx->pc = 0x284688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28468c: 0xb3a2004f  sdl         $v0, 0x4F($sp)
    ctx->pc = 0x28468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284690: 0xb7a20048  sdr         $v0, 0x48($sp)
    ctx->pc = 0x284690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284694: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x284694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284698: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x284698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28469c: 0xb3a8005f  sdl         $t0, 0x5F($sp)
    ctx->pc = 0x28469cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2846a0: 0xb7a80058  sdr         $t0, 0x58($sp)
    ctx->pc = 0x2846a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2846a4: 0x69220037  ldl         $v0, 0x37($t1)
    ctx->pc = 0x2846a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2846a8: 0x6d220030  ldr         $v0, 0x30($t1)
    ctx->pc = 0x2846a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2846ac: 0x8927003b  lwl         $a3, 0x3B($t1)
    ctx->pc = 0x2846acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 59); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2846b0: 0x99270038  lwr         $a3, 0x38($t1)
    ctx->pc = 0x2846b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2846b4: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x2846b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2846b8: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x2846b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2846bc: 0xaba7006b  swl         $a3, 0x6B($sp)
    ctx->pc = 0x2846bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2846c0: 0xbba70068  swr         $a3, 0x68($sp)
    ctx->pc = 0x2846c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2846c4: 0xafaa0084  sw          $t2, 0x84($sp)
    ctx->pc = 0x2846c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 10));
    // 0x2846c8: 0x24de0024  addiu       $fp, $a2, 0x24
    ctx->pc = 0x2846c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x2846cc: 0xacc4019c  sw          $a0, 0x19C($a2)
    ctx->pc = 0x2846ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 412), GPR_U32(ctx, 4));
    // 0x2846d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2846d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846d4: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2846d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2846d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2846dc: 0x8fa90084  lw          $t1, 0x84($sp)
    ctx->pc = 0x2846dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2846e0:
    // 0x2846e0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2846e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2846e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2846e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2846e8: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x2846e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2846ec: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2846ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2846f0: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x2846f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2846f4: 0xac480180  sw          $t0, 0x180($v0)
    ctx->pc = 0x2846f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 8));
    // 0x2846f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2846F8u;
    {
        const bool branch_taken_0x2846f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846F8u;
        // 0x2846fc: 0xac880190  sw          $t0, 0x190($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846f8) {
            ctx->pc = 0x2846E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2846e0;
        }
    }
    ctx->pc = 0x284700u;
    // 0x284700: 0x9564003c  lhu         $a0, 0x3C($t3)
    ctx->pc = 0x284700u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 60)));
    // 0x284704: 0x90c20031  lbu         $v0, 0x31($a2)
    ctx->pc = 0x284704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 49)));
    // 0x284708: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x284708u;
    {
        const bool branch_taken_0x284708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x284708) {
            ctx->pc = 0x28470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284708u;
            // 0x28470c: 0x94a4003c  lhu         $a0, 0x3C($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284710u;
            goto label_284710;
        }
    }
    ctx->pc = 0x284710u;
label_284710:
    // 0x284710: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x284710u;
    SET_GPR_U32(ctx, 31, 0x284718u);
    ctx->pc = 0x284714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284710u;
    // 0x284714: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x284710u, 0x284718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284718u;
label_284718:
    // 0x284718: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x284718u;
    SET_GPR_U32(ctx, 31, 0x284720u);
    ctx->pc = 0x28471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284718u;
    // 0x28471c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x284718u, 0x284720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284720u;
label_284720:
    // 0x284720: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x284720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x284724: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x284724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x284728: 0xafbe0074  sw          $fp, 0x74($sp)
    ctx->pc = 0x284728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 30));
    // 0x28472c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x28472cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x284730: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x284730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x284734: 0x8c86888c  lw          $a2, -0x7774($a0)
    ctx->pc = 0x284734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936716)));
    // 0x284738: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x284738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x28473c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x28473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x284740: 0x38c60004  xori        $a2, $a2, 0x4
    ctx->pc = 0x284740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
    // 0x284744: 0x2810  mfhi        $a1
    ctx->pc = 0x284744u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x284748: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x284748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x28474c: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x28474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x284750: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x284750u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284754: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x284754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x284758: 0x26620005  addiu       $v0, $s3, 0x5
    ctx->pc = 0x284758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x28475c: 0x46980a  movz        $s3, $v0, $a2
    ctx->pc = 0x28475cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x284760: 0x2a630000  slti        $v1, $s3, 0x0
    ctx->pc = 0x284760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x284764: 0x3980b  movn        $s3, $zero, $v1
    ctx->pc = 0x284764u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x284768: 0x2a62001a  slti        $v0, $s3, 0x1A
    ctx->pc = 0x284768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x28476c: 0x82980a  movz        $s3, $a0, $v0
    ctx->pc = 0x28476cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x284770: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x284770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x284774: 0x0  nop
    ctx->pc = 0x284774u;
    // NOP
label_284778:
    // 0x284778: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x284778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x28477c: 0x24430190  addiu       $v1, $v0, 0x190
    ctx->pc = 0x28477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x284780: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x284780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x284784: 0x3c29021  addu        $s2, $fp, $v0
    ctx->pc = 0x284784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x284788: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x284788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28478c: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x28478cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x284790: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x284790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x284794: 0xafb2007c  sw          $s2, 0x7C($sp)
    ctx->pc = 0x284794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
    // 0x284798: 0xe2b821  addu        $s7, $a3, $v0
    ctx->pc = 0x284798u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28479c: 0xafb40080  sw          $s4, 0x80($sp)
    ctx->pc = 0x28479cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 20));
    // 0x2847a0: 0x103b021  addu        $s6, $t0, $v1
    ctx->pc = 0x2847a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2847a4: 0x0  nop
    ctx->pc = 0x2847a4u;
    // NOP
label_2847a8:
    // 0x2847a8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2847A8u;
    SET_GPR_U32(ctx, 31, 0x2847B0u);
    ctx->pc = 0x2847ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847A8u;
    // 0x2847ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2847A8u, 0x2847B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847B0u;
label_2847b0:
    // 0x2847b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2847b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2847b4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2847b4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2847b8: 0x1810  mfhi        $v1
    ctx->pc = 0x2847b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2847bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2847bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2847c0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2847c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2847c4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2847c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2847c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2847c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2847cc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2847CCu;
    SET_GPR_U32(ctx, 31, 0x2847D4u);
    ctx->pc = 0x2847D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847CCu;
    // 0x2847d0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2847CCu, 0x2847D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847D4u;
label_2847d4:
    // 0x2847d4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2847d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2847d8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2847d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2847dc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2847dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2847e0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2847e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2847e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2847e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847e8: 0x1810  mfhi        $v1
    ctx->pc = 0x2847e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2847ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2847ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2847f0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2847f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2847f4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2847f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2847f8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x2847f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x2847fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2847fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x284800: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x284800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x284804: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x284804u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x284808: 0x2844001a  slti        $a0, $v0, 0x1A
    ctx->pc = 0x284808u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x28480c: 0x44280b  movn        $a1, $v0, $a0
    ctx->pc = 0x28480cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x284810: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x284810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x284814: 0x0  nop
    ctx->pc = 0x284814u;
    // NOP
label_284818:
    // 0x284818: 0x12a6000e  beq         $s5, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x284818u;
    {
        const bool branch_taken_0x284818 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 6));
        ctx->pc = 0x28481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284818u;
        // 0x28481c: 0x8fa80078  lw          $t0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284818) {
            ctx->pc = 0x284854u;
            goto label_284854;
        }
    }
    ctx->pc = 0x284820u;
    // 0x284820: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x284820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x284824: 0x8fa90074  lw          $t1, 0x74($sp)
    ctx->pc = 0x284824u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x284828: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x284828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x28482c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x28482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x284830: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x284830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x284834: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x284834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x284838: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x284838u;
    {
        const bool branch_taken_0x284838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x284838) {
            ctx->pc = 0x28483Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284838u;
            // 0x28483c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284858u;
            goto label_284858;
        }
    }
    ctx->pc = 0x284840u;
    // 0x284840: 0x8ca30190  lw          $v1, 0x190($a1)
    ctx->pc = 0x284840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x284844: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x284844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284848: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x284848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28484c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x28484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x284850: 0x142880a  movz        $s1, $t2, $v0
    ctx->pc = 0x284850u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 10));
label_284854:
    // 0x284854: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x284854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_284858:
    // 0x284858: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x284858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28485c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28485Cu;
    {
        const bool branch_taken_0x28485c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28485Cu;
        // 0x284860: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28485c) {
            ctx->pc = 0x284818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284818;
        }
    }
    ctx->pc = 0x284864u;
    // 0x284864: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x284864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284868: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x284868u;
    SET_GPR_U32(ctx, 31, 0x284870u);
    ctx->pc = 0x28486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284868u;
    // 0x28486c: 0x9444003c  lhu         $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x284868u, 0x284870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284870u;
label_284870:
    // 0x284870: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x284870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x284874: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x284874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x284878: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284878u;
    {
        const bool branch_taken_0x284878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284878) {
            ctx->pc = 0x28487Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284878u;
            // 0x28487c: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28489Cu;
            goto label_28489c;
        }
    }
    ctx->pc = 0x284880u;
    // 0x284880: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x284880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284884: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x284884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x284888: 0x84e30040  lh          $v1, 0x40($a3)
    ctx->pc = 0x284888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x28488c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x28488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x284890: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x284890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x284894: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x284894u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x284898: 0x2308825  or          $s1, $s1, $s0
    ctx->pc = 0x284898u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
label_28489c:
    // 0x28489c: 0x1620ffc2  bnez        $s1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x28489Cu;
    {
        const bool branch_taken_0x28489c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28489c) {
            ctx->pc = 0x2847A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2847a8;
        }
    }
    ctx->pc = 0x2848A4u;
    // 0x2848a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2848a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2848a8: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x2848a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2848ac: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2848ACu;
    {
        const bool branch_taken_0x2848ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2848B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848ACu;
        // 0x2848b0: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848ac) {
            ctx->pc = 0x284778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284778;
        }
    }
    ctx->pc = 0x2848B4u;
    // 0x2848b4: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x2848b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2848b8: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2848b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2848bc: 0x0  nop
    ctx->pc = 0x2848bcu;
    // NOP
label_2848c0:
    // 0x2848c0: 0x19c00020  blez        $t6, . + 4 + (0x20 << 2)
    ctx->pc = 0x2848C0u;
    {
        const bool branch_taken_0x2848c0 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x2848C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848C0u;
        // 0x2848c4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848c0) {
            ctx->pc = 0x284944u;
            goto label_284944;
        }
    }
    ctx->pc = 0x2848C8u;
    // 0x2848c8: 0x8fab0084  lw          $t3, 0x84($sp)
    ctx->pc = 0x2848c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2848cc: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x2848ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848d0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2848d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2848d4: 0x0  nop
    ctx->pc = 0x2848d4u;
    // NOP
label_2848d8:
    // 0x2848d8: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x2848d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2848dc: 0x24620190  addiu       $v0, $v1, 0x190
    ctx->pc = 0x2848dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x2848e0: 0x1844021  addu        $t0, $t4, $a0
    ctx->pc = 0x2848e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2848e4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2848e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2848e8: 0x1624821  addu        $t1, $t3, $v0
    ctx->pc = 0x2848e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2848ec: 0x8c62017c  lw          $v0, 0x17C($v1)
    ctx->pc = 0x2848ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
    // 0x2848f0: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2848f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2848f4: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x2848f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2848f8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2848F8u;
    {
        const bool branch_taken_0x2848f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2848f8) {
            ctx->pc = 0x2848FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2848F8u;
            // 0x2848fc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284938u;
            goto label_284938;
        }
    }
    ctx->pc = 0x284900u;
    // 0x284900: 0x254dffff  addiu       $t5, $t2, -0x1
    ctx->pc = 0x284900u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x284904: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x284904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x284908: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x284908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x28490c: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x28490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x284910: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x284910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x284914: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x284914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x284918: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x284918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28491c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x28491cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x284920: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x284920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x284924: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x284924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x284928: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x284928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28492c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x28492cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x284930: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x284930u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x284934: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x284934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_284938:
    // 0x284938: 0x1ca102a  slt         $v0, $t6, $t2
    ctx->pc = 0x284938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28493c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x28493Cu;
    {
        const bool branch_taken_0x28493c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28493Cu;
        // 0x284940: 0xa1880  sll         $v1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28493c) {
            ctx->pc = 0x2848D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2848d8;
        }
    }
    ctx->pc = 0x284944u;
label_284944:
    // 0x284944: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x284944u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284948: 0x5c3ffdd  bgezl       $t6, . + 4 + (-0x23 << 2)
    ctx->pc = 0x284948u;
    {
        const bool branch_taken_0x284948 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x284948) {
            ctx->pc = 0x28494Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284948u;
            // 0x28494c: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2848C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2848c0;
        }
    }
    ctx->pc = 0x284950u;
    // 0x284950: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x284950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x284954: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x284954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x284958: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x284958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28495c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x28495cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x284960: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x284960u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x284964: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x284964u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x284968: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x284968u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28496c: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x28496cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x284970: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x284970u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x284974: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x284974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x284978: 0x3e00008  jr          $ra
    ctx->pc = 0x284978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284978u;
        // 0x28497c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284980u;
}
