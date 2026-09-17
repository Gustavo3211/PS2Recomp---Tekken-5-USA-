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

// Function: sub_0026C180
// Address: 0x26c180 - 0x26c218
void sub_0026C180_0x26c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C180_0x26c180");
#endif

    switch (ctx->pc) {
        case 0x26c1e8u: goto label_26c1e8;
        case 0x26c1f8u: goto label_26c1f8;
        default: break;
    }

    ctx->pc = 0x26c180u;

    // 0x26c180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c18c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c194: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x26c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c198: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26c198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26c19c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26C19Cu;
    {
        const bool branch_taken_0x26c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C19Cu;
        // 0x26c1a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c19c) {
            ctx->pc = 0x26C1FCu;
            goto label_26c1fc;
        }
    }
    ctx->pc = 0x26C1A4u;
    // 0x26c1a4: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x26c1a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26c1a8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26C1A8u;
    {
        const bool branch_taken_0x26c1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1A8u;
        // 0x26c1ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1a8) {
            ctx->pc = 0x26C200u;
            goto label_26c200;
        }
    }
    ctx->pc = 0x26C1B0u;
    // 0x26c1b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x26c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26c1b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26c1b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c1bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C1BCu;
    {
        const bool branch_taken_0x26c1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1BCu;
        // 0x26c1c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1bc) {
            ctx->pc = 0x26C200u;
            goto label_26c200;
        }
    }
    ctx->pc = 0x26C1C4u;
    // 0x26c1c4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26c1c8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c1cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c1d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26C1D0u;
    {
        const bool branch_taken_0x26c1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1D0u;
        // 0x26c1d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1d0) {
            ctx->pc = 0x26C200u;
            goto label_26c200;
        }
    }
    ctx->pc = 0x26C1D8u;
    // 0x26c1d8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26c1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c1e0: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26C1E0u;
    SET_GPR_U32(ctx, 31, 0x26C1E8u);
    ctx->pc = 0x26C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1E0u;
    // 0x26c1e4: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26C1E0u, 0x26C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1E8u;
label_26c1e8:
    // 0x26c1e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C1E8u;
    {
        const bool branch_taken_0x26c1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1E8u;
        // 0x26c1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1e8) {
            ctx->pc = 0x26C1FCu;
            goto label_26c1fc;
        }
    }
    ctx->pc = 0x26C1F0u;
    // 0x26c1f0: 0xc09ae76  jal         func_26B9D8
    ctx->pc = 0x26C1F0u;
    SET_GPR_U32(ctx, 31, 0x26C1F8u);
    ctx->pc = 0x26C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1F0u;
    // 0x26c1f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B9D8u, 0x26C1F0u, 0x26C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1F8u;
label_26c1f8:
    // 0x26c1f8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x26c1f8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c1fc:
    // 0x26c1fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26c1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c200:
    // 0x26c200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c20c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C20Cu;
        // 0x26c210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C214u;
    // 0x26c214: 0x0  nop
    ctx->pc = 0x26c214u;
    // NOP
    ctx->pc = 0x26c218u;
}
