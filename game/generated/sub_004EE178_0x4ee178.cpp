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

// Function: sub_004EE178
// Address: 0x4ee178 - 0x4ee278
void sub_004EE178_0x4ee178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE178_0x4ee178");
#endif

    ctx->pc = 0x4ee178u;

    // 0x4ee178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee17c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ee17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ee180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ee184: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ee184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ee188: 0x244511e8  addiu       $a1, $v0, 0x11E8
    ctx->pc = 0x4ee188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4584));
    // 0x4ee18c: 0x24c8015e  addiu       $t0, $a2, 0x15E
    ctx->pc = 0x4ee18cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 350));
    // 0x4ee190: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ee190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ee194: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ee194u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee198: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ee198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ee19c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee1a0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ee1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ee1a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee1a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ee1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ee1ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee1b0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ee1b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee1b4: 0x24420055  addiu       $v0, $v0, 0x55
    ctx->pc = 0x4ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x4ee1b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ee1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ee1bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee1c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ee1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ee1c4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4ee1c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee1c8: 0x2c620600  sltiu       $v0, $v1, 0x600
    ctx->pc = 0x4ee1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1536) ? 1 : 0);
    // 0x4ee1cc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4EE1CCu;
    {
        const bool branch_taken_0x4ee1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE1CCu;
        // 0x4ee1d0: 0x24c901bc  addiu       $t1, $a2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee1cc) {
            ctx->pc = 0x4EE250u;
            goto label_4ee250;
        }
    }
    ctx->pc = 0x4EE1D4u;
    // 0x4ee1d4: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4ee1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ee1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee1dc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ee1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee1e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ee1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee1e4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4ee1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4ee1e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ee1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ee1ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee1f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ee1f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ee1f4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ee1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ee1f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee1fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ee1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ee200: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee204: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x4ee204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4ee208: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ee208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ee20c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee210: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ee210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ee214: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee218: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4ee218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee21c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ee21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ee220: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee224: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ee224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ee228: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee22c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ee22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee230: 0x244204e8  addiu       $v0, $v0, 0x4E8
    ctx->pc = 0x4ee230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
    // 0x4ee234: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ee234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ee238: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee23c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ee23cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ee240: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ee240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee244: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x4ee244u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee248: 0x813b9f2  j           func_4EE7C8
    ctx->pc = 0x4EE248u;
    ctx->pc = 0x4EE24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE248u;
    // 0x4ee24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE7C8u, 0x4EE248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4EE250u;
label_4ee250:
    // 0x4ee250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ee250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ee254: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4ee254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4ee258: 0xa4c2016a  sh          $v0, 0x16A($a2)
    ctx->pc = 0x4ee258u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee25c: 0xa4c3014a  sh          $v1, 0x14A($a2)
    ctx->pc = 0x4ee25cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ee260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee264: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4ee264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ee268: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ee268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ee26c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4ee26cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee270: 0x813b89e  j           func_4EE278
    ctx->pc = 0x4EE270u;
    ctx->pc = 0x4EE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE270u;
    // 0x4ee274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE278u;
    sub_004EE278_0x4ee278(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE278u;
}
