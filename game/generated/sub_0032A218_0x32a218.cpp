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

// Function: sub_0032A218
// Address: 0x32a218 - 0x32a2f0
void sub_0032A218_0x32a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A218_0x32a218");
#endif

    ctx->pc = 0x32a218u;

    // 0x32a218: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x32a218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32a21c: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x32a21cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x32a220: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32a224: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32A224u;
    {
        const bool branch_taken_0x32a224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A224u;
        // 0x32a228: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a224) {
            ctx->pc = 0x32A248u;
            goto label_32a248;
        }
    }
    ctx->pc = 0x32A22Cu;
    // 0x32a22c: 0xe44e0020  swc1        $f14, 0x20($v0)
    ctx->pc = 0x32a22cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x32a230: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x32a230u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32a234: 0xe44d0010  swc1        $f13, 0x10($v0)
    ctx->pc = 0x32a234u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x32a238: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x32a238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32a23c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x32a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x32a240: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x32a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x32a244: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x32a244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_32a248:
    // 0x32a248: 0x3e00008  jr          $ra
    ctx->pc = 0x32A248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A250u;
    // 0x32a250: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x32a250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x32a254: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x32a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32a258: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32a25c: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x32a25cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x32a260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32a260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32a264: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x32a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x32a268: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x32a268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32a26c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a270: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32A270u;
    {
        const bool branch_taken_0x32a270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A270u;
        // 0x32a274: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a270) {
            ctx->pc = 0x32A294u;
            goto label_32a294;
        }
    }
    ctx->pc = 0x32A278u;
    // 0x32a278: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x32a278u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32a27c: 0xe44d0000  swc1        $f13, 0x0($v0)
    ctx->pc = 0x32a27cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32a280: 0xe4ce0008  swc1        $f14, 0x8($a2)
    ctx->pc = 0x32a280u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x32a284: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32a288: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x32a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x32a28c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x32a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x32a290: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x32a290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_32a294:
    // 0x32a294: 0x3e00008  jr          $ra
    ctx->pc = 0x32A294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A29Cu;
    // 0x32a29c: 0x0  nop
    ctx->pc = 0x32a29cu;
    // NOP
    // 0x32a2a0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x32a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x32a2a4: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x32a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32a2a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32a2ac: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x32a2acu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x32a2b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32a2b4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x32a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x32a2b8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x32a2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32a2bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a2c0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32A2C0u;
    {
        const bool branch_taken_0x32a2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2C0u;
        // 0x32a2c4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2c0) {
            ctx->pc = 0x32A2E4u;
            goto label_32a2e4;
        }
    }
    ctx->pc = 0x32A2C8u;
    // 0x32a2c8: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x32a2c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32a2cc: 0xe44d0000  swc1        $f13, 0x0($v0)
    ctx->pc = 0x32a2ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32a2d0: 0xe4ce0008  swc1        $f14, 0x8($a2)
    ctx->pc = 0x32a2d0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x32a2d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32a2d8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x32a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x32a2dc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x32a2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x32a2e0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x32a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_32a2e4:
    // 0x32a2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x32A2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A2ECu;
    // 0x32a2ec: 0x0  nop
    ctx->pc = 0x32a2ecu;
    // NOP
    ctx->pc = 0x32a2f0u;
}
