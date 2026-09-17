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

// Function: sub_00509460
// Address: 0x509460 - 0x509548
void sub_00509460_0x509460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509460_0x509460");
#endif

    switch (ctx->pc) {
        case 0x5094d4u: goto label_5094d4;
        case 0x5094dcu: goto label_5094dc;
        case 0x509510u: goto label_509510;
        default: break;
    }

    ctx->pc = 0x509460u;

    // 0x509460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x509460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x509464: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x509464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x509468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50946c: 0x2450f080  addiu       $s0, $v0, -0xF80
    ctx->pc = 0x50946cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x509470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x509470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x509474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x509474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x509478: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x509478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50947c: 0x3c041fff  lui         $a0, 0x1FFF
    ctx->pc = 0x50947cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8191 << 16));
    // 0x509480: 0x96024e38  lhu         $v0, 0x4E38($s0)
    ctx->pc = 0x509480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x903EB8u));
    // 0x509484: 0x34841fff  ori         $a0, $a0, 0x1FFF
    ctx->pc = 0x509484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8191);
    // 0x509488: 0x86034e3a  lh          $v1, 0x4E3A($s0)
    ctx->pc = 0x509488u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x903EBAu));
    // 0x50948c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50948cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x509490: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x509490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x509494: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x509494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x509498: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x509498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50949c: 0x14440014  bne         $v0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x50949Cu;
    {
        const bool branch_taken_0x50949c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x5094A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50949Cu;
        // 0x5094a0: 0x26114dfc  addiu       $s1, $s0, 0x4DFC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 19964));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50949c) {
            ctx->pc = 0x5094F0u;
            goto label_5094f0;
        }
    }
    ctx->pc = 0x5094A4u;
    // 0x5094a4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x5094a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5094a8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x5094A8u;
    {
        const bool branch_taken_0x5094a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5094a8) {
            ctx->pc = 0x509508u;
            goto label_509508;
        }
    }
    ctx->pc = 0x5094B0u;
    // 0x5094b0: 0x96024ccc  lhu         $v0, 0x4CCC($s0)
    ctx->pc = 0x5094b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 19660)));
    // 0x5094b4: 0x2c421800  sltiu       $v0, $v0, 0x1800
    ctx->pc = 0x5094b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6144) ? 1 : 0);
    // 0x5094b8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x5094B8u;
    {
        const bool branch_taken_0x5094b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5094b8) {
            ctx->pc = 0x5094BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5094B8u;
            // 0x5094bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5094F4u;
            goto label_5094f4;
        }
    }
    ctx->pc = 0x5094C0u;
    // 0x5094c0: 0x8e024e00  lw          $v0, 0x4E00($s0)
    ctx->pc = 0x5094c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19968)));
    // 0x5094c4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x5094C4u;
    {
        const bool branch_taken_0x5094c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5094c4) {
            ctx->pc = 0x5094C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5094C4u;
            // 0x5094c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509534u;
            goto label_509534;
        }
    }
    ctx->pc = 0x5094CCu;
    // 0x5094cc: 0xc144432  jal         func_5110C8
    ctx->pc = 0x5094CCu;
    SET_GPR_U32(ctx, 31, 0x5094D4u);
    ctx->pc = 0x5094D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5094CCu;
    // 0x5094d0: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110C8u, 0x5094CCu, 0x5094D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5094D4u;
label_5094d4:
    // 0x5094d4: 0xc1424f6  jal         func_5093D8
    ctx->pc = 0x5094D4u;
    SET_GPR_U32(ctx, 31, 0x5094DCu);
    ctx->pc = 0x5093D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5093D8u, 0x5094D4u, 0x5094DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5094DCu;
label_5094dc:
    // 0x5094dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5094dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5094e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5094e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5094e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5094e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5094e8: 0x8144be0  j           func_512F80
    ctx->pc = 0x5094E8u;
    ctx->pc = 0x5094ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5094E8u;
    // 0x5094ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512F80u, 0x5094E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5094F0u;
label_5094f0:
    // 0x5094f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5094f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5094f4:
    // 0x5094f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5094f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5094f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5094f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5094fc: 0x8142506  j           func_509418
    ctx->pc = 0x5094FCu;
    ctx->pc = 0x509500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5094FCu;
    // 0x509500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509418u;
    sub_00509418_0x509418(rdram, ctx, runtime); return;
    ctx->pc = 0x509504u;
    // 0x509504: 0x0  nop
    ctx->pc = 0x509504u;
    // NOP
label_509508:
    // 0x509508: 0xc142506  jal         func_509418
    ctx->pc = 0x509508u;
    SET_GPR_U32(ctx, 31, 0x509510u);
    ctx->pc = 0x509418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509418u, 0x509508u, 0x509510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509510u;
label_509510:
    // 0x509510: 0x96024ccc  lhu         $v0, 0x4CCC($s0)
    ctx->pc = 0x509510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 19660)));
    // 0x509514: 0x2c421800  sltiu       $v0, $v0, 0x1800
    ctx->pc = 0x509514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6144) ? 1 : 0);
    // 0x509518: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x509518u;
    {
        const bool branch_taken_0x509518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509518u;
        // 0x50951c: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509518) {
            ctx->pc = 0x509528u;
            goto label_509528;
        }
    }
    ctx->pc = 0x509520u;
    // 0x509520: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x509520u;
    {
        const bool branch_taken_0x509520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509520u;
        // 0x509524: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x509520) {
            ctx->pc = 0x50952Cu;
            goto label_50952c;
        }
    }
    ctx->pc = 0x509528u;
label_509528:
    // 0x509528: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x509528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_50952c:
    // 0x50952c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x50952cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x509530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_509534:
    // 0x509534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x509534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x509538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x509538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50953c: 0x3e00008  jr          $ra
    ctx->pc = 0x50953Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50953Cu;
        // 0x509540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50953Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509544u;
    // 0x509544: 0x0  nop
    ctx->pc = 0x509544u;
    // NOP
    ctx->pc = 0x509548u;
}
