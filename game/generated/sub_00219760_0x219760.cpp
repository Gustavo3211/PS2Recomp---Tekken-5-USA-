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

// Function: sub_00219760
// Address: 0x219760 - 0x2197f8
void sub_00219760_0x219760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219760_0x219760");
#endif

    switch (ctx->pc) {
        case 0x219774u: goto label_219774;
        default: break;
    }

    ctx->pc = 0x219760u;

    // 0x219760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219768: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21976c: 0xc08661c  jal         func_219870
    ctx->pc = 0x21976Cu;
    SET_GPR_U32(ctx, 31, 0x219774u);
    ctx->pc = 0x219770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21976Cu;
    // 0x219770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x21976Cu, 0x219774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219774u;
label_219774:
    // 0x219774: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x219774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x219778: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x219778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x21977c: 0x2463f484  addiu       $v1, $v1, -0xB7C
    ctx->pc = 0x21977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964356));
    // 0x219780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219784: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x219784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x219788: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x219788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21978c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x21978cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x219790: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x219790u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x219794: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x219794u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219798: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x219798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21979c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21979Cu;
    {
        const bool branch_taken_0x21979c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21979Cu;
        // 0x2197a0: 0x453021  addu        $a2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21979c) {
            ctx->pc = 0x2197B8u;
            goto label_2197b8;
        }
    }
    ctx->pc = 0x2197A4u;
    // 0x2197a4: 0x8ce201a0  lw          $v0, 0x1A0($a3)
    ctx->pc = 0x2197a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x2197a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2197a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2197ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2197ACu;
    {
        const bool branch_taken_0x2197ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197ACu;
        // 0x2197b0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197ac) {
            ctx->pc = 0x2197E4u;
            goto label_2197e4;
        }
    }
    ctx->pc = 0x2197B4u;
    // 0x2197b4: 0x0  nop
    ctx->pc = 0x2197b4u;
    // NOP
label_2197b8:
    // 0x2197b8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2197B8u;
    {
        const bool branch_taken_0x2197b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2197BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197B8u;
        // 0x2197bc: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197b8) {
            ctx->pc = 0x2197D0u;
            goto label_2197d0;
        }
    }
    ctx->pc = 0x2197C0u;
    // 0x2197c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2197c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2197c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2197C4u;
    {
        const bool branch_taken_0x2197c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197C4u;
        // 0x2197c8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197c4) {
            ctx->pc = 0x2197E4u;
            goto label_2197e4;
        }
    }
    ctx->pc = 0x2197CCu;
    // 0x2197cc: 0x0  nop
    ctx->pc = 0x2197ccu;
    // NOP
label_2197d0:
    // 0x2197d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2197d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2197d4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2197d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2197d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2197d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2197dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2197dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2197e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2197e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2197e4:
    // 0x2197e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2197e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2197e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2197e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2197ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2197ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2197F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197ECu;
        // 0x2197f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2197ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2197F4u;
    // 0x2197f4: 0x0  nop
    ctx->pc = 0x2197f4u;
    // NOP
    ctx->pc = 0x2197f8u;
}
