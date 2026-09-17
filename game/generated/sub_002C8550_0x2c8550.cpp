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

// Function: sub_002C8550
// Address: 0x2c8550 - 0x2c8698
void sub_002C8550_0x2c8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8550_0x2c8550");
#endif

    ctx->pc = 0x2c8550u;

    // 0x2c8550: 0x24860034  addiu       $a2, $a0, 0x34
    ctx->pc = 0x2c8550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2c8554: 0x24a50034  addiu       $a1, $a1, 0x34
    ctx->pc = 0x2c8554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x2c8558: 0x90c9000a  lbu         $t1, 0xA($a2)
    ctx->pc = 0x2c8558u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x2c855c: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x2c855cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c8560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8560u;
    {
        const bool branch_taken_0x2c8560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8560u;
        // 0x2c8564: 0x24880028  addiu       $t0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8560) {
            ctx->pc = 0x2C8578u;
            goto label_2c8578;
        }
    }
    ctx->pc = 0x2C8568u;
    // 0x2c8568: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x2c8568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c856c: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x2c856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2c8570: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2C8570u;
    {
        const bool branch_taken_0x2c8570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8570u;
        // 0x2c8574: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8570) {
            ctx->pc = 0x2C8684u;
            goto label_2c8684;
        }
    }
    ctx->pc = 0x2C8578u;
label_2c8578:
    // 0x2c8578: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x2c8578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2c857c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2c857cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c8580: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C8580u;
    {
        const bool branch_taken_0x2c8580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8580u;
        // 0x2c8584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8580) {
            ctx->pc = 0x2C864Cu;
            goto label_2c864c;
        }
    }
    ctx->pc = 0x2C8588u;
    // 0x2c8588: 0x90a3000a  lbu         $v1, 0xA($a1)
    ctx->pc = 0x2c8588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2c858c: 0x90c2000a  lbu         $v0, 0xA($a2)
    ctx->pc = 0x2c858cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x2c8590: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x2c8590u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8594: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8594u;
    {
        const bool branch_taken_0x2c8594 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2C8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8594u;
        // 0x2c8598: 0x28a40003  slti        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8594) {
            ctx->pc = 0x2C85C0u;
            goto label_2c85c0;
        }
    }
    ctx->pc = 0x2C859Cu;
    // 0x2c859c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2c859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2c85a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c85a4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2c85a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2c85a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c85ac: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2c85acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2c85b0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2c85b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c85b4: 0x84e7e3e2  lh          $a3, -0x1C1E($a3)
    ctx->pc = 0x2c85b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294960098)));
    // 0x2c85b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C85B8u;
    {
        const bool branch_taken_0x2c85b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85B8u;
        // 0x2c85bc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85b8) {
            ctx->pc = 0x2C8604u;
            goto label_2c8604;
        }
    }
    ctx->pc = 0x2C85C0u;
label_2c85c0:
    // 0x2c85c0: 0x4a1000f  bgez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C85C0u;
    {
        const bool branch_taken_0x2c85c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2C85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85C0u;
        // 0x2c85c4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85c0) {
            ctx->pc = 0x2C8600u;
            goto label_2c8600;
        }
    }
    ctx->pc = 0x2C85C8u;
    // 0x2c85c8: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x2c85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2c85cc: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2c85ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c85d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C85D0u;
    {
        const bool branch_taken_0x2c85d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c85d0) {
            ctx->pc = 0x2C85D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C85D0u;
            // 0x2c85d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C85E8u;
            goto label_2c85e8;
        }
    }
    ctx->pc = 0x2C85D8u;
    // 0x2c85d8: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C85D8u;
    {
        const bool branch_taken_0x2c85d8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2C85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85D8u;
        // 0x2c85dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85d8) {
            ctx->pc = 0x2C85E4u;
            goto label_2c85e4;
        }
    }
    ctx->pc = 0x2C85E0u;
    // 0x2c85e0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2c85e4:
    // 0x2c85e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c85e8:
    // 0x2c85e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c85ec: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2c85ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2c85f0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2c85f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c85f4: 0x84e7e3f2  lh          $a3, -0x1C0E($a3)
    ctx->pc = 0x2c85f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294960114)));
    // 0x2c85f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C85F8u;
    {
        const bool branch_taken_0x2c85f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85F8u;
        // 0x2c85fc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85f8) {
            ctx->pc = 0x2C8604u;
            goto label_2c8604;
        }
    }
    ctx->pc = 0x2C8600u;
label_2c8600:
    // 0x2c8600: 0x8787bb2a  lh          $a3, -0x44D6($gp)
    ctx->pc = 0x2c8600u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949674)));
label_2c8604:
    // 0x2c8604: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2c8604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c8608: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C8608u;
    {
        const bool branch_taken_0x2c8608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8608) {
            ctx->pc = 0x2C860Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8608u;
            // 0x2c860c: 0x94c30008  lhu         $v1, 0x8($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8650u;
            goto label_2c8650;
        }
    }
    ctx->pc = 0x2C8610u;
    // 0x2c8610: 0x80c2000b  lb          $v0, 0xB($a2)
    ctx->pc = 0x2c8610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x2c8614: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8614u;
    {
        const bool branch_taken_0x2c8614 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8614u;
        // 0x2c8618: 0x90c3000b  lbu         $v1, 0xB($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8614) {
            ctx->pc = 0x2C8628u;
            goto label_2c8628;
        }
    }
    ctx->pc = 0x2C861Cu;
    // 0x2c861c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c8620: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C8620u;
    {
        const bool branch_taken_0x2c8620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8620u;
        // 0x2c8624: 0xa0c2000b  sb          $v0, 0xB($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8620) {
            ctx->pc = 0x2C864Cu;
            goto label_2c864c;
        }
    }
    ctx->pc = 0x2C8628u;
label_2c8628:
    // 0x2c8628: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c8628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c862c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2c862cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2c8630: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2c8630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2c8634: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2c8634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2c8638: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8638u;
    {
        const bool branch_taken_0x2c8638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8638u;
        // 0x2c863c: 0xa0c2000b  sb          $v0, 0xB($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8638) {
            ctx->pc = 0x2C864Cu;
            goto label_2c864c;
        }
    }
    ctx->pc = 0x2C8640u;
    // 0x2c8640: 0x24e207d0  addiu       $v0, $a3, 0x7D0
    ctx->pc = 0x2c8640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2000));
    // 0x2c8644: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2c8644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c8648: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x2c8648u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
label_2c864c:
    // 0x2c864c: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x2c864cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_2c8650:
    // 0x2c8650: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2c8650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2c8654: 0x8485e3a0  lh          $a1, -0x1C60($a0)
    ctx->pc = 0x2c8654u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x47E3A0u));
    // 0x2c8658: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2c8658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c865c: 0x9484e3a0  lhu         $a0, -0x1C60($a0)
    ctx->pc = 0x2c865cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294960032)));
    // 0x2c8660: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2c8660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2c8664: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2c8664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2c8668: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2c8668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c866c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C866Cu;
    {
        const bool branch_taken_0x2c866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C866Cu;
        // 0x2c8670: 0xa4c30008  sh          $v1, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c866c) {
            ctx->pc = 0x2C8684u;
            goto label_2c8684;
        }
    }
    ctx->pc = 0x2C8674u;
    // 0x2c8674: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x2c8674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2c8678: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c8678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c867c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C867Cu;
    {
        const bool branch_taken_0x2c867c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c867c) {
            ctx->pc = 0x2C8680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C867Cu;
            // 0x2c8680: 0xa4c40008  sh          $a0, 0x8($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8684u;
            goto label_2c8684;
        }
    }
    ctx->pc = 0x2C8684u;
label_2c8684:
    // 0x2c8684: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2c8684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c8688: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2c8688u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2c868c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c8690: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8690u;
        // 0x2c8694: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8698u;
}
