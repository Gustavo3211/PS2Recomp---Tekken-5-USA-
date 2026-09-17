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

// Function: sub_002196A0
// Address: 0x2196a0 - 0x219740
void sub_002196A0_0x2196a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002196A0_0x2196a0");
#endif

    switch (ctx->pc) {
        case 0x2196c4u: goto label_2196c4;
        case 0x219700u: goto label_219700;
        case 0x219708u: goto label_219708;
        case 0x219720u: goto label_219720;
        default: break;
    }

    ctx->pc = 0x2196a0u;

label_2196a0:
    // 0x2196a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2196a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2196a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2196a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2196a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2196a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2196acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2196b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2196b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2196b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2196b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2196b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2196bc: 0xc086386  jal         func_218E18
    ctx->pc = 0x2196BCu;
    SET_GPR_U32(ctx, 31, 0x2196C4u);
    ctx->pc = 0x2196C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196BCu;
    // 0x2196c0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E18u, 0x2196BCu, 0x2196C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196C4u;
label_2196c4:
    // 0x2196c4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2196c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2196c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2196c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196cc: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2196CCu;
    {
        const bool branch_taken_0x2196cc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2196D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196CCu;
        // 0x2196d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196cc) {
            ctx->pc = 0x2196F0u;
            goto label_2196f0;
        }
    }
    ctx->pc = 0x2196D4u;
    // 0x2196d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2196d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2196d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2196d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2196dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2196dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2196e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2196e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2196e4: 0x8086396  j           func_218E58
    ctx->pc = 0x2196E4u;
    ctx->pc = 0x2196E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196E4u;
    // 0x2196e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    sub_00218E58_0x218e58(rdram, ctx, runtime); return;
    ctx->pc = 0x2196ECu;
    // 0x2196ec: 0x0  nop
    ctx->pc = 0x2196ecu;
    // NOP
label_2196f0:
    // 0x2196f0: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x2196f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2196f4: 0x8810  mfhi        $s1
    ctx->pc = 0x2196f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x2196f8: 0xc086396  jal         func_218E58
    ctx->pc = 0x2196F8u;
    SET_GPR_U32(ctx, 31, 0x219700u);
    ctx->pc = 0x2196FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196F8u;
    // 0x2196fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x2196F8u, 0x219700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219700u;
label_219700:
    // 0x219700: 0xc0862ee  jal         func_218BB8
    ctx->pc = 0x219700u;
    SET_GPR_U32(ctx, 31, 0x219708u);
    ctx->pc = 0x219704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219700u;
    // 0x219704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB8u, 0x219700u, 0x219708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219708u;
label_219708:
    // 0x219708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21970c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21970cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219710: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219710u;
    {
        const bool branch_taken_0x219710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219710u;
        // 0x219714: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219710) {
            ctx->pc = 0x219724u;
            goto label_219724;
        }
    }
    ctx->pc = 0x219718u;
    // 0x219718: 0xc0865a8  jal         func_2196A0
    ctx->pc = 0x219718u;
    SET_GPR_U32(ctx, 31, 0x219720u);
    ctx->pc = 0x2196A0u;
    goto label_2196a0;
    ctx->pc = 0x219720u;
label_219720:
    // 0x219720: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x219720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219724:
    // 0x219724: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x219724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21972c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21972cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219734: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219738: 0x3e00008  jr          $ra
    ctx->pc = 0x219738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219738u;
        // 0x21973c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219740u;
}
