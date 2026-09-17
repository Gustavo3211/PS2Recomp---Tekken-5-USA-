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

// Function: sub_004ECD58
// Address: 0x4ecd58 - 0x4ecdf8
void sub_004ECD58_0x4ecd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECD58_0x4ecd58");
#endif

    ctx->pc = 0x4ecd58u;

    // 0x4ecd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ecd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ecd5c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ecd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ecd60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ecd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ecd64: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x4ecd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4ecd68: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4ecd68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecd6c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ecd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ecd70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ecd70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ecd74: 0x24e80166  addiu       $t0, $a3, 0x166
    ctx->pc = 0x4ecd74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 358));
    // 0x4ecd78: 0x84e201be  lh          $v0, 0x1BE($a3)
    ctx->pc = 0x4ecd78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 446)));
    // 0x4ecd7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ecd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ecd84: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ecd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ecd88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecd8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ecd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ecd90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecd94: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ecd94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ecd98: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4ecd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4ecd9c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ecd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ecda0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecda4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ecda4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ecda8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecdac: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ecdacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ecdb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ecdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ecdb4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ecdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ecdb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecdbc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ecdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ecdc0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ecdc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ecdc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ecdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ecdc8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ecdc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ecdcc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ecdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ecdd0: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4ecdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4ecdd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ecdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ecdd8: 0x946380d2  lhu         $v1, -0x7F2E($v1)
    ctx->pc = 0x4ecdd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294934738)));
    // 0x4ecddc: 0xa4e00158  sh          $zero, 0x158($a3)
    ctx->pc = 0x4ecddcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ecde0: 0xa4e3015c  sh          $v1, 0x15C($a3)
    ctx->pc = 0x4ecde0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 348), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ecde4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ecde4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ecde8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ecde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ecdec: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4ecdecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ecdf0: 0x813b37e  j           func_4ECDF8
    ctx->pc = 0x4ECDF0u;
    ctx->pc = 0x4ECDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECDF0u;
    // 0x4ecdf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDF8u;
    sub_004ECDF8_0x4ecdf8(rdram, ctx, runtime); return;
    ctx->pc = 0x4ECDF8u;
}
