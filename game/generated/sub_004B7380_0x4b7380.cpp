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

// Function: sub_004B7380
// Address: 0x4b7380 - 0x4b7408
void sub_004B7380_0x4b7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7380_0x4b7380");
#endif

    switch (ctx->pc) {
        case 0x4b73acu: goto label_4b73ac;
        case 0x4b73ecu: goto label_4b73ec;
        default: break;
    }

    ctx->pc = 0x4b7380u;

    // 0x4b7380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b7384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b7388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b738c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b7390: 0x261101be  addiu       $s1, $s0, 0x1BE
    ctx->pc = 0x4b7390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 446));
    // 0x4b7394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b7394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b7398: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b7398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b739c: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B739Cu;
    {
        const bool branch_taken_0x4b739c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b739c) {
            ctx->pc = 0x4B73A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B739Cu;
            // 0x4b73a0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B73BCu;
            goto label_4b73bc;
        }
    }
    ctx->pc = 0x4B73A4u;
    // 0x4b73a4: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B73A4u;
    SET_GPR_U32(ctx, 31, 0x4B73ACu);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B73A4u, 0x4B73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B73ACu;
label_4b73ac:
    // 0x4b73ac: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4b73acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4b73b0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4B73B0u;
    {
        const bool branch_taken_0x4b73b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B73B0u;
        // 0x4b73b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b73b0) {
            ctx->pc = 0x4B73F0u;
            goto label_4b73f0;
        }
    }
    ctx->pc = 0x4B73B8u;
    // 0x4b73b8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x4b73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_4b73bc:
    // 0x4b73bc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4b73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4b73c0: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x4b73c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b73c4: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x4b73c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4b73c8: 0x260501b4  addiu       $a1, $s0, 0x1B4
    ctx->pc = 0x4b73c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4b73cc: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x4b73ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4b73d0: 0x9483232e  lhu         $v1, 0x232E($a0)
    ctx->pc = 0x4b73d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F9AEu));
    // 0x4b73d4: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4b73d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b73d8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b73d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b73dc: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4b73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4b73e0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4b73e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b73e4: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B73E4u;
    SET_GPR_U32(ctx, 31, 0x4B73ECu);
    ctx->pc = 0x4B73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B73E4u;
    // 0x4b73e8: 0xa48623c4  sh          $a2, 0x23C4($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 9156), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B73E4u, 0x4B73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B73ECu;
label_4b73ec:
    // 0x4b73ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b73ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b73f0:
    // 0x4b73f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b73f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b73f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b73f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b73f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b73f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b73fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B73FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B73FCu;
        // 0x4b7400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B73FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7404u;
    // 0x4b7404: 0x0  nop
    ctx->pc = 0x4b7404u;
    // NOP
    ctx->pc = 0x4b7408u;
}
