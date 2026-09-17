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

// Function: sub_00508488
// Address: 0x508488 - 0x508588
void sub_00508488_0x508488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00508488_0x508488");
#endif

    switch (ctx->pc) {
        case 0x5084acu: goto label_5084ac;
        default: break;
    }

    ctx->pc = 0x508488u;

    // 0x508488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x508488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50848c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x508490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x508490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x508494: 0x2450c588  addiu       $s0, $v0, -0x3A78
    ctx->pc = 0x508494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952328));
    // 0x508498: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x508498u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC588u));
    // 0x50849c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50849cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x5084a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x5084a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x5084a4: 0xc14481c  jal         func_512070
    ctx->pc = 0x5084A4u;
    SET_GPR_U32(ctx, 31, 0x5084ACu);
    ctx->pc = 0x5084A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5084A4u;
    // 0x5084a8: 0x2484c584  addiu       $a0, $a0, -0x3A7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5084A4u, 0x5084ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5084ACu;
label_5084ac:
    // 0x5084ac: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5084acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5084b0: 0x2465c598  addiu       $a1, $v1, -0x3A68
    ctx->pc = 0x5084b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952344));
    // 0x5084b4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5084b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5084b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5084b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5084bc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x5084bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x5084c0: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x5084c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x5084c4: 0x14440022  bne         $v0, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x5084C4u;
    {
        const bool branch_taken_0x5084c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x5084C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5084C4u;
        // 0x5084c8: 0x2466c5a4  addiu       $a2, $v1, -0x3A5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5084c4) {
            ctx->pc = 0x508550u;
            goto label_508550;
        }
    }
    ctx->pc = 0x5084CCu;
    // 0x5084cc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x5084ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5084d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5084d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5084d4: 0x24420241  addiu       $v0, $v0, 0x241
    ctx->pc = 0x5084d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 577));
    // 0x5084d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5084d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5084dc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x5084dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x5084e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5084e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5084e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5084e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5084e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x5084e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x5084ec: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x5084ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5084f0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x5084f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5084f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5084f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5084f8: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x5084f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x5084fc: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5084fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x508500: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x508500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508504: 0x9502c59c  lhu         $v0, -0x3A64($t0)
    ctx->pc = 0x508504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294952348)));
    // 0x508508: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x508508u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x50850c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50850cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508510: 0x9465c5a0  lhu         $a1, -0x3A60($v1)
    ctx->pc = 0x508510u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x8EC5A0u));
    // 0x508514: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x508514u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x508518: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x508518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50851c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50851cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508520: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x508520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x508524: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x508524u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x508528: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x508528u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50852c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x50852cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x508530: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x508530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508534: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x508534u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x508538: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x508538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x50853c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50853cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508540: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x508540u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x508544: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x508544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508548: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x508548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50854c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_508550:
    // 0x508550: 0x2505c59c  addiu       $a1, $t0, -0x3A64
    ctx->pc = 0x508550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952348));
    // 0x508554: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x508554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x508558: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x508558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50855c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x508560: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x508560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x508564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x508564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x508568: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x508568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x50856c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50856cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508570: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x508570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508574: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508578: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x508578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50857c: 0x3e00008  jr          $ra
    ctx->pc = 0x50857Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50857Cu;
        // 0x508580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50857Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x508584u;
    // 0x508584: 0x0  nop
    ctx->pc = 0x508584u;
    // NOP
    ctx->pc = 0x508588u;
}
