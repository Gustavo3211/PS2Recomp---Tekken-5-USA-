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

// Function: sub_00348510
// Address: 0x348510 - 0x348660
void sub_00348510_0x348510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348510_0x348510");
#endif

    switch (ctx->pc) {
        case 0x348540u: goto label_348540;
        default: break;
    }

    ctx->pc = 0x348510u;

    // 0x348510: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x348510u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348514: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x348514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x348518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34851c: 0xa65021  addu        $t2, $a1, $a2
    ctx->pc = 0x34851cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x348520: 0x10e0004c  beqz        $a3, . + 4 + (0x4C << 2)
    ctx->pc = 0x348520u;
    {
        const bool branch_taken_0x348520 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x348524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348520u;
        // 0x348524: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348520) {
            ctx->pc = 0x348654u;
            goto label_348654;
        }
    }
    ctx->pc = 0x348528u;
    // 0x348528: 0x241800b0  addiu       $t8, $zero, 0xB0
    ctx->pc = 0x348528u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x34852c: 0x240f0070  addiu       $t7, $zero, 0x70
    ctx->pc = 0x34852cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x348530: 0x240e001f  addiu       $t6, $zero, 0x1F
    ctx->pc = 0x348530u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x348534: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x348534u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x348538: 0x240c008e  addiu       $t4, $zero, 0x8E
    ctx->pc = 0x348538u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x34853c: 0x0  nop
    ctx->pc = 0x34853cu;
    // NOP
label_348540:
    // 0x348540: 0x24e2ff5f  addiu       $v0, $a3, -0xA1
    ctx->pc = 0x348540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967135));
    // 0x348544: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x348544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x348548: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x348548u;
    {
        const bool branch_taken_0x348548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348548) {
            ctx->pc = 0x3485D8u;
            goto label_3485d8;
        }
    }
    ctx->pc = 0x348550u;
    // 0x348550: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x348550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348554: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x348554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x348558: 0x2462ff5f  addiu       $v0, $v1, -0xA1
    ctx->pc = 0x348558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
    // 0x34855c: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x34855cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x348560: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x348560u;
    {
        const bool branch_taken_0x348560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348560u;
        // 0x348564: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348560) {
            ctx->pc = 0x348600u;
            goto label_348600;
        }
    }
    ctx->pc = 0x348568u;
    // 0x348568: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x348568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x34856c: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x34856cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x348570: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x348570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x348574: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x348574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348578: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x348578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x34857c: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x34857cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348580: 0x93a70000  lbu         $a3, 0x0($sp)
    ctx->pc = 0x348580u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348584: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x348584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x348588: 0x93a60004  lbu         $a2, 0x4($sp)
    ctx->pc = 0x348588u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34858c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x34858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x348590: 0x2ce3005f  sltiu       $v1, $a3, 0x5F
    ctx->pc = 0x348590u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x348594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x348594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x348598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348598u;
    {
        const bool branch_taken_0x348598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348598u;
        // 0x34859c: 0x303400a  movz        $t0, $t8, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348598) {
            ctx->pc = 0x3485B0u;
            goto label_3485b0;
        }
    }
    ctx->pc = 0x3485A0u;
    // 0x3485a0: 0x2cc20060  sltiu       $v0, $a2, 0x60
    ctx->pc = 0x3485a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x3485a4: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x3485a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3485a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3485A8u;
    {
        const bool branch_taken_0x3485a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3485ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485A8u;
        // 0x3485ac: 0x1c2300b  movn        $a2, $t6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485a8) {
            ctx->pc = 0x3485B4u;
            goto label_3485b4;
        }
    }
    ctx->pc = 0x3485B0u;
label_3485b0:
    // 0x3485b0: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x3485b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3485b4:
    // 0x3485b4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x3485b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3485b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3485b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3485bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3485bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3485c0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x3485c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x3485c4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3485c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3485c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3485c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3485cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3485CCu;
    {
        const bool branch_taken_0x3485cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3485D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485CCu;
        // 0x3485d0: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485cc) {
            ctx->pc = 0x348600u;
            goto label_348600;
        }
    }
    ctx->pc = 0x3485D4u;
    // 0x3485d4: 0x0  nop
    ctx->pc = 0x3485d4u;
    // NOP
label_3485d8:
    // 0x3485d8: 0x14ec0015  bne         $a3, $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x3485D8u;
    {
        const bool branch_taken_0x3485d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        ctx->pc = 0x3485DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485D8u;
        // 0x3485dc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485d8) {
            ctx->pc = 0x348630u;
            goto label_348630;
        }
    }
    ctx->pc = 0x3485E0u;
    // 0x3485e0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3485e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3485e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3485e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3485e8: 0x2462ff5f  addiu       $v0, $v1, -0xA1
    ctx->pc = 0x3485e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
    // 0x3485ec: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3485ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3485f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3485F0u;
    {
        const bool branch_taken_0x3485f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3485F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485F0u;
        // 0x3485f4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485f0) {
            ctx->pc = 0x348600u;
            goto label_348600;
        }
    }
    ctx->pc = 0x3485F8u;
    // 0x3485f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3485F8u;
    {
        const bool branch_taken_0x3485f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3485FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485F8u;
        // 0x3485fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485f8) {
            ctx->pc = 0x348628u;
            goto label_348628;
        }
    }
    ctx->pc = 0x348600u;
label_348600:
    // 0x348600: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x348600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x348604: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x348604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x348608: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x348608u;
    {
        const bool branch_taken_0x348608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348608u;
        // 0x34860c: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348608) {
            ctx->pc = 0x348654u;
            goto label_348654;
        }
    }
    ctx->pc = 0x348610u;
    // 0x348610: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x348610u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348614: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x348614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x348618: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x348618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34861c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x34861cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348620: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x348620u;
    {
        const bool branch_taken_0x348620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348620u;
        // 0x348624: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348620) {
            ctx->pc = 0x348644u;
            goto label_348644;
        }
    }
    ctx->pc = 0x348628u;
label_348628:
    // 0x348628: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x348628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34862c: 0x0  nop
    ctx->pc = 0x34862cu;
    // NOP
label_348630:
    // 0x348630: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x348630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x348634: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x348634u;
    {
        const bool branch_taken_0x348634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348634u;
        // 0x348638: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348634) {
            ctx->pc = 0x348654u;
            goto label_348654;
        }
    }
    ctx->pc = 0x34863Cu;
    // 0x34863c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x34863cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348640: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x348640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_348644:
    // 0x348644: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x348644u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348648: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x348648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34864c: 0x14e0ffbc  bnez        $a3, . + 4 + (-0x44 << 2)
    ctx->pc = 0x34864Cu;
    {
        const bool branch_taken_0x34864c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x348650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34864Cu;
        // 0x348650: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34864c) {
            ctx->pc = 0x348540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348540;
        }
    }
    ctx->pc = 0x348654u;
label_348654:
    // 0x348654: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x348654u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x348658: 0x3e00008  jr          $ra
    ctx->pc = 0x348658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348658u;
        // 0x34865c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348660u;
}
