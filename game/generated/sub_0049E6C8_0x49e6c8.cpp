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

// Function: sub_0049E6C8
// Address: 0x49e6c8 - 0x49e790
void sub_0049E6C8_0x49e6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E6C8_0x49e6c8");
#endif

    switch (ctx->pc) {
        case 0x49e6d8u: goto label_49e6d8;
        default: break;
    }

    ctx->pc = 0x49e6c8u;

    // 0x49e6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49e6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49e6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49e6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49e6d0: 0xc12b5e4  jal         func_4AD790
    ctx->pc = 0x49E6D0u;
    SET_GPR_U32(ctx, 31, 0x49E6D8u);
    ctx->pc = 0x4AD790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD790u, 0x49E6D0u, 0x49E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E6D8u;
label_49e6d8:
    // 0x49e6d8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x49e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x49e6dc: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x49e6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x49e6e0: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x49e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x49e6e4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49e6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49e6e8: 0x84a72330  lh          $a3, 0x2330($a1)
    ctx->pc = 0x49e6e8u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x72F9B0u));
    // 0x49e6ec: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x49e6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x49e6f0: 0x244a0018  addiu       $t2, $v0, 0x18
    ctx->pc = 0x49e6f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x49e6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49e6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e6f8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x49e6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x49e6fc: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x49e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x49e700: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x49e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x49e704: 0x94848100  lhu         $a0, -0x7F00($a0)
    ctx->pc = 0x49e704u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294934784)));
    // 0x49e708: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x49e708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x49e70c: 0x94a32334  lhu         $v1, 0x2334($a1)
    ctx->pc = 0x49e70cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9012)));
    // 0x49e710: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x49e710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49e714: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49e714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49e718: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49e718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49e71c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49e71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e720: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49e720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49e724: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x49e724u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x49e728: 0x94a32336  lhu         $v1, 0x2336($a1)
    ctx->pc = 0x49e728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9014)));
    // 0x49e72c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x49e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49e730: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49e730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49e734: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49e734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49e738: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49e738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e73c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49e73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49e740: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x49e740u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x49e744: 0x94a32338  lhu         $v1, 0x2338($a1)
    ctx->pc = 0x49e744u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9016)));
    // 0x49e748: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x49e748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49e74c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49e750: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49e750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49e754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49e754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e758: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49e758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49e75c: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x49e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x49e760: 0x94a3233a  lhu         $v1, 0x233A($a1)
    ctx->pc = 0x49e760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9018)));
    // 0x49e764: 0xa4430118  sh          $v1, 0x118($v0)
    ctx->pc = 0x49e764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e768: 0x94a4233c  lhu         $a0, 0x233C($a1)
    ctx->pc = 0x49e768u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9020)));
    // 0x49e76c: 0xa444011c  sh          $a0, 0x11C($v0)
    ctx->pc = 0x49e76cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 4));
    // 0x49e770: 0x94a3233e  lhu         $v1, 0x233E($a1)
    ctx->pc = 0x49e770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9022)));
    // 0x49e774: 0xa4430120  sh          $v1, 0x120($v0)
    ctx->pc = 0x49e774u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e778: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49e778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49e77c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x49e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x49e780: 0x94428140  lhu         $v0, -0x7EC0($v0)
    ctx->pc = 0x49e780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294934848)));
    // 0x49e784: 0xa4a223c4  sh          $v0, 0x23C4($a1)
    ctx->pc = 0x49e784u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e788: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49E788u;
    ctx->pc = 0x49E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E788u;
    // 0x49e78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49E790u;
}
