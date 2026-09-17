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

// Function: sub_00219190
// Address: 0x219190 - 0x219250
void sub_00219190_0x219190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219190_0x219190");
#endif

    switch (ctx->pc) {
        case 0x2191c0u: goto label_2191c0;
        case 0x2191c8u: goto label_2191c8;
        case 0x2191e0u: goto label_2191e0;
        case 0x2191f4u: goto label_2191f4;
        case 0x21920cu: goto label_21920c;
        case 0x219220u: goto label_219220;
        default: break;
    }

    ctx->pc = 0x219190u;

    // 0x219190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219194: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x219194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x219198: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x219198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21919c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2191a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2191a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2191a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2191a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2191a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2191a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2191acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2191b0: 0x24525980  addiu       $s2, $v0, 0x5980
    ctx->pc = 0x2191b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 22912));
    // 0x2191b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2191b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2191b8: 0x247388d0  addiu       $s3, $v1, -0x7730
    ctx->pc = 0x2191b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2191bc: 0x0  nop
    ctx->pc = 0x2191bcu;
    // NOP
label_2191c0:
    // 0x2191c0: 0xc09d940  jal         func_276500
    ctx->pc = 0x2191C0u;
    SET_GPR_U32(ctx, 31, 0x2191C8u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x2191C0u, 0x2191C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191C8u;
label_2191c8:
    // 0x2191c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2191c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2191CCu;
    {
        const bool branch_taken_0x2191cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191CCu;
        // 0x2191d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191cc) {
            ctx->pc = 0x219200u;
            goto label_219200;
        }
    }
    ctx->pc = 0x2191D4u;
    // 0x2191d4: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x2191d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2191d8: 0xc09d9a8  jal         func_2766A0
    ctx->pc = 0x2191D8u;
    SET_GPR_U32(ctx, 31, 0x2191E0u);
    ctx->pc = 0x2191DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191D8u;
    // 0x2191dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766A0u, 0x2191D8u, 0x2191E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191E0u;
label_2191e0:
    // 0x2191e0: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2191e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2191e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2191e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2191e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2191e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2191ec: 0xc09d9a8  jal         func_2766A0
    ctx->pc = 0x2191ECu;
    SET_GPR_U32(ctx, 31, 0x2191F4u);
    ctx->pc = 0x2191F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191ECu;
    // 0x2191f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766A0u, 0x2191ECu, 0x2191F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191F4u;
label_2191f4:
    // 0x2191f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2191F4u;
    {
        const bool branch_taken_0x2191f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191F4u;
        // 0x2191f8: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191f4) {
            ctx->pc = 0x219224u;
            goto label_219224;
        }
    }
    ctx->pc = 0x2191FCu;
    // 0x2191fc: 0x0  nop
    ctx->pc = 0x2191fcu;
    // NOP
label_219200:
    // 0x219200: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x219200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x219204: 0xc0864a0  jal         func_219280
    ctx->pc = 0x219204u;
    SET_GPR_U32(ctx, 31, 0x21920Cu);
    ctx->pc = 0x219208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219204u;
    // 0x219208: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219280u, 0x219204u, 0x21920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21920Cu;
label_21920c:
    // 0x21920c: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x21920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x219210: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x219210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x219214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219218: 0xc0864a0  jal         func_219280
    ctx->pc = 0x219218u;
    SET_GPR_U32(ctx, 31, 0x219220u);
    ctx->pc = 0x21921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219218u;
    // 0x21921c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219280u, 0x219218u, 0x219220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219220u;
label_219220:
    // 0x219220: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x219220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_219224:
    // 0x219224: 0xa0620009  sb          $v0, 0x9($v1)
    ctx->pc = 0x219224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x219228: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x219228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21922c: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x21922cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x219230: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x219230u;
    {
        const bool branch_taken_0x219230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219230u;
        // 0x219234: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219230) {
            ctx->pc = 0x2191C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2191c0;
        }
    }
    ctx->pc = 0x219238u;
    // 0x219238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21923c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21923cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219240: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219248: 0x3e00008  jr          $ra
    ctx->pc = 0x219248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219248u;
        // 0x21924c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219250u;
}
