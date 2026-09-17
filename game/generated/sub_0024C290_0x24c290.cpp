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

// Function: sub_0024C290
// Address: 0x24c290 - 0x24c310
void sub_0024C290_0x24c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C290_0x24c290");
#endif

    switch (ctx->pc) {
        case 0x24c2f8u: goto label_24c2f8;
        default: break;
    }

    ctx->pc = 0x24c290u;

    // 0x24c290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c294: 0x513c3  sra         $v0, $a1, 15
    ctx->pc = 0x24c294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 15));
    // 0x24c298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c29c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c2a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c2a4: 0x52b43  sra         $a1, $a1, 13
    ctx->pc = 0x24c2a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 13));
    // 0x24c2a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24c2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24c2ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c2b0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x24c2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x24c2b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24c2b8: 0x8e30003c  lw          $s0, 0x3C($s1)
    ctx->pc = 0x24c2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x24c2bc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x24c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24c2c0: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x24c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24c2c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24c2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c2c8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24C2C8u;
    {
        const bool branch_taken_0x24c2c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2C8u;
        // 0x24c2cc: 0x2c620009  sltiu       $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2c8) {
            ctx->pc = 0x24C2D4u;
            goto label_24c2d4;
        }
    }
    ctx->pc = 0x24C2D0u;
    // 0x24c2d0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x24c2d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_24c2d4:
    // 0x24c2d4: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x24c2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x24c2d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x24c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24c2dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c2e0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x24c2e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x24c2e4: 0xb0800a  movz        $s0, $a1, $s0
    ctx->pc = 0x24c2e4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x24c2e8: 0x50d00004  beql        $a2, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C2E8u;
    {
        const bool branch_taken_0x24c2e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        if (branch_taken_0x24c2e8) {
            ctx->pc = 0x24C2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C2E8u;
            // 0x24c2ec: 0xae30003c  sw          $s0, 0x3C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C2FCu;
            goto label_24c2fc;
        }
    }
    ctx->pc = 0x24C2F0u;
    // 0x24c2f0: 0xc092940  jal         func_24A500
    ctx->pc = 0x24C2F0u;
    SET_GPR_U32(ctx, 31, 0x24C2F8u);
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24C2F0u, 0x24C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2F8u;
label_24c2f8:
    // 0x24c2f8: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x24c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
label_24c2fc:
    // 0x24c2fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c308: 0x3e00008  jr          $ra
    ctx->pc = 0x24C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C308u;
        // 0x24c30c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C310u;
}
