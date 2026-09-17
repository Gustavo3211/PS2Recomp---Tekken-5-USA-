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

// Function: sub_00240930
// Address: 0x240930 - 0x240a00
void sub_00240930_0x240930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240930_0x240930");
#endif

    switch (ctx->pc) {
        case 0x2409b4u: goto label_2409b4;
        case 0x2409f0u: goto label_2409f0;
        default: break;
    }

    ctx->pc = 0x240930u;

    // 0x240930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24093c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x240940: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x240940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x240944: 0x2442d7f8  addiu       $v0, $v0, -0x2808
    ctx->pc = 0x240944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957048));
    // 0x240948: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x240948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24094c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x24094cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240950: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x240950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x240954: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x240954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240958: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x240958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
    // 0x24095c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x24095cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x240960: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x240960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x240964: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x240964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x240968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24096c: 0xae080088  sw          $t0, 0x88($s0)
    ctx->pc = 0x24096cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 8));
    // 0x240970: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x240970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240974: 0xae090048  sw          $t1, 0x48($s0)
    ctx->pc = 0x240974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 9));
    // 0x240978: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x240978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x24097c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x24097cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x240980: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x240980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x240984: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x240984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x240988: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x240988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x24098c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x24098cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x240990: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x240990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x240994: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x240994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x240998: 0xa6000070  sh          $zero, 0x70($s0)
    ctx->pc = 0x240998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x24099c: 0xa6000072  sh          $zero, 0x72($s0)
    ctx->pc = 0x24099cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x2409a0: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2409a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2409a4: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x2409a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x2409a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2409a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2409ac: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2409ACu;
    SET_GPR_U32(ctx, 31, 0x2409B4u);
    ctx->pc = 0x2409B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409ACu;
    // 0x2409b0: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2409ACu, 0x2409B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409B4u;
label_2409b4:
    // 0x2409b4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2409b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2409b8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2409b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2409bc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2409bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2409c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2409c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2409c4: 0x24420278  addiu       $v0, $v0, 0x278
    ctx->pc = 0x2409c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 632));
    // 0x2409c8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2409c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2409cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2409CCu;
    {
        const bool branch_taken_0x2409cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409CCu;
        // 0x2409d0: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409cc) {
            ctx->pc = 0x2409F0u;
            goto label_2409f0;
        }
    }
    ctx->pc = 0x2409D4u;
    // 0x2409d4: 0x0  nop
    ctx->pc = 0x2409d4u;
    // NOP
    // 0x2409d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2409d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2409dc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2409e0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2409e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2409e4: 0x2484fc24  addiu       $a0, $a0, -0x3DC
    ctx->pc = 0x2409e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966308));
    // 0x2409e8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2409E8u;
    SET_GPR_U32(ctx, 31, 0x2409F0u);
    ctx->pc = 0x2409ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409E8u;
    // 0x2409ec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2409E8u, 0x2409F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409F0u;
label_2409f0:
    // 0x2409f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2409f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2409f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2409f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2409f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2409F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2409FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409F8u;
        // 0x2409fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2409F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240A00u;
}
