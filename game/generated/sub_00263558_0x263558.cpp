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

// Function: sub_00263558
// Address: 0x263558 - 0x2635e0
void sub_00263558_0x263558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263558_0x263558");
#endif

    ctx->pc = 0x263558u;

    // 0x263558: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x263558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x26355c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x26355cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x263560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263568: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26356c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x26356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x263570: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x263570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263574: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x263574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x263578: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x263578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26357c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x26357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263580: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x263580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x263584: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x263584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x263588: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x263588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26358c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x26358cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x263590: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x263590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x263594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x263594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263598: 0xaca200c4  sw          $v0, 0xC4($a1)
    ctx->pc = 0x263598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 2));
    // 0x26359c: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x26359cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2635a0: 0xa4a30166  sh          $v1, 0x166($a1)
    ctx->pc = 0x2635a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x2635a4: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x2635a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2635a8: 0xa4a202d0  sh          $v0, 0x2D0($a1)
    ctx->pc = 0x2635a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 720), (uint16_t)GPR_U32(ctx, 2));
    // 0x2635ac: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x2635acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2635b0: 0xa4a302bc  sh          $v1, 0x2BC($a1)
    ctx->pc = 0x2635b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 700), (uint16_t)GPR_U32(ctx, 3));
    // 0x2635b4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2635b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2635b8: 0xaca200cc  sw          $v0, 0xCC($a1)
    ctx->pc = 0x2635b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 204), GPR_U32(ctx, 2));
    // 0x2635bc: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x2635bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2635c0: 0xa4a302be  sh          $v1, 0x2BE($a1)
    ctx->pc = 0x2635c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 702), (uint16_t)GPR_U32(ctx, 3));
    // 0x2635c4: 0x9082001e  lbu         $v0, 0x1E($a0)
    ctx->pc = 0x2635c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x2635c8: 0xa0a201ee  sb          $v0, 0x1EE($a1)
    ctx->pc = 0x2635c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 494), (uint8_t)GPR_U32(ctx, 2));
    // 0x2635cc: 0x94830020  lhu         $v1, 0x20($a0)
    ctx->pc = 0x2635ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2635d0: 0xa4a30148  sh          $v1, 0x148($a1)
    ctx->pc = 0x2635d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 328), (uint16_t)GPR_U32(ctx, 3));
    // 0x2635d4: 0x94820022  lhu         $v0, 0x22($a0)
    ctx->pc = 0x2635d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2635d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2635D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2635DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635D8u;
        // 0x2635dc: 0xa4a20180  sh          $v0, 0x180($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2635D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2635E0u;
}
