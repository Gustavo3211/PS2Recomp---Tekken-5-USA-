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

// Function: sub_004EC4A8
// Address: 0x4ec4a8 - 0x4ec550
void sub_004EC4A8_0x4ec4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC4A8_0x4ec4a8");
#endif

    ctx->pc = 0x4ec4a8u;

    // 0x4ec4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ec4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ec4ac: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ec4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ec4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ec4b4: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x4ec4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4ec4b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4ec4b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4bc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ec4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ec4c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ec4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ec4c4: 0x24090180  addiu       $t1, $zero, 0x180
    ctx->pc = 0x4ec4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x4ec4c8: 0x84e201be  lh          $v0, 0x1BE($a3)
    ctx->pc = 0x4ec4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 446)));
    // 0x4ec4cc: 0x24e80166  addiu       $t0, $a3, 0x166
    ctx->pc = 0x4ec4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 358));
    // 0x4ec4d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec4d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ec4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ec4dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec4e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ec4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ec4e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec4e8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ec4e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ec4ec: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4ec4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4ec4f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ec4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ec4f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec4f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ec4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ec4fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec500: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ec500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ec504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ec504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ec508: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ec508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ec50c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec510: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ec510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ec514: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ec514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ec518: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ec518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ec51c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ec51cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ec520: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ec520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ec524: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4ec524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4ec528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ec528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ec52c: 0x946380d2  lhu         $v1, -0x7F2E($v1)
    ctx->pc = 0x4ec52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294934738)));
    // 0x4ec530: 0xa4e90138  sh          $t1, 0x138($a3)
    ctx->pc = 0x4ec530u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 312), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ec534: 0xa4e3015c  sh          $v1, 0x15C($a3)
    ctx->pc = 0x4ec534u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 348), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ec538: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ec538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ec53c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ec53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ec540: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4ec540u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ec544: 0x813b37e  j           func_4ECDF8
    ctx->pc = 0x4EC544u;
    ctx->pc = 0x4EC548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC544u;
    // 0x4ec548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDF8u;
    sub_004ECDF8_0x4ecdf8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EC54Cu;
    // 0x4ec54c: 0x0  nop
    ctx->pc = 0x4ec54cu;
    // NOP
    ctx->pc = 0x4ec550u;
}
