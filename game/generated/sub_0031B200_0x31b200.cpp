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

// Function: sub_0031B200
// Address: 0x31b200 - 0x31b2d0
void sub_0031B200_0x31b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B200_0x31b200");
#endif

    switch (ctx->pc) {
        case 0x31b268u: goto label_31b268;
        case 0x31b2a4u: goto label_31b2a4;
        case 0x31b2b4u: goto label_31b2b4;
        default: break;
    }

    ctx->pc = 0x31b200u;

    // 0x31b200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b204: 0x2ca60001  sltiu       $a2, $a1, 0x1
    ctx->pc = 0x31b204u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31b208: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31b208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31b20c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b210: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31b210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31b214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b218: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31b218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31b21c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x31b220: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x31b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b224: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31b224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31b228: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x31b228u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x31b22c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x31b230: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31B230u;
    {
        const bool branch_taken_0x31b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B230u;
        // 0x31b234: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b230) {
            ctx->pc = 0x31B278u;
            goto label_31b278;
        }
    }
    ctx->pc = 0x31B238u;
    // 0x31b238: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x31b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x31b23c: 0x392c0  sll         $s2, $v1, 11
    ctx->pc = 0x31b23cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x31b240: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x31b240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x31b244: 0x24637880  addiu       $v1, $v1, 0x7880
    ctx->pc = 0x31b244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30848));
    // 0x31b248: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31b248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31b24c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x31b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x31b250: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31b250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31b254: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x31b254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x31b258: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31b25c: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31b25cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x31b260: 0xc0c7258  jal         func_31C960
    ctx->pc = 0x31B260u;
    SET_GPR_U32(ctx, 31, 0x31B268u);
    ctx->pc = 0x31B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B260u;
    // 0x31b264: 0xdc460028  ld          $a2, 0x28($v0) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C960u, 0x31B260u, 0x31B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B268u;
label_31b268:
    // 0x31b268: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x31b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x31b26c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31b26cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31b270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31B270u;
    {
        const bool branch_taken_0x31b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B270u;
        // 0x31b274: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b270) {
            ctx->pc = 0x31B280u;
            goto label_31b280;
        }
    }
    ctx->pc = 0x31B278u;
label_31b278:
    // 0x31b278: 0x392c0  sll         $s2, $v1, 11
    ctx->pc = 0x31b278u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x31b27c: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x31b27cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
label_31b280:
    // 0x31b280: 0x26107880  addiu       $s0, $s0, 0x7880
    ctx->pc = 0x31b280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30848));
    // 0x31b284: 0x8e280048  lw          $t0, 0x48($s1)
    ctx->pc = 0x31b284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x31b288: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x31b288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x31b28c: 0x8e270044  lw          $a3, 0x44($s1)
    ctx->pc = 0x31b28cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x31b290: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x31b290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x31b294: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x31b294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x31b298: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b29c: 0xc0c7252  jal         func_31C948
    ctx->pc = 0x31B29Cu;
    SET_GPR_U32(ctx, 31, 0x31B2A4u);
    ctx->pc = 0x31B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B29Cu;
    // 0x31b2a0: 0x2052825  or          $a1, $s0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C948u, 0x31B29Cu, 0x31B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2A4u;
label_31b2a4:
    // 0x31b2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2ac: 0xc0cd088  jal         func_334220
    ctx->pc = 0x31B2ACu;
    SET_GPR_U32(ctx, 31, 0x31B2B4u);
    ctx->pc = 0x31B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2ACu;
    // 0x31b2b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334220u, 0x31B2ACu, 0x31B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2B4u;
label_31b2b4:
    // 0x31b2b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31b2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b2b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31b2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31b2bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31b2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b2c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31b2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x31B2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2C4u;
        // 0x31b2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B2CCu;
    // 0x31b2cc: 0x0  nop
    ctx->pc = 0x31b2ccu;
    // NOP
    ctx->pc = 0x31b2d0u;
}
