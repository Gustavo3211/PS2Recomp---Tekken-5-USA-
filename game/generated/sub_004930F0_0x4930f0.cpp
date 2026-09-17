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

// Function: sub_004930F0
// Address: 0x4930f0 - 0x4931a0
void sub_004930F0_0x4930f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004930F0_0x4930f0");
#endif

    switch (ctx->pc) {
        case 0x493100u: goto label_493100;
        default: break;
    }

    ctx->pc = 0x4930f0u;

    // 0x4930f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4930f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4930f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4930f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4930f8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4930F8u;
    SET_GPR_U32(ctx, 31, 0x493100u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4930F8u, 0x493100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493100u;
label_493100:
    // 0x493100: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x493100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x493104: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x493104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x493108: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x493108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x49310c: 0x24470066  addiu       $a3, $v0, 0x66
    ctx->pc = 0x49310cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 102));
    // 0x493110: 0x8ca60044  lw          $a2, 0x44($a1)
    ctx->pc = 0x493110u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x72D6C4u));
    // 0x493114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x493114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493118: 0xa4c30026  sh          $v1, 0x26($a2)
    ctx->pc = 0x493118u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x49311c: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x49311cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x493120: 0xa4c40028  sh          $a0, 0x28($a2)
    ctx->pc = 0x493120u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x493124: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x493124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x493128: 0x31823  negu        $v1, $v1
    ctx->pc = 0x493128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x49312c: 0xa4c3002a  sh          $v1, 0x2A($a2)
    ctx->pc = 0x49312cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x493130: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x493130u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x493134: 0xa4c4002c  sh          $a0, 0x2C($a2)
    ctx->pc = 0x493134u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x493138: 0x94430014  lhu         $v1, 0x14($v0)
    ctx->pc = 0x493138u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x49313c: 0xa4c3002e  sh          $v1, 0x2E($a2)
    ctx->pc = 0x49313cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x493140: 0x94440016  lhu         $a0, 0x16($v0)
    ctx->pc = 0x493140u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x493144: 0xa4c40030  sh          $a0, 0x30($a2)
    ctx->pc = 0x493144u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x493148: 0x8ca322a8  lw          $v1, 0x22A8($a1)
    ctx->pc = 0x493148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8872)));
    // 0x49314c: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x49314cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x493150: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x493150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x493154: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x493154u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x493158: 0xb0c4003b  sdl         $a0, 0x3B($a2)
    ctx->pc = 0x493158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49315c: 0xb4c40034  sdr         $a0, 0x34($a2)
    ctx->pc = 0x49315cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x493160: 0xa4c5003c  sh          $a1, 0x3C($a2)
    ctx->pc = 0x493160u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 60), (uint16_t)GPR_U32(ctx, 5));
    // 0x493164: 0x94440060  lhu         $a0, 0x60($v0)
    ctx->pc = 0x493164u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x493168: 0xa4c40006  sh          $a0, 0x6($a2)
    ctx->pc = 0x493168u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x49316c: 0x94450062  lhu         $a1, 0x62($v0)
    ctx->pc = 0x49316cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x493170: 0xa4c50008  sh          $a1, 0x8($a2)
    ctx->pc = 0x493170u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x493174: 0x84430064  lh          $v1, 0x64($v0)
    ctx->pc = 0x493174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x493178: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x493178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49317c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x49317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x493180: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x493180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x493184: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x493184u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x493188: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x493188u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x49318c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49318cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x493190: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x493190u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x493194: 0x3e00008  jr          $ra
    ctx->pc = 0x493194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x493198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493194u;
        // 0x493198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49319Cu;
    // 0x49319c: 0x0  nop
    ctx->pc = 0x49319cu;
    // NOP
    ctx->pc = 0x4931a0u;
}
