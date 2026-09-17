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

// Function: sub_0048B5B8
// Address: 0x48b5b8 - 0x48b6d0
void sub_0048B5B8_0x48b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B5B8_0x48b5b8");
#endif

    ctx->pc = 0x48b5b8u;

    // 0x48b5b8: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x48b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x48b5bc: 0x3c0b007c  lui         $t3, 0x7C
    ctx->pc = 0x48b5bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)124 << 16));
    // 0x48b5c0: 0x244d5b20  addiu       $t5, $v0, 0x5B20
    ctx->pc = 0x48b5c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 23328));
    // 0x48b5c4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x48b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x48b5c8: 0x256b5b28  addiu       $t3, $t3, 0x5B28
    ctx->pc = 0x48b5c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 23336));
    // 0x48b5cc: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x48b5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7C5B20u));
    // 0x48b5d0: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x48b5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7C5B28u));
    // 0x48b5d4: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x48b5d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
    // 0x48b5d8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x48b5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x48b5dc: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x48b5dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x48b5e0: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x48b5e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x48b5e4: 0x3c0a007c  lui         $t2, 0x7C
    ctx->pc = 0x48b5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)124 << 16));
    // 0x48b5e8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x48b5e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x48b5ec: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x48b5ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x48b5f0: 0x254a5b24  addiu       $t2, $t2, 0x5B24
    ctx->pc = 0x48b5f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 23332));
    // 0x48b5f4: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x48b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x48b5f8: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x48b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x48b5fc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x48b5fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x48b600: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x48b600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7C5B24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B24u, _value); } while (0);
    // 0x48b604: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x48b604u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x48b608: 0x30ccffff  andi        $t4, $a2, 0xFFFF
    ctx->pc = 0x48b608u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x48b60c: 0xe0c82d  daddu       $t9, $a3, $zero
    ctx->pc = 0x48b60cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b610: 0x854f0000  lh          $t7, 0x0($t2)
    ctx->pc = 0x48b610u;
    SET_GPR_S32(ctx, 15, (int16_t)FAST_READ16(0x7C5B24u));
    // 0x48b614: 0x3c0a007c  lui         $t2, 0x7C
    ctx->pc = 0x48b614u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)124 << 16));
    // 0x48b618: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x48b618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x48b61c: 0x3c07007c  lui         $a3, 0x7C
    ctx->pc = 0x48b61cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)124 << 16));
    // 0x48b620: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x48b620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48b624: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x48b624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x48b628: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x48b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x48b62c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x48b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x48b630: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x48b630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x48b634: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x48b634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x48b638: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x48b638u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x48b63c: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x48b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x48b640: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x48b640u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x48b644: 0x12e2024  and         $a0, $t1, $t6
    ctx->pc = 0x48b644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x48b648: 0x8c6025  or          $t4, $a0, $t4
    ctx->pc = 0x48b648u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x48b64c: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x48b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x48b650: 0x95680000  lhu         $t0, 0x0($t3)
    ctx->pc = 0x48b650u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x48b654: 0x3598ffff  ori         $t8, $t4, 0xFFFF
    ctx->pc = 0x48b654u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x48b658: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x48b658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48b65c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48b65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b660: 0xad455b2c  sw          $a1, 0x5B2C($t2)
    ctx->pc = 0x48b660u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 23340), GPR_U32(ctx, 5));
    // 0x48b664: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x48b664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x48b668: 0xace65b30  sw          $a2, 0x5B30($a3)
    ctx->pc = 0x48b668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23344), GPR_U32(ctx, 6));
    // 0x48b66c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x48B66Cu;
    {
        const bool branch_taken_0x48b66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B66Cu;
        // 0x48b670: 0xac995b34  sw          $t9, 0x5B34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 23348), GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b66c) {
            ctx->pc = 0x48B6C8u;
            goto label_48b6c8;
        }
    }
    ctx->pc = 0x48B674u;
    // 0x48b674: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x48b674u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x48b678: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x48b678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48b67c: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x48b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x48b680: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x48b680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x48b684: 0x3031824  and         $v1, $t8, $v1
    ctx->pc = 0x48b684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 3));
    // 0x48b688: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x48b688u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x48b68c: 0x95a40000  lhu         $a0, 0x0($t5)
    ctx->pc = 0x48b68cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48b690: 0x88202b  sltu        $a0, $a0, $t0
    ctx->pc = 0x48b690u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x48b694: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48B694u;
    {
        const bool branch_taken_0x48b694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B694u;
        // 0x48b698: 0x6e2824  and         $a1, $v1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b694) {
            ctx->pc = 0x48B6C8u;
            goto label_48b6c8;
        }
    }
    ctx->pc = 0x48B69Cu;
    // 0x48b69c: 0x3323ffff  andi        $v1, $t9, 0xFFFF
    ctx->pc = 0x48b69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)65535);
    // 0x48b6a0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x48b6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x48b6a4: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x48b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x48b6a8: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x48b6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48b6ac: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x48b6acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48b6b0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x48b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x48b6b4: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x48b6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x48b6b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48b6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48b6bc: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x48b6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x48b6c0: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x48b6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48b6c4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x48b6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_48b6c8:
    // 0x48b6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x48B6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B6D0u;
}
