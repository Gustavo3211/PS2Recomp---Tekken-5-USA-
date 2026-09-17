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

// Function: sub_00340058
// Address: 0x340058 - 0x3400a8
void sub_00340058_0x340058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340058_0x340058");
#endif

    switch (ctx->pc) {
        case 0x340088u: goto label_340088;
        default: break;
    }

    ctx->pc = 0x340058u;

    // 0x340058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34005c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340060: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x340060u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x340064: 0x26100d00  addiu       $s0, $s0, 0xD00
    ctx->pc = 0x340064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
    // 0x340068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34006c: 0x26100068  addiu       $s0, $s0, 0x68
    ctx->pc = 0x34006cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x340070: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x340070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x340074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340078: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x340078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34007c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34007cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340080: 0xc0c8916  jal         func_322458
    ctx->pc = 0x340080u;
    SET_GPR_U32(ctx, 31, 0x340088u);
    ctx->pc = 0x340084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340080u;
    // 0x340084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322458u, 0x340080u, 0x340088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340088u;
label_340088:
    // 0x340088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34008c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34008cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340090: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x340098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34009c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34009cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3400a0: 0x80c8946  j           func_322518
    ctx->pc = 0x3400A0u;
    ctx->pc = 0x3400A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3400A0u;
    // 0x3400a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322518u;
    sub_00322518_0x322518(rdram, ctx, runtime); return;
    ctx->pc = 0x3400A8u;
}
