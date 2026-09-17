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

// Function: sub_002F3E70
// Address: 0x2f3e70 - 0x2f40d0
void sub_002F3E70_0x2f3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3E70_0x2f3e70");
#endif

    switch (ctx->pc) {
        case 0x2f3facu: goto label_2f3fac;
        case 0x2f3fd0u: goto label_2f3fd0;
        case 0x2f3fe0u: goto label_2f3fe0;
        case 0x2f400cu: goto label_2f400c;
        case 0x2f4034u: goto label_2f4034;
        case 0x2f403cu: goto label_2f403c;
        case 0x2f4084u: goto label_2f4084;
        case 0x2f40a4u: goto label_2f40a4;
        default: break;
    }

    ctx->pc = 0x2f3e70u;

    // 0x2f3e70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f3e74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f3e78: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2f3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2f3e7c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2f3e7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f3e80: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x2f3e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x2f3e84: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x2f3e84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f3e88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2f3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2f3e8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f3e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f3e90: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2f3e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2f3e94: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2f3e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3e98: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2f3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2f3e9c: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2f3e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f3ea0: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2f3ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2f3ea4: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x2f3ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3ea8: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2f3ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2f3eac: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x2f3eacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3eb0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2f3eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2f3eb4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f3eb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3eb8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2f3eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2f3ebc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2f3ec0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f3ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f3ec4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f3ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f3ec8: 0x244e1268  addiu       $t6, $v0, 0x1268
    ctx->pc = 0x2f3ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x2f3ecc: 0x69cb0007  ldl         $t3, 0x7($t6)
    ctx->pc = 0x2f3eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2f3ed0: 0x6dcb0000  ldr         $t3, 0x0($t6)
    ctx->pc = 0x2f3ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2f3ed4: 0x69cc000f  ldl         $t4, 0xF($t6)
    ctx->pc = 0x2f3ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2f3ed8: 0x6dcc0008  ldr         $t4, 0x8($t6)
    ctx->pc = 0x2f3ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2f3edc: 0xb3ab0007  sdl         $t3, 0x7($sp)
    ctx->pc = 0x2f3edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3ee0: 0xb7ab0000  sdr         $t3, 0x0($sp)
    ctx->pc = 0x2f3ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3ee4: 0xb3ac000f  sdl         $t4, 0xF($sp)
    ctx->pc = 0x2f3ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3ee8: 0xb7ac0008  sdr         $t4, 0x8($sp)
    ctx->pc = 0x2f3ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3eec: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f3eecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f3ef0: 0x246d1278  addiu       $t5, $v1, 0x1278
    ctx->pc = 0x2f3ef0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4728));
    // 0x2f3ef4: 0x69a20007  ldl         $v0, 0x7($t5)
    ctx->pc = 0x2f3ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f3ef8: 0x6da20000  ldr         $v0, 0x0($t5)
    ctx->pc = 0x2f3ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f3efc: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x2f3efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2f3f00: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x2f3f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2f3f04: 0xb2e20007  sdl         $v0, 0x7($s7)
    ctx->pc = 0x2f3f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f08: 0xb6e20000  sdr         $v0, 0x0($s7)
    ctx->pc = 0x2f3f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f0c: 0xb2eb000f  sdl         $t3, 0xF($s7)
    ctx->pc = 0x2f3f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f10: 0xb6eb0008  sdr         $t3, 0x8($s7)
    ctx->pc = 0x2f3f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f14: 0x3c090015  lui         $t1, 0x15
    ctx->pc = 0x2f3f14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21 << 16));
    // 0x2f3f18: 0x24ab1288  addiu       $t3, $a1, 0x1288
    ctx->pc = 0x2f3f18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4744));
    // 0x2f3f1c: 0x696e0007  ldl         $t6, 0x7($t3)
    ctx->pc = 0x2f3f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2f3f20: 0x6d6e0000  ldr         $t6, 0x0($t3)
    ctx->pc = 0x2f3f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2f3f24: 0x6962000f  ldl         $v0, 0xF($t3)
    ctx->pc = 0x2f3f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f3f28: 0x6d620008  ldr         $v0, 0x8($t3)
    ctx->pc = 0x2f3f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f3f2c: 0xb28e0007  sdl         $t6, 0x7($s4)
    ctx->pc = 0x2f3f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f30: 0xb68e0000  sdr         $t6, 0x0($s4)
    ctx->pc = 0x2f3f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f34: 0xb282000f  sdl         $v0, 0xF($s4)
    ctx->pc = 0x2f3f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f38: 0xb6820008  sdr         $v0, 0x8($s4)
    ctx->pc = 0x2f3f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f3c: 0x26ca0110  addiu       $t2, $s6, 0x110
    ctx->pc = 0x2f3f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 272));
    // 0x2f3f40: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2f3f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f44: 0x24c21298  addiu       $v0, $a2, 0x1298
    ctx->pc = 0x2f3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4760));
    // 0x2f3f48: 0x684c0007  ldl         $t4, 0x7($v0)
    ctx->pc = 0x2f3f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2f3f4c: 0x6c4c0000  ldr         $t4, 0x0($v0)
    ctx->pc = 0x2f3f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2f3f50: 0x684d000f  ldl         $t5, 0xF($v0)
    ctx->pc = 0x2f3f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2f3f54: 0x6c4d0008  ldr         $t5, 0x8($v0)
    ctx->pc = 0x2f3f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2f3f58: 0xb2ac0007  sdl         $t4, 0x7($s5)
    ctx->pc = 0x2f3f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f5c: 0xb6ac0000  sdr         $t4, 0x0($s5)
    ctx->pc = 0x2f3f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f60: 0xb2ad000f  sdl         $t5, 0xF($s5)
    ctx->pc = 0x2f3f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f64: 0xb6ad0008  sdr         $t5, 0x8($s5)
    ctx->pc = 0x2f3f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f68: 0x24eb4b20  addiu       $t3, $a3, 0x4B20
    ctx->pc = 0x2f3f68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 19232));
    // 0x2f3f6c: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x2f3f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f3f70: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x2f3f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f3f74: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x2f3f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f78: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x2f3f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f7c: 0x25024b28  addiu       $v0, $t0, 0x4B28
    ctx->pc = 0x2f3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 19240));
    // 0x2f3f80: 0x684c0007  ldl         $t4, 0x7($v0)
    ctx->pc = 0x2f3f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2f3f84: 0x6c4c0000  ldr         $t4, 0x0($v0)
    ctx->pc = 0x2f3f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2f3f88: 0xb22c0007  sdl         $t4, 0x7($s1)
    ctx->pc = 0x2f3f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f8c: 0xb62c0000  sdr         $t4, 0x0($s1)
    ctx->pc = 0x2f3f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3f90: 0x252b4b30  addiu       $t3, $t1, 0x4B30
    ctx->pc = 0x2f3f90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 19248));
    // 0x2f3f94: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x2f3f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f3f98: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x2f3f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f3f9c: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x2f3f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fa0: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x2f3fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fa4: 0xc0bb934  jal         func_2EE4D0
    ctx->pc = 0x2F3FA4u;
    SET_GPR_U32(ctx, 31, 0x2F3FACu);
    ctx->pc = 0x2F3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3FA4u;
    // 0x2f3fa8: 0x8d500000  lw          $s0, 0x0($t2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4D0u, 0x2F3FA4u, 0x2F3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FACu;
label_2f3fac:
    // 0x2f3fac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fb0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F3FB0u;
    {
        const bool branch_taken_0x2f3fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FB0u;
        // 0x2f3fb4: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fb0) {
            ctx->pc = 0x2F3FE8u;
            goto label_2f3fe8;
        }
    }
    ctx->pc = 0x2F3FB8u;
    // 0x2f3fb8: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x2f3fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2f3fbc: 0x3a38821  addu        $s1, $sp, $v1
    ctx->pc = 0x2f3fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2f3fc0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2f3fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2f3fc4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f3fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f3fc8: 0xc0bd034  jal         func_2F40D0
    ctx->pc = 0x2F3FC8u;
    SET_GPR_U32(ctx, 31, 0x2F3FD0u);
    ctx->pc = 0x2F3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3FC8u;
    // 0x2f3fcc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F40D0u, 0x2F3FC8u, 0x2F3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FD0u;
label_2f3fd0:
    // 0x2f3fd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fd4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f3fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f3fd8: 0xc0bd036  jal         func_2F40D8
    ctx->pc = 0x2F3FD8u;
    SET_GPR_U32(ctx, 31, 0x2F3FE0u);
    ctx->pc = 0x2F3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3FD8u;
    // 0x2f3fdc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F40D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F40D8u, 0x2F3FD8u, 0x2F3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FE0u;
label_2f3fe0:
    // 0x2f3fe0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2F3FE0u;
    {
        const bool branch_taken_0x2f3fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FE0u;
        // 0x2f3fe4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fe0) {
            ctx->pc = 0x2F40A8u;
            goto label_2f40a8;
        }
    }
    ctx->pc = 0x2F3FE8u;
label_2f3fe8:
    // 0x2f3fe8: 0x8ec20104  lw          $v0, 0x104($s6)
    ctx->pc = 0x2f3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x2f3fec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F3FECu;
    {
        const bool branch_taken_0x2f3fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FECu;
        // 0x2f3ff0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fec) {
            ctx->pc = 0x2F4018u;
            goto label_2f4018;
        }
    }
    ctx->pc = 0x2F3FF4u;
    // 0x2f3ff4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ff8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f3ffc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f3ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4000: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2f4000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4004: 0xc0bbe04  jal         func_2EF810
    ctx->pc = 0x2F4004u;
    SET_GPR_U32(ctx, 31, 0x2F400Cu);
    ctx->pc = 0x2F4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4004u;
    // 0x2f4008: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2F4004u, 0x2F400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F400Cu;
label_2f400c:
    // 0x2f400c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F400Cu;
    {
        const bool branch_taken_0x2f400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f400c) {
            ctx->pc = 0x2F4034u;
            goto label_2f4034;
        }
    }
    ctx->pc = 0x2F4014u;
    // 0x2f4014: 0x0  nop
    ctx->pc = 0x2f4014u;
    // NOP
label_2f4018:
    // 0x2f4018: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f4018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f401c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2f401cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f4020: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f4020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2f4024: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2f4024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4028: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f4028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f402c: 0xc0bbe04  jal         func_2EF810
    ctx->pc = 0x2F402Cu;
    SET_GPR_U32(ctx, 31, 0x2F4034u);
    ctx->pc = 0x2F4030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F402Cu;
    // 0x2f4030: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2F402Cu, 0x2F4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4034u;
label_2f4034:
    // 0x2f4034: 0xc0bbece  jal         func_2EFB38
    ctx->pc = 0x2F4034u;
    SET_GPR_U32(ctx, 31, 0x2F403Cu);
    ctx->pc = 0x2F4038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4034u;
    // 0x2f4038: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFB38u, 0x2F4034u, 0x2F403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F403Cu;
label_2f403c:
    // 0x2f403c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4040: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2f4040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2f4044: 0x27b00014  addiu       $s0, $sp, 0x14
    ctx->pc = 0x2f4044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2f4048: 0x27b10024  addiu       $s1, $sp, 0x24
    ctx->pc = 0x2f4048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2f404c: 0x27b20034  addiu       $s2, $sp, 0x34
    ctx->pc = 0x2f404cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2f4050: 0x2e29821  addu        $s3, $s7, $v0
    ctx->pc = 0x2f4050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2f4054: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2f4054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2f4058: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2f4058u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2f405c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2f405cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f4060: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2f4060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f4064: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2f4064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f4068: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f4068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f406c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2f406cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f4070: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2f4070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f4074: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x2f4074u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4078: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x2f4078u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f407c: 0xc0bbeec  jal         func_2EFBB0
    ctx->pc = 0x2F407Cu;
    SET_GPR_U32(ctx, 31, 0x2F4084u);
    ctx->pc = 0x2F4080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F407Cu;
    // 0x2f4080: 0x8e4a0000  lw          $t2, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFBB0u, 0x2F407Cu, 0x2F4084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4084u;
label_2f4084:
    // 0x2f4084: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f4084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4088: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f4088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f408c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2f408cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f4090: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2f4090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f4094: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x2f4094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4098: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x2f4098u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f409c: 0xc0bd04c  jal         func_2F4130
    ctx->pc = 0x2F409Cu;
    SET_GPR_U32(ctx, 31, 0x2F40A4u);
    ctx->pc = 0x2F40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F409Cu;
    // 0x2f40a0: 0x8e4a0000  lw          $t2, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4130u, 0x2F409Cu, 0x2F40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40A4u;
label_2f40a4:
    // 0x2f40a4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2f40a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f40a8:
    // 0x2f40a8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2f40a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f40ac: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2f40acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f40b0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2f40b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f40b4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2f40b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f40b8: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2f40b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f40bc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2f40bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f40c0: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2f40c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f40c4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f40c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f40c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F40C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40C8u;
        // 0x2f40cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F40C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F40D0u;
}
