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

// Function: sub_002D2228
// Address: 0x2d2228 - 0x2d2308
void sub_002D2228_0x2d2228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2228_0x2d2228");
#endif

    switch (ctx->pc) {
        case 0x2d2278u: goto label_2d2278;
        case 0x2d2288u: goto label_2d2288;
        case 0x2d22c0u: goto label_2d22c0;
        default: break;
    }

    ctx->pc = 0x2d2228u;

    // 0x2d2228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d222c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2d222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d2230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d2230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2234: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2d2234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d2238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d223c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d223cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2240: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d2240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d2244: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x2d2244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2d2248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d2248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d224c: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x2d224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2d2250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2254: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2d2254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x2d2258: 0xae260070  sw          $a2, 0x70($s1)
    ctx->pc = 0x2d2258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 6));
    // 0x2d225c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2d225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2d2260: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x2d2260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x2d2264: 0x8e260084  lw          $a2, 0x84($s1)
    ctx->pc = 0x2d2264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2d2268: 0x24507080  addiu       $s0, $v0, 0x7080
    ctx->pc = 0x2d2268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28800));
    // 0x2d226c: 0x24527088  addiu       $s2, $v0, 0x7088
    ctx->pc = 0x2d226cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28808));
    // 0x2d2270: 0xc0b4836  jal         func_2D20D8
    ctx->pc = 0x2D2270u;
    SET_GPR_U32(ctx, 31, 0x2D2278u);
    ctx->pc = 0x2D2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2270u;
    // 0x2d2274: 0x24537084  addiu       $s3, $v0, 0x7084 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 28804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D20D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D20D8u, 0x2D2270u, 0x2D2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2278u;
label_2d2278:
    // 0x2d2278: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2d2278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d227c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2280: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2d2280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x2d2284: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d2284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d2288:
    // 0x2d2288: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d2288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d228c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d228cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d2290: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2d2290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d2294: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d2298: 0x28a30012  slti        $v1, $a1, 0x12
    ctx->pc = 0x2d2298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2d229c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D229Cu;
    {
        const bool branch_taken_0x2d229c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D229Cu;
        // 0x2d22a0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d229c) {
            ctx->pc = 0x2D2288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2288;
        }
    }
    ctx->pc = 0x2D22A4u;
    // 0x2d22a4: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2d22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d22a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d22a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22ac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2d22acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d22b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d22b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d22b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2d22bc: 0x0  nop
    ctx->pc = 0x2d22bcu;
    // NOP
label_2d22c0:
    // 0x2d22c0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2d22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d22c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d22c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d22c8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2d22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2d22cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d22d0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2d22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2d22d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d22d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d22d8: 0x18a0fff9  blez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D22D8u;
    {
        const bool branch_taken_0x2d22d8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2D22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22D8u;
        // 0x2d22dc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22d8) {
            ctx->pc = 0x2D22C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d22c0;
        }
    }
    ctx->pc = 0x2D22E0u;
    // 0x2d22e0: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2d22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2d22e4: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2d22e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x2d22e8: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x2d22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x2d22ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d22ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d22f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d22f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d22f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d22f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d22f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d22f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d22fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2300: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2300u;
        // 0x2d2304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2308u;
}
