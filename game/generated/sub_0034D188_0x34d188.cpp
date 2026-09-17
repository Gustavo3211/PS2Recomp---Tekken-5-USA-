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

// Function: sub_0034D188
// Address: 0x34d188 - 0x34d24c
void sub_0034D188_0x34d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D188_0x34d188");
#endif

    switch (ctx->pc) {
        case 0x34d1c4u: goto label_34d1c4;
        case 0x34d1fcu: goto label_34d1fc;
        case 0x34d224u: goto label_34d224;
        case 0x34d230u: goto label_34d230;
        default: break;
    }

    ctx->pc = 0x34d188u;

    // 0x34d188: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d18c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34d18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34d190: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34d190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34d194: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34d194u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d198: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34d198u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d19c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x34d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x34d1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d1a4: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d1a8: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x34d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x34d1ac: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34d1b0: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x34d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x34d1b4: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34d1b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d1bc: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34D1BCu;
    SET_GPR_U32(ctx, 31, 0x34D1C4u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34D1BCu, 0x34D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D1C4u;
label_34d1c4:
    // 0x34d1c4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34d1c8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d1cc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D1CCu;
    {
        const bool branch_taken_0x34d1cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34d1cc) {
            ctx->pc = 0x34D1E4u;
            goto label_34d1e4;
        }
    }
    ctx->pc = 0x34D1D4u;
    // 0x34d1d4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d1d8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34d1dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34D1DCu;
    {
        const bool branch_taken_0x34d1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d1dc) {
            ctx->pc = 0x34D234u;
            goto label_34d234;
        }
    }
    ctx->pc = 0x34D1E4u;
label_34d1e4:
    // 0x34d1e4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d1e8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34d1ec: 0x24a5f09c  addiu       $a1, $a1, -0xF64
    ctx->pc = 0x34d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963356));
    // 0x34d1f0: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34d1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d1f4: 0xc0d3493  jal         func_34D24C
    ctx->pc = 0x34D1F4u;
    SET_GPR_U32(ctx, 31, 0x34D1FCu);
    ctx->pc = 0x34D24Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D24Cu, 0x34D1F4u, 0x34D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D1FCu;
label_34d1fc:
    // 0x34d1fc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34d200: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d204: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D204u;
    {
        const bool branch_taken_0x34d204 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d204) {
            ctx->pc = 0x34D218u;
            goto label_34d218;
        }
    }
    ctx->pc = 0x34D20Cu;
    // 0x34d20c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d210: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34D210u;
    {
        const bool branch_taken_0x34d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d210) {
            ctx->pc = 0x34D234u;
            goto label_34d234;
        }
    }
    ctx->pc = 0x34D218u;
label_34d218:
    // 0x34d218: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34d218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d21c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D21Cu;
    SET_GPR_U32(ctx, 31, 0x34D224u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D21Cu, 0x34D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D224u;
label_34d224:
    // 0x34d224: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34d224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d228: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34D228u;
    SET_GPR_U32(ctx, 31, 0x34D230u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34D228u, 0x34D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D230u;
label_34d230:
    // 0x34d230: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34d234:
    // 0x34d234: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d234u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d238: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34d238u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d23c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34d23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34d240: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34d244: 0x3e00008  jr          $ra
    ctx->pc = 0x34D244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D24Cu;
}
