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

// Function: sub_004DA8A8
// Address: 0x4da8a8 - 0x4da990
void sub_004DA8A8_0x4da8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA8A8_0x4da8a8");
#endif

    switch (ctx->pc) {
        case 0x4da8bcu: goto label_4da8bc;
        default: break;
    }

    ctx->pc = 0x4da8a8u;

    // 0x4da8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4da8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4da8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4da8b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4da8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4da8b4: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4DA8B4u;
    SET_GPR_U32(ctx, 31, 0x4DA8BCu);
    ctx->pc = 0x4DA8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA8B4u;
    // 0x4da8b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DA8B4u, 0x4DA8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA8BCu;
label_4da8bc:
    // 0x4da8bc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4da8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4da8c0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4da8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4da8c4: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4da8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4da8c8: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4da8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4da8cc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4da8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4da8d0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4da8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4da8d4: 0xa444016a  sh          $a0, 0x16A($v0)
    ctx->pc = 0x4da8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 4));
    // 0x4da8d8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4da8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4da8dc: 0x24a510fc  addiu       $a1, $a1, 0x10FC
    ctx->pc = 0x4da8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
    // 0x4da8e0: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4da8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4da8e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4da8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4da8e8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4da8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4da8ec: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x4da8ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4da8f0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4da8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4da8f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4da8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4da8f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4da8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4da8fc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4da8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4da900: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4da900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4da904: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4da904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4da908: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4da908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4da90c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4da90cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4da910: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4da910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4da914: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4da914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4da918: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4da918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4da91c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4da91cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4da920: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4da920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4da924: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4da924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4da928: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x4da928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x4da92c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4da92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4da930: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4da930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4da934: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4da934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4da938: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4da938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4da93c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4da93cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4da940: 0x24630300  addiu       $v1, $v1, 0x300
    ctx->pc = 0x4da940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x4da944: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4da944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4da948: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4da948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4da94c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4da94cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4da950: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4da950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4da954: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4da954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4da958: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4da958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4da95c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4da95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4da960: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4da964: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4da964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4da968: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4da968u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4da96c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4da96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4da970: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4da970u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4da974: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4da974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4da978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4da978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4da97c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4da97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4da980: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4da980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4da984: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA984u;
        // 0x4da988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA98Cu;
    // 0x4da98c: 0x0  nop
    ctx->pc = 0x4da98cu;
    // NOP
    ctx->pc = 0x4da990u;
}
