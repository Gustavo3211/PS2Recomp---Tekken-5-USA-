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

// Function: sub_004988A0
// Address: 0x4988a0 - 0x4989d0
void sub_004988A0_0x4988a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004988A0_0x4988a0");
#endif

    switch (ctx->pc) {
        case 0x4988d8u: goto label_4988d8;
        case 0x498928u: goto label_498928;
        case 0x4989b0u: goto label_4989b0;
        default: break;
    }

    ctx->pc = 0x4988a0u;

    // 0x4988a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4988a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4988a4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4988a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4988a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4988a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4988ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4988acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4988b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4988b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4988b4: 0x25240b1c  addiu       $a0, $t1, 0xB1C
    ctx->pc = 0x4988b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2844));
    // 0x4988b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4988b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4988bc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4988bcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0B1Cu));
    // 0x4988c0: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4988C0u;
    {
        const bool branch_taken_0x4988c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4988C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4988C0u;
        // 0x4988c4: 0x24710118  addiu       $s1, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4988c0) {
            ctx->pc = 0x498918u;
            goto label_498918;
        }
    }
    ctx->pc = 0x4988C8u;
    // 0x4988c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4988c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4988cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4988ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4988d0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4988d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4988d4: 0x0  nop
    ctx->pc = 0x4988d4u;
    // NOP
label_4988d8:
    // 0x4988d8: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x4988d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4988dc: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x4988dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4988e0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4988e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4988e4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4988e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4988e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4988e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4988ec: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x4988ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x4988f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4988f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4988f4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4988f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4988f8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4988f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4988fc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4988fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x498900: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x498900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498904: 0x440fff4  bltz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x498904u;
    {
        const bool branch_taken_0x498904 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x498908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498904u;
        // 0x498908: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498904) {
            ctx->pc = 0x4988D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4988d8;
        }
    }
    ctx->pc = 0x49890Cu;
    // 0x49890c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x49890Cu;
    {
        const bool branch_taken_0x49890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49890Cu;
        // 0x498910: 0x86260000  lh          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49890c) {
            ctx->pc = 0x498990u;
            goto label_498990;
        }
    }
    ctx->pc = 0x498914u;
    // 0x498914: 0x0  nop
    ctx->pc = 0x498914u;
    // NOP
label_498918:
    // 0x498918: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x498918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49891c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x49891cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498920: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x498920u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x498924: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x498924u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_498928:
    // 0x498928: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x498928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x49892c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49892cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498930: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x498930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498934: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x498934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498938: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x498938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x49893c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49893cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x498940: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x498940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x498944: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x498944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x498948: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x498948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x49894c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49894cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498950: 0x443fff5  bgezl       $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x498950u;
    {
        const bool branch_taken_0x498950 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x498950) {
            ctx->pc = 0x498954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498950u;
            // 0x498954: 0x84e60000  lh          $a2, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498928;
        }
    }
    ctx->pc = 0x498958u;
    // 0x498958: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x498958u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49895c: 0x25240b1c  addiu       $a0, $t1, 0xB1C
    ctx->pc = 0x49895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2844));
    // 0x498960: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x498960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x498964: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x498964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x498968: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x498968u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49896c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49896cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498970: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x498970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498974: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x498974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x498978: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x498978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49897c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498980: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498984: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x498984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x498988: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x498988u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49898c: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x49898cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_498990:
    // 0x498990: 0x26100b30  addiu       $s0, $s0, 0xB30
    ctx->pc = 0x498990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
    // 0x498994: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x498994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x498998: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x498998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49899c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x49899cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4989a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4989a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4989a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4989a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4989a8: 0xc126204  jal         func_498810
    ctx->pc = 0x4989A8u;
    SET_GPR_U32(ctx, 31, 0x4989B0u);
    ctx->pc = 0x4989ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4989A8u;
    // 0x4989ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498810u, 0x4989A8u, 0x4989B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4989B0u;
label_4989b0:
    // 0x4989b0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4989b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4989b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4989b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4989b8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4989b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4989bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4989bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4989c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4989c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4989c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4989C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4989C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4989C4u;
        // 0x4989c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4989C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4989CCu;
    // 0x4989cc: 0x0  nop
    ctx->pc = 0x4989ccu;
    // NOP
    ctx->pc = 0x4989d0u;
}
