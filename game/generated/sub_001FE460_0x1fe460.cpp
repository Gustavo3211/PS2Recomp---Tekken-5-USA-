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

// Function: sub_001FE460
// Address: 0x1fe460 - 0x1fe508
void sub_001FE460_0x1fe460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE460_0x1fe460");
#endif

    switch (ctx->pc) {
        case 0x1fe4dcu: goto label_1fe4dc;
        default: break;
    }

    ctx->pc = 0x1fe460u;

    // 0x1fe460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fe468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fe46c: 0x84a202ba  lh          $v0, 0x2BA($a1)
    ctx->pc = 0x1fe46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 698)));
    // 0x1fe470: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FE470u;
    {
        const bool branch_taken_0x1fe470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE470u;
        // 0x1fe474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe470) {
            ctx->pc = 0x1FE4F0u;
            goto label_1fe4f0;
        }
    }
    ctx->pc = 0x1FE478u;
    // 0x1fe478: 0x92020196  lbu         $v0, 0x196($s0)
    ctx->pc = 0x1fe478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
    // 0x1fe47c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FE47Cu;
    {
        const bool branch_taken_0x1fe47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE47Cu;
        // 0x1fe480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe47c) {
            ctx->pc = 0x1FE4F4u;
            goto label_1fe4f4;
        }
    }
    ctx->pc = 0x1FE484u;
    // 0x1fe484: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fe484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fe488: 0x96040096  lhu         $a0, 0x96($s0)
    ctx->pc = 0x1fe488u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1fe48c: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x1fe48cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1fe490: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fe494: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fe498: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE498u;
    {
        const bool branch_taken_0x1fe498 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0xa60202b2  sh          $v0, 0x2B2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 690), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe498) {
            ctx->pc = 0x1FE4A8u;
            goto label_1fe4a8;
        }
    }
    ctx->pc = 0x1FE4A0u;
    // 0x1fe4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe4a4: 0xa60202b2  sh          $v0, 0x2B2($s0)
    ctx->pc = 0x1fe4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 690), (uint16_t)GPR_U32(ctx, 2));
label_1fe4a8:
    // 0x1fe4a8: 0x9603007a  lhu         $v1, 0x7A($s0)
    ctx->pc = 0x1fe4a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x1fe4ac: 0x240509f4  addiu       $a1, $zero, 0x9F4
    ctx->pc = 0x1fe4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2548));
    // 0x1fe4b0: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x1fe4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1fe4b4: 0x860402b2  lh          $a0, 0x2B2($s0)
    ctx->pc = 0x1fe4b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 690)));
    // 0x1fe4b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe4bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1fe4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fe4c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1fe4c4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1fe4c4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fe4c8: 0x1012  mflo        $v0
    ctx->pc = 0x1fe4c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fe4cc: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1fe4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fe4d0: 0xa60202b4  sh          $v0, 0x2B4($s0)
    ctx->pc = 0x1fe4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 692), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe4d4: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FE4D4u;
    SET_GPR_U32(ctx, 31, 0x1FE4DCu);
    ctx->pc = 0x1FE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4D4u;
    // 0x1fe4d8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FE4D4u, 0x1FE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4DCu;
label_1fe4dc:
    // 0x1fe4dc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1fe4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1fe4e0: 0xa60202b4  sh          $v0, 0x2B4($s0)
    ctx->pc = 0x1fe4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 692), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe4e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE4E8u;
    {
        const bool branch_taken_0x1fe4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4E8u;
        // 0x1fe4ec: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4e8) {
            ctx->pc = 0x1FE4F4u;
            goto label_1fe4f4;
        }
    }
    ctx->pc = 0x1FE4F0u;
label_1fe4f0:
    // 0x1fe4f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4f4:
    // 0x1fe4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe4f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fe4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4FCu;
        // 0x1fe500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE504u;
    // 0x1fe504: 0x0  nop
    ctx->pc = 0x1fe504u;
    // NOP
    ctx->pc = 0x1fe508u;
}
