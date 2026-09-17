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

// Function: sub_002B65B0
// Address: 0x2b65b0 - 0x2b6710
void sub_002B65B0_0x2b65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B65B0_0x2b65b0");
#endif

    switch (ctx->pc) {
        case 0x2b65e8u: goto label_2b65e8;
        case 0x2b6608u: goto label_2b6608;
        case 0x2b66c8u: goto label_2b66c8;
        default: break;
    }

    ctx->pc = 0x2b65b0u;

    // 0x2b65b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b65b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b65b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b65b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b65b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b65bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b65bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b65c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b65c4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2b65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2b65c8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B65C8u;
    {
        const bool branch_taken_0x2b65c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b65c8) {
            ctx->pc = 0x2B65E0u;
            goto label_2b65e0;
        }
    }
    ctx->pc = 0x2B65D0u;
    // 0x2b65d0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x2b65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b65d4: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x2b65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x2b65d8: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x2b65d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x2b65dc: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2b65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_2b65e0:
    // 0x2b65e0: 0xc0ac300  jal         func_2B0C00
    ctx->pc = 0x2B65E0u;
    SET_GPR_U32(ctx, 31, 0x2B65E8u);
    ctx->pc = 0x2B65E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B65E0u;
    // 0x2b65e4: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0C00u, 0x2B65E0u, 0x2B65E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B65E8u;
label_2b65e8:
    // 0x2b65e8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B65E8u;
    {
        const bool branch_taken_0x2b65e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65E8u;
        // 0x2b65ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65e8) {
            ctx->pc = 0x2B6698u;
            goto label_2b6698;
        }
    }
    ctx->pc = 0x2B65F0u;
    // 0x2b65f0: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2b65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2b65f4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B65F4u;
    {
        const bool branch_taken_0x2b65f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65F4u;
        // 0x2b65f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65f4) {
            ctx->pc = 0x2B6640u;
            goto label_2b6640;
        }
    }
    ctx->pc = 0x2B65FCu;
    // 0x2b65fc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2b65fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b6600: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2b6600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2b6604: 0x0  nop
    ctx->pc = 0x2b6604u;
    // NOP
label_2b6608:
    // 0x2b6608: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x2b6608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b660c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b6610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6614: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2b6614u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b6618: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b6618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b661c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b661cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6620: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b6620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b6624: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b6628: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2b6628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2b662c: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x2b662cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x2b6630: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2b6630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2b6634: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2b6634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b6638: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B6638u;
    {
        const bool branch_taken_0x2b6638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6638u;
        // 0x2b663c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6638) {
            ctx->pc = 0x2B6608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6608;
        }
    }
    ctx->pc = 0x2B6640u;
label_2b6640:
    // 0x2b6640: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2b6640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2b6644: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2b6644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b6648: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x2b6648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b664c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b664cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6650: 0x2407feff  addiu       $a3, $zero, -0x101
    ctx->pc = 0x2b6650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2b6654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b6654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b665c: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x2b665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x2b6660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6664: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b6664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b6668: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2b6668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2b666c: 0xaca30074  sw          $v1, 0x74($a1)
    ctx->pc = 0x2b666cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 3));
    // 0x2b6670: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x2b6670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b6674: 0xac86006c  sw          $a2, 0x6C($a0)
    ctx->pc = 0x2b6674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 6));
    // 0x2b6678: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x2b6678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b667c: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x2b667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x2b6680: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x2b6680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2b6684: 0xaca30074  sw          $v1, 0x74($a1)
    ctx->pc = 0x2b6684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 3));
    // 0x2b6688: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x2b6688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b668c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x2b668cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x2b6690: 0xae0600c0  sw          $a2, 0xC0($s0)
    ctx->pc = 0x2b6690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 6));
    // 0x2b6694: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x2b6694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_2b6698:
    // 0x2b6698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b669c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b669cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b66a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B66A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66A0u;
        // 0x2b66a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B66A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B66A8u;
    // 0x2b66a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b66a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b66ac: 0x8ce2007c  lw          $v0, 0x7C($a3)
    ctx->pc = 0x2b66acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x2b66b0: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B66B0u;
    {
        const bool branch_taken_0x2b66b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66B0u;
        // 0x2b66b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66b0) {
            ctx->pc = 0x2B6704u;
            goto label_2b6704;
        }
    }
    ctx->pc = 0x2B66B8u;
    // 0x2b66b8: 0x3c08efff  lui         $t0, 0xEFFF
    ctx->pc = 0x2b66b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61439 << 16));
    // 0x2b66bc: 0x52f00  sll         $a1, $a1, 28
    ctx->pc = 0x2b66bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 28));
    // 0x2b66c0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2b66c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2b66c4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2b66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2b66c8:
    // 0x2b66c8: 0x8ce400a4  lw          $a0, 0xA4($a3)
    ctx->pc = 0x2b66c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x2b66cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b66d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b66d4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2b66d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b66d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b66d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b66dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b66e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b66e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b66e4: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b66e8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2b66e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2b66ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b66ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2b66f0: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x2b66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x2b66f4: 0x8ce3007c  lw          $v1, 0x7C($a3)
    ctx->pc = 0x2b66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x2b66f8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2b66f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b66fc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B66FCu;
    {
        const bool branch_taken_0x2b66fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66FCu;
        // 0x2b6700: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66fc) {
            ctx->pc = 0x2B66C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b66c8;
        }
    }
    ctx->pc = 0x2B6704u;
label_2b6704:
    // 0x2b6704: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B670Cu;
    // 0x2b670c: 0x0  nop
    ctx->pc = 0x2b670cu;
    // NOP
    ctx->pc = 0x2b6710u;
}
