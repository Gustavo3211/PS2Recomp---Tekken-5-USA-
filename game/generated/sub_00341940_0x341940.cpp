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

// Function: sub_00341940
// Address: 0x341940 - 0x3419d0
void sub_00341940_0x341940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341940_0x341940");
#endif

    switch (ctx->pc) {
        case 0x3419a0u: goto label_3419a0;
        case 0x3419b0u: goto label_3419b0;
        case 0x3419c0u: goto label_3419c0;
        default: break;
    }

    ctx->pc = 0x341940u;

    // 0x341940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341948: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x341948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x34194c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x34194Cu;
    {
        const bool branch_taken_0x34194c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34194Cu;
        // 0x341950: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34194c) {
            ctx->pc = 0x3419C0u;
            goto label_3419c0;
        }
    }
    ctx->pc = 0x341954u;
    // 0x341954: 0x90a6001c  lbu         $a2, 0x1C($a1)
    ctx->pc = 0x341954u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x341958: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34195c: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34195Cu;
    {
        const bool branch_taken_0x34195c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x341960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34195Cu;
        // 0x341960: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34195c) {
            ctx->pc = 0x3419A8u;
            goto label_3419a8;
        }
    }
    ctx->pc = 0x341964u;
    // 0x341964: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x341964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x341968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x341968u;
    {
        const bool branch_taken_0x341968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341968u;
        // 0x34196c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341968) {
            ctx->pc = 0x341988u;
            goto label_341988;
        }
    }
    ctx->pc = 0x341970u;
    // 0x341970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341974: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341974u;
    {
        const bool branch_taken_0x341974 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x341978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341974u;
        // 0x341978: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341974) {
            ctx->pc = 0x341998u;
            goto label_341998;
        }
    }
    ctx->pc = 0x34197Cu;
    // 0x34197c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x34197Cu;
    {
        const bool branch_taken_0x34197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34197c) {
            ctx->pc = 0x3419C4u;
            goto label_3419c4;
        }
    }
    ctx->pc = 0x341984u;
    // 0x341984: 0x0  nop
    ctx->pc = 0x341984u;
    // NOP
label_341988:
    // 0x341988: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x341988u;
    {
        const bool branch_taken_0x341988 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x34198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341988u;
        // 0x34198c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341988) {
            ctx->pc = 0x3419B8u;
            goto label_3419b8;
        }
    }
    ctx->pc = 0x341990u;
    // 0x341990: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x341990u;
    {
        const bool branch_taken_0x341990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341990) {
            ctx->pc = 0x3419C4u;
            goto label_3419c4;
        }
    }
    ctx->pc = 0x341998u;
label_341998:
    // 0x341998: 0xc0d1c10  jal         func_347040
    ctx->pc = 0x341998u;
    SET_GPR_U32(ctx, 31, 0x3419A0u);
    ctx->pc = 0x34199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341998u;
    // 0x34199c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347040u, 0x341998u, 0x3419A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3419A0u;
label_3419a0:
    // 0x3419a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3419A0u;
    {
        const bool branch_taken_0x3419a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3419A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419A0u;
        // 0x3419a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419a0) {
            ctx->pc = 0x3419C4u;
            goto label_3419c4;
        }
    }
    ctx->pc = 0x3419A8u;
label_3419a8:
    // 0x3419a8: 0xc0d1c88  jal         func_347220
    ctx->pc = 0x3419A8u;
    SET_GPR_U32(ctx, 31, 0x3419B0u);
    ctx->pc = 0x3419ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3419A8u;
    // 0x3419ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347220u, 0x3419A8u, 0x3419B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3419B0u;
label_3419b0:
    // 0x3419b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3419B0u;
    {
        const bool branch_taken_0x3419b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3419B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419B0u;
        // 0x3419b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419b0) {
            ctx->pc = 0x3419C4u;
            goto label_3419c4;
        }
    }
    ctx->pc = 0x3419B8u;
label_3419b8:
    // 0x3419b8: 0xc0d1cba  jal         func_3472E8
    ctx->pc = 0x3419B8u;
    SET_GPR_U32(ctx, 31, 0x3419C0u);
    ctx->pc = 0x3419BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3419B8u;
    // 0x3419bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3472E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3472E8u, 0x3419B8u, 0x3419C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3419C0u;
label_3419c0:
    // 0x3419c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3419c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3419c4:
    // 0x3419c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3419C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3419C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419C4u;
        // 0x3419c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3419C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3419CCu;
    // 0x3419cc: 0x0  nop
    ctx->pc = 0x3419ccu;
    // NOP
    ctx->pc = 0x3419d0u;
}
