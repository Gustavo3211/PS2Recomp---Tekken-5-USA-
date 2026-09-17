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

// Function: sub_002272B0
// Address: 0x2272b0 - 0x22a208
void sub_002272B0_0x2272b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002272B0_0x2272b0");
#endif

    ctx->pc = 0x2272b0u;

    // 0x2272b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2272b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2272b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2272b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2272b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2272bc: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x2272bcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2272c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2272c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2272c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2272c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2272c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2272cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2272ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2272d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2272d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2272d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2272d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2272d8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2272d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2272dc: 0x14a20bbe  bne         $a1, $v0, . + 4 + (0xBBE << 2)
    ctx->pc = 0x2272DCu;
    {
        const bool branch_taken_0x2272dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2272E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272DCu;
        // 0x2272e0: 0xffbe0040  sd          $fp, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272dc) {
            ctx->pc = 0x22A1D8u;
            goto label_22a1d8;
        }
    }
    ctx->pc = 0x2272E4u;
    // 0x2272e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2272e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2272e8: 0x17220bbc  bne         $t9, $v0, . + 4 + (0xBBC << 2)
    ctx->pc = 0x2272E8u;
    {
        const bool branch_taken_0x2272e8 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        ctx->pc = 0x2272ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272E8u;
        // 0x2272ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272e8) {
            ctx->pc = 0x22A1DCu;
            goto label_22a1dc;
        }
    }
    ctx->pc = 0x2272F0u;
    // 0x2272f0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2272f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2272f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2272f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2272f8: 0x24a561b0  addiu       $a1, $a1, 0x61B0
    ctx->pc = 0x2272f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25008));
    // 0x2272fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2272fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227300: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x227300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227304: 0x24be0050  addiu       $fp, $a1, 0x50
    ctx->pc = 0x227304u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x227308: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x227308u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22730c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x22730cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227310: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x227310u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1561B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1561B6u, _value); } while (0);
    // 0x227314: 0x240c0009  addiu       $t4, $zero, 0x9
    ctx->pc = 0x227314u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x227318: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x227318u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1561C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1561C0u, _value); } while (0);
    // 0x22731c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x22731cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227320: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x227320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1561CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1561CCu, _value); } while (0);
    // 0x227324: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x227324u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227328: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x227328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1561D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1561D0u, _value); } while (0);
    // 0x22732c: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x22732cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x227330: 0xa4a20040  sh          $v0, 0x40($a1)
    ctx->pc = 0x227330u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1561F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1561F0u, _value); } while (0);
    // 0x227334: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x227334u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227338: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x227338u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1561B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1561B0u, _value); } while (0);
    // 0x22733c: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x22733cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x227340: 0xa4b40002  sh          $s4, 0x2($a1)
    ctx->pc = 0x227340u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x1561B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1561B2u, _value); } while (0);
    // 0x227344: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x227344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227348: 0xa4b40004  sh          $s4, 0x4($a1)
    ctx->pc = 0x227348u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x1561B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1561B4u, _value); } while (0);
    // 0x22734c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x22734cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227350: 0xa0b60008  sb          $s6, 0x8($a1)
    ctx->pc = 0x227350u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x1561B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1561B8u, _value); } while (0);
    // 0x227354: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x227354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x227358: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x227358u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1561B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1561B9u, _value); } while (0);
    // 0x22735c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22735cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227360: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x227360u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1561BAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1561BAu, _value); } while (0);
    // 0x227364: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x227364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227368: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x227368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1561C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1561C8u, _value); } while (0);
    // 0x22736c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x22736cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227370: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x227370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1561DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1561DCu, _value); } while (0);
    // 0x227374: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x227374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x227378: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x227378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1561E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1561E8u, _value); } while (0);
    // 0x22737c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x22737cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227380: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x227380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1561F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1561F4u, _value); } while (0);
    // 0x227384: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x227384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227388: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x227388u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1561ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1561ECu, _value); } while (0);
    // 0x22738c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x22738cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227390: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227390u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156240u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156240u, _value); } while (0);
    // 0x227394: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x227394u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227398: 0xa7d90000  sh          $t9, 0x0($fp)
    ctx->pc = 0x227398u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x156200u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156200u, _value); } while (0);
    // 0x22739c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x22739cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156210u, _value); } while (0);
    // 0x2273a0: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2273a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15621Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15621Cu, _value); } while (0);
    // 0x2273a4: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2273a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156220u, _value); } while (0);
    // 0x2273a8: 0xa7c00002  sh          $zero, 0x2($fp)
    ctx->pc = 0x2273a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156202u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156202u, _value); } while (0);
    // 0x2273ac: 0xa7c00004  sh          $zero, 0x4($fp)
    ctx->pc = 0x2273acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156204u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156204u, _value); } while (0);
    // 0x2273b0: 0xa7d40006  sh          $s4, 0x6($fp)
    ctx->pc = 0x2273b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x156206u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156206u, _value); } while (0);
    // 0x2273b4: 0xa3d60008  sb          $s6, 0x8($fp)
    ctx->pc = 0x2273b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x156208u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156208u, _value); } while (0);
    // 0x2273b8: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2273b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156209u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156209u, _value); } while (0);
    // 0x2273bc: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2273bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15620Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15620Au, _value); } while (0);
    // 0x2273c0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2273c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156218u, _value); } while (0);
    // 0x2273c4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2273c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15622Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15622Cu, _value); } while (0);
    // 0x2273c8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2273c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156238u, _value); } while (0);
    // 0x2273cc: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2273ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156244u, _value); } while (0);
    // 0x2273d0: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2273d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15623Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15623Cu, _value); } while (0);
    // 0x2273d4: 0x24be00a0  addiu       $fp, $a1, 0xA0
    ctx->pc = 0x2273d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x2273d8: 0xa7d40000  sh          $s4, 0x0($fp)
    ctx->pc = 0x2273d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x156250u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156250u, _value); } while (0);
    // 0x2273dc: 0xa7d90002  sh          $t9, 0x2($fp)
    ctx->pc = 0x2273dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x156252u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156252u, _value); } while (0);
    // 0x2273e0: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2273e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156290u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156290u, _value); } while (0);
    // 0x2273e4: 0xa7d90004  sh          $t9, 0x4($fp)
    ctx->pc = 0x2273e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x156254u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156254u, _value); } while (0);
    // 0x2273e8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2273e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156260u, _value); } while (0);
    // 0x2273ec: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2273ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15626Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15626Cu, _value); } while (0);
    // 0x2273f0: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2273f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156270u, _value); } while (0);
    // 0x2273f4: 0xa7d40006  sh          $s4, 0x6($fp)
    ctx->pc = 0x2273f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x156256u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156256u, _value); } while (0);
    // 0x2273f8: 0xa3d60008  sb          $s6, 0x8($fp)
    ctx->pc = 0x2273f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x156258u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156258u, _value); } while (0);
    // 0x2273fc: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2273fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156259u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156259u, _value); } while (0);
    // 0x227400: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227400u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15625Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15625Au, _value); } while (0);
    // 0x227404: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156268u, _value); } while (0);
    // 0x227408: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15627Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15627Cu, _value); } while (0);
    // 0x22740c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22740cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156288u, _value); } while (0);
    // 0x227410: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156294u, _value); } while (0);
    // 0x227414: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15628Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15628Cu, _value); } while (0);
    // 0x227418: 0x24be00f0  addiu       $fp, $a1, 0xF0
    ctx->pc = 0x227418u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x22741c: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x22741cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1562E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562E0u, _value); } while (0);
    // 0x227420: 0xa7d60000  sh          $s6, 0x0($fp)
    ctx->pc = 0x227420u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x1562A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562A0u, _value); } while (0);
    // 0x227424: 0xa7d60002  sh          $s6, 0x2($fp)
    ctx->pc = 0x227424u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x1562A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562A2u, _value); } while (0);
    // 0x227428: 0xa7d60004  sh          $s6, 0x4($fp)
    ctx->pc = 0x227428u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x1562A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562A4u, _value); } while (0);
    // 0x22742c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x22742cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1562B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1562B0u, _value); } while (0);
    // 0x227430: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1562BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1562BCu, _value); } while (0);
    // 0x227434: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1562C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1562C0u, _value); } while (0);
    // 0x227438: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x227438u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562A6u, _value); } while (0);
    // 0x22743c: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x22743cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1562A8u, _value); } while (0);
    // 0x227440: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227440u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1562A9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1562A9u, _value); } while (0);
    // 0x227444: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227444u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1562AAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1562AAu, _value); } while (0);
    // 0x227448: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1562B8u, _value); } while (0);
    // 0x22744c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22744cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1562CCu, _value); } while (0);
    // 0x227450: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1562D8u, _value); } while (0);
    // 0x227454: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1562E4u, _value); } while (0);
    // 0x227458: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1562DCu, _value); } while (0);
    // 0x22745c: 0x24be0140  addiu       $fp, $a1, 0x140
    ctx->pc = 0x22745cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x227460: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x227460u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1562F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562F0u, _value); } while (0);
    // 0x227464: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x227464u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1562F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562F2u, _value); } while (0);
    // 0x227468: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x227468u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1562F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562F4u, _value); } while (0);
    // 0x22746c: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x22746cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1562F6u, _value); } while (0);
    // 0x227470: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227470u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156330u, _value); } while (0);
    // 0x227474: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x227474u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1562F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1562F8u, _value); } while (0);
    // 0x227478: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156300u, _value); } while (0);
    // 0x22747c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x22747cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15630Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15630Cu, _value); } while (0);
    // 0x227480: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156310u, _value); } while (0);
    // 0x227484: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227484u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1562F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1562F9u, _value); } while (0);
    // 0x227488: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227488u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1562FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1562FAu, _value); } while (0);
    // 0x22748c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22748cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156308u, _value); } while (0);
    // 0x227490: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15631Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15631Cu, _value); } while (0);
    // 0x227494: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156328u, _value); } while (0);
    // 0x227498: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156334u, _value); } while (0);
    // 0x22749c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22749cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15632Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15632Cu, _value); } while (0);
    // 0x2274a0: 0x24be0190  addiu       $fp, $a1, 0x190
    ctx->pc = 0x2274a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2274a4: 0xa7c70004  sh          $a3, 0x4($fp)
    ctx->pc = 0x2274a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x156344u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156344u, _value); } while (0);
    // 0x2274a8: 0xa7c70000  sh          $a3, 0x0($fp)
    ctx->pc = 0x2274a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x156340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156340u, _value); } while (0);
    // 0x2274ac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2274acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2274b0: 0xa7cc0002  sh          $t4, 0x2($fp)
    ctx->pc = 0x2274b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x156342u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156342u, _value); } while (0);
    // 0x2274b4: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2274b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156380u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156380u, _value); } while (0);
    // 0x2274b8: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x2274b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156346u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156346u, _value); } while (0);
    // 0x2274bc: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x2274bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156348u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156348u, _value); } while (0);
    // 0x2274c0: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2274c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156350u, _value); } while (0);
    // 0x2274c4: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2274c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15635Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15635Cu, _value); } while (0);
    // 0x2274c8: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2274c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156360u, _value); } while (0);
    // 0x2274cc: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2274ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156349u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156349u, _value); } while (0);
    // 0x2274d0: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2274d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15634Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15634Au, _value); } while (0);
    // 0x2274d4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2274d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156358u, _value); } while (0);
    // 0x2274d8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2274d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15636Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15636Cu, _value); } while (0);
    // 0x2274dc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2274dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156378u, _value); } while (0);
    // 0x2274e0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2274e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156384u, _value); } while (0);
    // 0x2274e4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2274e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15637Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15637Cu, _value); } while (0);
    // 0x2274e8: 0x24be01e0  addiu       $fp, $a1, 0x1E0
    ctx->pc = 0x2274e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    // 0x2274ec: 0xa7ce0004  sh          $t6, 0x4($fp)
    ctx->pc = 0x2274ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x156394u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156394u, _value); } while (0);
    // 0x2274f0: 0xa7ce0000  sh          $t6, 0x0($fp)
    ctx->pc = 0x2274f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x156390u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156390u, _value); } while (0);
    // 0x2274f4: 0x240e000b  addiu       $t6, $zero, 0xB
    ctx->pc = 0x2274f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2274f8: 0xa7cd0002  sh          $t5, 0x2($fp)
    ctx->pc = 0x2274f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x156392u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156392u, _value); } while (0);
    // 0x2274fc: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x2274fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156396u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156396u, _value); } while (0);
    // 0x227500: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x227500u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156398u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156398u, _value); } while (0);
    // 0x227504: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227504u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156399u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156399u, _value); } while (0);
    // 0x227508: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227508u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1563D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1563D0u, _value); } while (0);
    // 0x22750c: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x22750cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15639Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15639Au, _value); } while (0);
    // 0x227510: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1563A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563A0u, _value); } while (0);
    // 0x227514: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1563ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563ACu, _value); } while (0);
    // 0x227518: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1563B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563B0u, _value); } while (0);
    // 0x22751c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22751cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1563A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563A8u, _value); } while (0);
    // 0x227520: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1563BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563BCu, _value); } while (0);
    // 0x227524: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1563C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563C8u, _value); } while (0);
    // 0x227528: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1563D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563D4u, _value); } while (0);
    // 0x22752c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22752cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1563CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563CCu, _value); } while (0);
    // 0x227530: 0x24be0230  addiu       $fp, $a1, 0x230
    ctx->pc = 0x227530u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 560));
    // 0x227534: 0xa7cf0004  sh          $t7, 0x4($fp)
    ctx->pc = 0x227534u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1563E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1563E4u, _value); } while (0);
    // 0x227538: 0xa7cf0000  sh          $t7, 0x0($fp)
    ctx->pc = 0x227538u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1563E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1563E0u, _value); } while (0);
    // 0x22753c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x22753cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227540: 0xa7ce0002  sh          $t6, 0x2($fp)
    ctx->pc = 0x227540u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x1563E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1563E2u, _value); } while (0);
    // 0x227544: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227544u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156420u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156420u, _value); } while (0);
    // 0x227548: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x227548u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1563E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1563E6u, _value); } while (0);
    // 0x22754c: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x22754cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1563E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1563E8u, _value); } while (0);
    // 0x227550: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227550u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1563E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1563E9u, _value); } while (0);
    // 0x227554: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227554u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1563EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1563EAu, _value); } while (0);
    // 0x227558: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1563F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563F0u, _value); } while (0);
    // 0x22755c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x22755cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1563FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563FCu, _value); } while (0);
    // 0x227560: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156400u, _value); } while (0);
    // 0x227564: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1563F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1563F8u, _value); } while (0);
    // 0x227568: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15640Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15640Cu, _value); } while (0);
    // 0x22756c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22756cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156418u, _value); } while (0);
    // 0x227570: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156424u, _value); } while (0);
    // 0x227574: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15641Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15641Cu, _value); } while (0);
    // 0x227578: 0x24be0280  addiu       $fp, $a1, 0x280
    ctx->pc = 0x227578u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x22757c: 0xa7d00004  sh          $s0, 0x4($fp)
    ctx->pc = 0x22757cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x156434u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156434u, _value); } while (0);
    // 0x227580: 0xa7d00000  sh          $s0, 0x0($fp)
    ctx->pc = 0x227580u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x156430u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156430u, _value); } while (0);
    // 0x227584: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x227584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227588: 0xa7d70002  sh          $s7, 0x2($fp)
    ctx->pc = 0x227588u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x156432u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156432u, _value); } while (0);
    // 0x22758c: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x22758cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156436u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156436u, _value); } while (0);
    // 0x227590: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x227590u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156438u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156438u, _value); } while (0);
    // 0x227594: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227594u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156439u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156439u, _value); } while (0);
    // 0x227598: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227598u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15643Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15643Au, _value); } while (0);
    // 0x22759c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22759cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156448u, _value); } while (0);
    // 0x2275a0: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2275a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156470u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156470u, _value); } while (0);
    // 0x2275a4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2275a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15645Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15645Cu, _value); } while (0);
    // 0x2275a8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2275a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156440u, _value); } while (0);
    // 0x2275ac: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2275acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15644Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15644Cu, _value); } while (0);
    // 0x2275b0: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2275b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156450u, _value); } while (0);
    // 0x2275b4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2275b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156468u, _value); } while (0);
    // 0x2275b8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2275b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156474u, _value); } while (0);
    // 0x2275bc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2275bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15646Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15646Cu, _value); } while (0);
    // 0x2275c0: 0x24be02d0  addiu       $fp, $a1, 0x2D0
    ctx->pc = 0x2275c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    // 0x2275c4: 0xa7cc0000  sh          $t4, 0x0($fp)
    ctx->pc = 0x2275c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x156480u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156480u, _value); } while (0);
    // 0x2275c8: 0xa7cc0004  sh          $t4, 0x4($fp)
    ctx->pc = 0x2275c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x156484u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156484u, _value); } while (0);
    // 0x2275cc: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2275ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1564C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1564C0u, _value); } while (0);
    // 0x2275d0: 0xa7d60002  sh          $s6, 0x2($fp)
    ctx->pc = 0x2275d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x156482u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156482u, _value); } while (0);
    // 0x2275d4: 0xa7d90006  sh          $t9, 0x6($fp)
    ctx->pc = 0x2275d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x156486u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156486u, _value); } while (0);
    // 0x2275d8: 0xa3d80008  sb          $t8, 0x8($fp)
    ctx->pc = 0x2275d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x156488u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156488u, _value); } while (0);
    // 0x2275dc: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2275dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156489u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156489u, _value); } while (0);
    // 0x2275e0: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2275e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15648Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15648Au, _value); } while (0);
    // 0x2275e4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2275e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156498u, _value); } while (0);
    // 0x2275e8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2275e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1564ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564ACu, _value); } while (0);
    // 0x2275ec: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2275ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156490u, _value); } while (0);
    // 0x2275f0: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2275f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15649Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15649Cu, _value); } while (0);
    // 0x2275f4: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2275f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1564A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564A0u, _value); } while (0);
    // 0x2275f8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2275f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1564B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564B8u, _value); } while (0);
    // 0x2275fc: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2275fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1564C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564C4u, _value); } while (0);
    // 0x227600: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1564BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564BCu, _value); } while (0);
    // 0x227604: 0x24be0320  addiu       $fp, $a1, 0x320
    ctx->pc = 0x227604u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
    // 0x227608: 0xa7cd0000  sh          $t5, 0x0($fp)
    ctx->pc = 0x227608u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1564D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1564D0u, _value); } while (0);
    // 0x22760c: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x22760cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1564D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1564D2u, _value); } while (0);
    // 0x227610: 0xa7cd0004  sh          $t5, 0x4($fp)
    ctx->pc = 0x227610u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1564D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1564D4u, _value); } while (0);
    // 0x227614: 0xa7d90006  sh          $t9, 0x6($fp)
    ctx->pc = 0x227614u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x1564D6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1564D6u, _value); } while (0);
    // 0x227618: 0xa3d80008  sb          $t8, 0x8($fp)
    ctx->pc = 0x227618u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x1564D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1564D8u, _value); } while (0);
    // 0x22761c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x22761cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1564D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1564D9u, _value); } while (0);
    // 0x227620: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227620u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1564DAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1564DAu, _value); } while (0);
    // 0x227624: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1564E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564E8u, _value); } while (0);
    // 0x227628: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1564FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564FCu, _value); } while (0);
    // 0x22762c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x22762cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1564E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564E0u, _value); } while (0);
    // 0x227630: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1564ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564ECu, _value); } while (0);
    // 0x227634: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227634u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156510u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156510u, _value); } while (0);
    // 0x227638: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1564F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1564F0u, _value); } while (0);
    // 0x22763c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22763cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156508u, _value); } while (0);
    // 0x227640: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156514u, _value); } while (0);
    // 0x227644: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227644u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15650Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15650Cu, _value); } while (0);
    // 0x227648: 0x24be0370  addiu       $fp, $a1, 0x370
    ctx->pc = 0x227648u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x22764c: 0xa7cc0002  sh          $t4, 0x2($fp)
    ctx->pc = 0x22764cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x156522u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156522u, _value); } while (0);
    // 0x227650: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x227650u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227654: 0xa7ce0000  sh          $t6, 0x0($fp)
    ctx->pc = 0x227654u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x156520u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156520u, _value); } while (0);
    // 0x227658: 0xa7ce0004  sh          $t6, 0x4($fp)
    ctx->pc = 0x227658u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x156524u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156524u, _value); } while (0);
    // 0x22765c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x22765cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227660: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156530u, _value); } while (0);
    // 0x227664: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15653Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15653Cu, _value); } while (0);
    // 0x227668: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227668u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156560u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156560u, _value); } while (0);
    // 0x22766c: 0xa7d90006  sh          $t9, 0x6($fp)
    ctx->pc = 0x22766cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x156526u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156526u, _value); } while (0);
    // 0x227670: 0xa3d80008  sb          $t8, 0x8($fp)
    ctx->pc = 0x227670u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x156528u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156528u, _value); } while (0);
    // 0x227674: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227674u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156529u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156529u, _value); } while (0);
    // 0x227678: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227678u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15652Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15652Au, _value); } while (0);
    // 0x22767c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22767cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156538u, _value); } while (0);
    // 0x227680: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15654Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15654Cu, _value); } while (0);
    // 0x227684: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156540u, _value); } while (0);
    // 0x227688: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156558u, _value); } while (0);
    // 0x22768c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22768cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156564u, _value); } while (0);
    // 0x227690: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15655Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15655Cu, _value); } while (0);
    // 0x227694: 0x24be03c0  addiu       $fp, $a1, 0x3C0
    ctx->pc = 0x227694u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x227698: 0xa7cd0002  sh          $t5, 0x2($fp)
    ctx->pc = 0x227698u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x156572u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156572u, _value); } while (0);
    // 0x22769c: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x22769cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2276a0: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2276a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156580u, _value); } while (0);
    // 0x2276a4: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2276a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15658Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15658Cu, _value); } while (0);
    // 0x2276a8: 0xa7d70000  sh          $s7, 0x0($fp)
    ctx->pc = 0x2276a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x156570u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156570u, _value); } while (0);
    // 0x2276ac: 0xa7d70004  sh          $s7, 0x4($fp)
    ctx->pc = 0x2276acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x156574u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156574u, _value); } while (0);
    // 0x2276b0: 0xa7d90006  sh          $t9, 0x6($fp)
    ctx->pc = 0x2276b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x156576u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156576u, _value); } while (0);
    // 0x2276b4: 0xa3d80008  sb          $t8, 0x8($fp)
    ctx->pc = 0x2276b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x156578u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156578u, _value); } while (0);
    // 0x2276b8: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2276b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156579u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156579u, _value); } while (0);
    // 0x2276bc: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2276bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15657Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15657Au, _value); } while (0);
    // 0x2276c0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2276c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156588u, _value); } while (0);
    // 0x2276c4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2276c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15659Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15659Cu, _value); } while (0);
    // 0x2276c8: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2276c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156590u, _value); } while (0);
    // 0x2276cc: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2276ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1565B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1565B0u, _value); } while (0);
    // 0x2276d0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2276d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1565A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565A8u, _value); } while (0);
    // 0x2276d4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2276d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1565B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565B4u, _value); } while (0);
    // 0x2276d8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2276d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1565ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565ACu, _value); } while (0);
    // 0x2276dc: 0x24be0410  addiu       $fp, $a1, 0x410
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1040));
    // 0x2276e0: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2276e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1565C2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1565C2u, _value); } while (0);
    // 0x2276e4: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2276e8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2276e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1565C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1565C0u, _value); } while (0);
    // 0x2276ec: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2276ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1565C4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1565C4u, _value); } while (0);
    // 0x2276f0: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x2276f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2276f4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2276f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1565D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565D0u, _value); } while (0);
    // 0x2276f8: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2276f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1565DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565DCu, _value); } while (0);
    // 0x2276fc: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2276fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1565E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565E0u, _value); } while (0);
    // 0x227700: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227700u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156600u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156600u, _value); } while (0);
    // 0x227704: 0xa7d90006  sh          $t9, 0x6($fp)
    ctx->pc = 0x227704u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x1565C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1565C6u, _value); } while (0);
    // 0x227708: 0xa3d80008  sb          $t8, 0x8($fp)
    ctx->pc = 0x227708u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x1565C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1565C8u, _value); } while (0);
    // 0x22770c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x22770cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1565C9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1565C9u, _value); } while (0);
    // 0x227710: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227710u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1565CAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1565CAu, _value); } while (0);
    // 0x227714: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1565D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565D8u, _value); } while (0);
    // 0x227718: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227718u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1565ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565ECu, _value); } while (0);
    // 0x22771c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22771cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1565F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565F8u, _value); } while (0);
    // 0x227720: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227720u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156604u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156604u, _value); } while (0);
    // 0x227724: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1565FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1565FCu, _value); } while (0);
    // 0x227728: 0x24be0460  addiu       $fp, $a1, 0x460
    ctx->pc = 0x227728u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1120));
    // 0x22772c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x22772cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156610u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156610u, _value); } while (0);
    // 0x227730: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227730u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156614u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156614u, _value); } while (0);
    // 0x227734: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x227734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227738: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156620u, _value); } while (0);
    // 0x22773c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x22773cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15662Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15662Cu, _value); } while (0);
    // 0x227740: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156630u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156630u, _value); } while (0);
    // 0x227744: 0xa7d70002  sh          $s7, 0x2($fp)
    ctx->pc = 0x227744u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x156612u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156612u, _value); } while (0);
    // 0x227748: 0xa7d90006  sh          $t9, 0x6($fp)
    ctx->pc = 0x227748u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x156616u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156616u, _value); } while (0);
    // 0x22774c: 0xa3d80008  sb          $t8, 0x8($fp)
    ctx->pc = 0x22774cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x156618u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156618u, _value); } while (0);
    // 0x227750: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227750u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156619u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156619u, _value); } while (0);
    // 0x227754: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227754u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15661Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15661Au, _value); } while (0);
    // 0x227758: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156628u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156628u, _value); } while (0);
    // 0x22775c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22775cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15663Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15663Cu, _value); } while (0);
    // 0x227760: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156648u, _value); } while (0);
    // 0x227764: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156654u, _value); } while (0);
    // 0x227768: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227768u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156650u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156650u, _value); } while (0);
    // 0x22776c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22776cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15664Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15664Cu, _value); } while (0);
    // 0x227770: 0x24be04b0  addiu       $fp, $a1, 0x4B0
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1200));
    // 0x227774: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227774u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156660u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156660u, _value); } while (0);
    // 0x227778: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x227778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22777c: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x22777cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156664u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156664u, _value); } while (0);
    // 0x227780: 0xa3d20008  sb          $s2, 0x8($fp)
    ctx->pc = 0x227780u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156668u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156668u, _value); } while (0);
    // 0x227784: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156670u, _value); } while (0);
    // 0x227788: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227788u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15667Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15667Cu, _value); } while (0);
    // 0x22778c: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x22778cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156680u, _value); } while (0);
    // 0x227790: 0xa7d60002  sh          $s6, 0x2($fp)
    ctx->pc = 0x227790u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x156662u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156662u, _value); } while (0);
    // 0x227794: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227794u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1566A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1566A0u, _value); } while (0);
    // 0x227798: 0xa7d40006  sh          $s4, 0x6($fp)
    ctx->pc = 0x227798u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x156666u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156666u, _value); } while (0);
    // 0x22779c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x22779cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156669u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156669u, _value); } while (0);
    // 0x2277a0: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2277a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15666Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15666Au, _value); } while (0);
    // 0x2277a4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2277a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156678u, _value); } while (0);
    // 0x2277a8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2277a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15668Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15668Cu, _value); } while (0);
    // 0x2277ac: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2277acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156698u, _value); } while (0);
    // 0x2277b0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2277b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1566A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566A4u, _value); } while (0);
    // 0x2277b4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2277b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15669Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15669Cu, _value); } while (0);
    // 0x2277b8: 0x24be0500  addiu       $fp, $a1, 0x500
    ctx->pc = 0x2277b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
    // 0x2277bc: 0xa3d20008  sb          $s2, 0x8($fp)
    ctx->pc = 0x2277bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1566B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1566B8u, _value); } while (0);
    // 0x2277c0: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2277c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2277c4: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2277c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1566B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1566B0u, _value); } while (0);
    // 0x2277c8: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x2277c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2277cc: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x2277ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1566B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1566B2u, _value); } while (0);
    // 0x2277d0: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x2277d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1566B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1566B4u, _value); } while (0);
    // 0x2277d4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2277d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1566C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566C0u, _value); } while (0);
    // 0x2277d8: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2277d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1566CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566CCu, _value); } while (0);
    // 0x2277dc: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2277dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1566D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566D0u, _value); } while (0);
    // 0x2277e0: 0xa7d40006  sh          $s4, 0x6($fp)
    ctx->pc = 0x2277e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x1566B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1566B6u, _value); } while (0);
    // 0x2277e4: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2277e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1566B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1566B9u, _value); } while (0);
    // 0x2277e8: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2277e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1566BAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1566BAu, _value); } while (0);
    // 0x2277ec: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2277ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1566C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566C8u, _value); } while (0);
    // 0x2277f0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2277f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1566DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566DCu, _value); } while (0);
    // 0x2277f4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2277f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1566E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566E8u, _value); } while (0);
    // 0x2277f8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2277f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1566F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566F4u, _value); } while (0);
    // 0x2277fc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2277fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1566ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1566ECu, _value); } while (0);
    // 0x227800: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227800u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1566F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1566F0u, _value); } while (0);
    // 0x227804: 0x24be0550  addiu       $fp, $a1, 0x550
    ctx->pc = 0x227804u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1360));
    // 0x227808: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227808u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156702u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156702u, _value); } while (0);
    // 0x22780c: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x22780cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x227810: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227810u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156700u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156700u, _value); } while (0);
    // 0x227814: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x227814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227818: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227818u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156740u, _value); } while (0);
    // 0x22781c: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x22781cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156704u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156704u, _value); } while (0);
    // 0x227820: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227820u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156706u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156706u, _value); } while (0);
    // 0x227824: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156710u, _value); } while (0);
    // 0x227828: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15671Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15671Cu, _value); } while (0);
    // 0x22782c: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x22782cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156720u, _value); } while (0);
    // 0x227830: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227830u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156708u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156708u, _value); } while (0);
    // 0x227834: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227834u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156709u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156709u, _value); } while (0);
    // 0x227838: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227838u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15670Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15670Au, _value); } while (0);
    // 0x22783c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22783cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156718u, _value); } while (0);
    // 0x227840: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227840u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15672Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15672Cu, _value); } while (0);
    // 0x227844: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156738u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156738u, _value); } while (0);
    // 0x227848: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156744u, _value); } while (0);
    // 0x22784c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22784cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15673Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15673Cu, _value); } while (0);
    // 0x227850: 0x24be05a0  addiu       $fp, $a1, 0x5A0
    ctx->pc = 0x227850u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1440));
    // 0x227854: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227854u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156752u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156752u, _value); } while (0);
    // 0x227858: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x227858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x22785c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x22785cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156750u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156750u, _value); } while (0);
    // 0x227860: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x227860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x227864: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227864u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156790u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156790u, _value); } while (0);
    // 0x227868: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x227868u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156754u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156754u, _value); } while (0);
    // 0x22786c: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x22786cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156756u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156756u, _value); } while (0);
    // 0x227870: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156760u, _value); } while (0);
    // 0x227874: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15676Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15676Cu, _value); } while (0);
    // 0x227878: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156770u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156770u, _value); } while (0);
    // 0x22787c: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x22787cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156758u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156758u, _value); } while (0);
    // 0x227880: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227880u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156759u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156759u, _value); } while (0);
    // 0x227884: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227884u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15675Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15675Au, _value); } while (0);
    // 0x227888: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156768u, _value); } while (0);
    // 0x22788c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22788cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15677Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15677Cu, _value); } while (0);
    // 0x227890: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156788u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156788u, _value); } while (0);
    // 0x227894: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156794u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156794u, _value); } while (0);
    // 0x227898: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15678Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15678Cu, _value); } while (0);
    // 0x22789c: 0x24be05f0  addiu       $fp, $a1, 0x5F0
    ctx->pc = 0x22789cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
    // 0x2278a0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2278a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1567A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567A0u, _value); } while (0);
    // 0x2278a4: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x2278a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2278a8: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2278a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1567A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567A2u, _value); } while (0);
    // 0x2278ac: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2278acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2278b0: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x2278b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1567A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567A4u, _value); } while (0);
    // 0x2278b4: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2278b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1567E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567E0u, _value); } while (0);
    // 0x2278b8: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x2278b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1567A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567A6u, _value); } while (0);
    // 0x2278bc: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2278bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1567B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1567B0u, _value); } while (0);
    // 0x2278c0: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2278c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1567BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1567BCu, _value); } while (0);
    // 0x2278c4: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2278c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1567C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1567C0u, _value); } while (0);
    // 0x2278c8: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x2278c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1567A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1567A8u, _value); } while (0);
    // 0x2278cc: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2278ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1567A9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1567A9u, _value); } while (0);
    // 0x2278d0: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2278d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1567AAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1567AAu, _value); } while (0);
    // 0x2278d4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2278d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1567B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1567B8u, _value); } while (0);
    // 0x2278d8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2278d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1567CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1567CCu, _value); } while (0);
    // 0x2278dc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2278dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1567D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1567D8u, _value); } while (0);
    // 0x2278e0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2278e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1567E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1567E4u, _value); } while (0);
    // 0x2278e4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2278e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1567DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1567DCu, _value); } while (0);
    // 0x2278e8: 0x24be0640  addiu       $fp, $a1, 0x640
    ctx->pc = 0x2278e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x2278ec: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2278ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1567F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567F2u, _value); } while (0);
    // 0x2278f0: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x2278f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2278f4: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2278f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1567F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567F0u, _value); } while (0);
    // 0x2278f8: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x2278f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2278fc: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2278fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1567F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567F4u, _value); } while (0);
    // 0x227900: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227900u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156830u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156830u, _value); } while (0);
    // 0x227904: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227904u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1567F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1567F6u, _value); } while (0);
    // 0x227908: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156800u, _value); } while (0);
    // 0x22790c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x22790cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15680Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15680Cu, _value); } while (0);
    // 0x227910: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156810u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156810u, _value); } while (0);
    // 0x227914: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227914u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1567F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1567F8u, _value); } while (0);
    // 0x227918: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227918u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1567F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1567F9u, _value); } while (0);
    // 0x22791c: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x22791cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1567FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1567FAu, _value); } while (0);
    // 0x227920: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156808u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156808u, _value); } while (0);
    // 0x227924: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15681Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15681Cu, _value); } while (0);
    // 0x227928: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156828u, _value); } while (0);
    // 0x22792c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22792cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156834u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156834u, _value); } while (0);
    // 0x227930: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15682Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15682Cu, _value); } while (0);
    // 0x227934: 0x24be0690  addiu       $fp, $a1, 0x690
    ctx->pc = 0x227934u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1680));
    // 0x227938: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227938u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156842u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156842u, _value); } while (0);
    // 0x22793c: 0x24120015  addiu       $s2, $zero, 0x15
    ctx->pc = 0x22793cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x227940: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227940u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156840u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156840u, _value); } while (0);
    // 0x227944: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x227944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x227948: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227948u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156844u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156844u, _value); } while (0);
    // 0x22794c: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x22794cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156846u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156846u, _value); } while (0);
    // 0x227950: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227950u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156880u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156880u, _value); } while (0);
    // 0x227954: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227954u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156848u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156848u, _value); } while (0);
    // 0x227958: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227958u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156850u, _value); } while (0);
    // 0x22795c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x22795cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15685Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15685Cu, _value); } while (0);
    // 0x227960: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156860u, _value); } while (0);
    // 0x227964: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227964u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156849u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156849u, _value); } while (0);
    // 0x227968: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227968u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15684Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15684Au, _value); } while (0);
    // 0x22796c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22796cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156858u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156858u, _value); } while (0);
    // 0x227970: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15686Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15686Cu, _value); } while (0);
    // 0x227974: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227974u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156878u, _value); } while (0);
    // 0x227978: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156884u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156884u, _value); } while (0);
    // 0x22797c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22797cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15687Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15687Cu, _value); } while (0);
    // 0x227980: 0x24be06e0  addiu       $fp, $a1, 0x6E0
    ctx->pc = 0x227980u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
    // 0x227984: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227984u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156892u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156892u, _value); } while (0);
    // 0x227988: 0x24120016  addiu       $s2, $zero, 0x16
    ctx->pc = 0x227988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22798c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x22798cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156890u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156890u, _value); } while (0);
    // 0x227990: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x227990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x227994: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227994u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156894u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156894u, _value); } while (0);
    // 0x227998: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227998u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156896u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156896u, _value); } while (0);
    // 0x22799c: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x22799cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1568D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1568D0u, _value); } while (0);
    // 0x2279a0: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x2279a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156898u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156898u, _value); } while (0);
    // 0x2279a4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2279a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1568A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568A0u, _value); } while (0);
    // 0x2279a8: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2279a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1568ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568ACu, _value); } while (0);
    // 0x2279ac: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2279acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1568B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568B0u, _value); } while (0);
    // 0x2279b0: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2279b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156899u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156899u, _value); } while (0);
    // 0x2279b4: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2279b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15689Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15689Au, _value); } while (0);
    // 0x2279b8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2279b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1568A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568A8u, _value); } while (0);
    // 0x2279bc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2279bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1568BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568BCu, _value); } while (0);
    // 0x2279c0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2279c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1568C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568C8u, _value); } while (0);
    // 0x2279c4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2279c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1568D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568D4u, _value); } while (0);
    // 0x2279c8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2279c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1568CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568CCu, _value); } while (0);
    // 0x2279cc: 0x24be0730  addiu       $fp, $a1, 0x730
    ctx->pc = 0x2279ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1840));
    // 0x2279d0: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2279d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1568E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1568E2u, _value); } while (0);
    // 0x2279d4: 0x24120017  addiu       $s2, $zero, 0x17
    ctx->pc = 0x2279d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2279d8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2279d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1568E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1568E0u, _value); } while (0);
    // 0x2279dc: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x2279dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2279e0: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2279e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1568E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1568E4u, _value); } while (0);
    // 0x2279e4: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x2279e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1568E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1568E6u, _value); } while (0);
    // 0x2279e8: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x2279e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1568E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1568E8u, _value); } while (0);
    // 0x2279ec: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2279ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1568E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1568E9u, _value); } while (0);
    // 0x2279f0: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2279f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156920u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156920u, _value); } while (0);
    // 0x2279f4: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2279f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1568EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1568EAu, _value); } while (0);
    // 0x2279f8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2279f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1568F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568F0u, _value); } while (0);
    // 0x2279fc: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2279fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1568FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568FCu, _value); } while (0);
    // 0x227a00: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156900u, _value); } while (0);
    // 0x227a04: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1568F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1568F8u, _value); } while (0);
    // 0x227a08: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15690Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15690Cu, _value); } while (0);
    // 0x227a0c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227a0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156918u, _value); } while (0);
    // 0x227a10: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156924u, _value); } while (0);
    // 0x227a14: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15691Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15691Cu, _value); } while (0);
    // 0x227a18: 0x24be0780  addiu       $fp, $a1, 0x780
    ctx->pc = 0x227a18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1920));
    // 0x227a1c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227a1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156932u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156932u, _value); } while (0);
    // 0x227a20: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x227a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x227a24: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227a24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156930u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156930u, _value); } while (0);
    // 0x227a28: 0x24120015  addiu       $s2, $zero, 0x15
    ctx->pc = 0x227a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x227a2c: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227a2cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156934u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156934u, _value); } while (0);
    // 0x227a30: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227a30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156936u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156936u, _value); } while (0);
    // 0x227a34: 0xa3c20008  sb          $v0, 0x8($fp)
    ctx->pc = 0x227a34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156938u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156938u, _value); } while (0);
    // 0x227a38: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227a38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156970u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156970u, _value); } while (0);
    // 0x227a3c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227a3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156939u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156939u, _value); } while (0);
    // 0x227a40: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227a40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15693Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15693Au, _value); } while (0);
    // 0x227a44: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227a44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156940u, _value); } while (0);
    // 0x227a48: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227a48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15694Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15694Cu, _value); } while (0);
    // 0x227a4c: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227a4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156950u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156950u, _value); } while (0);
    // 0x227a50: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227a50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156948u, _value); } while (0);
    // 0x227a54: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15695Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15695Cu, _value); } while (0);
    // 0x227a58: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156968u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156968u, _value); } while (0);
    // 0x227a5c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227a5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156974u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156974u, _value); } while (0);
    // 0x227a60: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15696Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15696Cu, _value); } while (0);
    // 0x227a64: 0x24be07d0  addiu       $fp, $a1, 0x7D0
    ctx->pc = 0x227a64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2000));
    // 0x227a68: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227a68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156982u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156982u, _value); } while (0);
    // 0x227a6c: 0x24120019  addiu       $s2, $zero, 0x19
    ctx->pc = 0x227a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x227a70: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227a70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156980u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156980u, _value); } while (0);
    // 0x227a74: 0x24120016  addiu       $s2, $zero, 0x16
    ctx->pc = 0x227a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x227a78: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227a78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156984u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156984u, _value); } while (0);
    // 0x227a7c: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227a7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156986u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156986u, _value); } while (0);
    // 0x227a80: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227a80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156988u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156988u, _value); } while (0);
    // 0x227a84: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227a84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156989u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156989u, _value); } while (0);
    // 0x227a88: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227a88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15698Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15698Au, _value); } while (0);
    // 0x227a8c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156998u, _value); } while (0);
    // 0x227a90: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227a90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1569C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1569C0u, _value); } while (0);
    // 0x227a94: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1569ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569ACu, _value); } while (0);
    // 0x227a98: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156990u, _value); } while (0);
    // 0x227a9c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227a9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15699Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15699Cu, _value); } while (0);
    // 0x227aa0: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227aa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1569A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569A0u, _value); } while (0);
    // 0x227aa4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1569B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569B8u, _value); } while (0);
    // 0x227aa8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227aa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1569C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569C4u, _value); } while (0);
    // 0x227aac: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1569BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569BCu, _value); } while (0);
    // 0x227ab0: 0x24be0820  addiu       $fp, $a1, 0x820
    ctx->pc = 0x227ab0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
    // 0x227ab4: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227ab4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1569D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1569D2u, _value); } while (0);
    // 0x227ab8: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x227ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x227abc: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227abcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1569D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1569D0u, _value); } while (0);
    // 0x227ac0: 0x24120017  addiu       $s2, $zero, 0x17
    ctx->pc = 0x227ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x227ac4: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227ac4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1569D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1569D4u, _value); } while (0);
    // 0x227ac8: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227ac8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1569D6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1569D6u, _value); } while (0);
    // 0x227acc: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227accu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156A10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A10u, _value); } while (0);
    // 0x227ad0: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227ad0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1569D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1569D8u, _value); } while (0);
    // 0x227ad4: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227ad4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1569D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1569D9u, _value); } while (0);
    // 0x227ad8: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227ad8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1569DAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1569DAu, _value); } while (0);
    // 0x227adc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1569E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569E8u, _value); } while (0);
    // 0x227ae0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1569FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569FCu, _value); } while (0);
    // 0x227ae4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1569E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569E0u, _value); } while (0);
    // 0x227ae8: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1569ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569ECu, _value); } while (0);
    // 0x227aec: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227aecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1569F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1569F0u, _value); } while (0);
    // 0x227af0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227af0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A08u, _value); } while (0);
    // 0x227af4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A14u, _value); } while (0);
    // 0x227af8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A0Cu, _value); } while (0);
    // 0x227afc: 0x24be0870  addiu       $fp, $a1, 0x870
    ctx->pc = 0x227afcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2160));
    // 0x227b00: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227b00u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156A22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A22u, _value); } while (0);
    // 0x227b04: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x227b08: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227b08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156A20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A20u, _value); } while (0);
    // 0x227b0c: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x227b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x227b10: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227b10u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156A24u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A24u, _value); } while (0);
    // 0x227b14: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227b14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156A26u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A26u, _value); } while (0);
    // 0x227b18: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227b18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156A28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156A28u, _value); } while (0);
    // 0x227b1c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227b1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156A29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156A29u, _value); } while (0);
    // 0x227b20: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227b20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156A2Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156A2Au, _value); } while (0);
    // 0x227b24: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A38u, _value); } while (0);
    // 0x227b28: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A4Cu, _value); } while (0);
    // 0x227b2c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A30u, _value); } while (0);
    // 0x227b30: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A3Cu, _value); } while (0);
    // 0x227b34: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227b34u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156A60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A60u, _value); } while (0);
    // 0x227b38: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A40u, _value); } while (0);
    // 0x227b3c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A58u, _value); } while (0);
    // 0x227b40: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A64u, _value); } while (0);
    // 0x227b44: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227b44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A5Cu, _value); } while (0);
    // 0x227b48: 0x24be08c0  addiu       $fp, $a1, 0x8C0
    ctx->pc = 0x227b48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2240));
    // 0x227b4c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227b4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156A72u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A72u, _value); } while (0);
    // 0x227b50: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x227b54: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227b54u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156A70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A70u, _value); } while (0);
    // 0x227b58: 0x24120019  addiu       $s2, $zero, 0x19
    ctx->pc = 0x227b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x227b5c: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227b5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156A74u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A74u, _value); } while (0);
    // 0x227b60: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227b60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156A76u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156A76u, _value); } while (0);
    // 0x227b64: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227b64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A80u, _value); } while (0);
    // 0x227b68: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227b68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A8Cu, _value); } while (0);
    // 0x227b6c: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227b6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156AB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156AB0u, _value); } while (0);
    // 0x227b70: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227b70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156A78u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156A78u, _value); } while (0);
    // 0x227b74: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227b74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156A79u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156A79u, _value); } while (0);
    // 0x227b78: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227b78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156A7Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156A7Au, _value); } while (0);
    // 0x227b7c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227b7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A88u, _value); } while (0);
    // 0x227b80: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227b80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A9Cu, _value); } while (0);
    // 0x227b84: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227b84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156A90u, _value); } while (0);
    // 0x227b88: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227b88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156AA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AA8u, _value); } while (0);
    // 0x227b8c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227b8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156AB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AB4u, _value); } while (0);
    // 0x227b90: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156AACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AACu, _value); } while (0);
    // 0x227b94: 0x24be0910  addiu       $fp, $a1, 0x910
    ctx->pc = 0x227b94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
    // 0x227b98: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227b98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156AC2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156AC2u, _value); } while (0);
    // 0x227b9c: 0x2412001d  addiu       $s2, $zero, 0x1D
    ctx->pc = 0x227b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x227ba0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227ba0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156AC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156AC0u, _value); } while (0);
    // 0x227ba4: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x227ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x227ba8: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227ba8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156AC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156AC4u, _value); } while (0);
    // 0x227bac: 0x2412001d  addiu       $s2, $zero, 0x1D
    ctx->pc = 0x227bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x227bb0: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227bb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156AC6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156AC6u, _value); } while (0);
    // 0x227bb4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156AD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AD0u, _value); } while (0);
    // 0x227bb8: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156ADCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156ADCu, _value); } while (0);
    // 0x227bbc: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227bbcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156AC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156AC8u, _value); } while (0);
    // 0x227bc0: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227bc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156AC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156AC9u, _value); } while (0);
    // 0x227bc4: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227bc4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156ACAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156ACAu, _value); } while (0);
    // 0x227bc8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227bc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156AD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AD8u, _value); } while (0);
    // 0x227bcc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227bccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156AECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AECu, _value); } while (0);
    // 0x227bd0: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156AE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AE0u, _value); } while (0);
    // 0x227bd4: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227bd4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156B00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B00u, _value); } while (0);
    // 0x227bd8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227bd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156AF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AF8u, _value); } while (0);
    // 0x227bdc: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227bdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B04u, _value); } while (0);
    // 0x227be0: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227be0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156AFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156AFCu, _value); } while (0);
    // 0x227be4: 0x24be0960  addiu       $fp, $a1, 0x960
    ctx->pc = 0x227be4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2400));
    // 0x227be8: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227be8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156B12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B12u, _value); } while (0);
    // 0x227bec: 0x2412001e  addiu       $s2, $zero, 0x1E
    ctx->pc = 0x227becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x227bf0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227bf0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156B10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B10u, _value); } while (0);
    // 0x227bf4: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x227bf4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156B14u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B14u, _value); } while (0);
    // 0x227bf8: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227bf8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156B16u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B16u, _value); } while (0);
    // 0x227bfc: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227bfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156B20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B20u, _value); } while (0);
    // 0x227c00: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156B2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B2Cu, _value); } while (0);
    // 0x227c04: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156B30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B30u, _value); } while (0);
    // 0x227c08: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227c08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156B50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B50u, _value); } while (0);
    // 0x227c0c: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227c0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156B18u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156B18u, _value); } while (0);
    // 0x227c10: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227c10u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156B19u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156B19u, _value); } while (0);
    // 0x227c14: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227c14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156B1Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156B1Au, _value); } while (0);
    // 0x227c18: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227c18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B28u, _value); } while (0);
    // 0x227c1c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227c1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B3Cu, _value); } while (0);
    // 0x227c20: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B48u, _value); } while (0);
    // 0x227c24: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B54u, _value); } while (0);
    // 0x227c28: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227c28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B4Cu, _value); } while (0);
    // 0x227c2c: 0x24be09b0  addiu       $fp, $a1, 0x9B0
    ctx->pc = 0x227c2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2480));
    // 0x227c30: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227c30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156B62u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B62u, _value); } while (0);
    // 0x227c34: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x227c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x227c38: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227c38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156B60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B60u, _value); } while (0);
    // 0x227c3c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x227c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227c40: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x227c40u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156B64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B64u, _value); } while (0);
    // 0x227c44: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227c44u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156B66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156B66u, _value); } while (0);
    // 0x227c48: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B70u, _value); } while (0);
    // 0x227c4c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B7Cu, _value); } while (0);
    // 0x227c50: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B80u, _value); } while (0);
    // 0x227c54: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227c54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156B68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156B68u, _value); } while (0);
    // 0x227c58: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227c58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156B69u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156B69u, _value); } while (0);
    // 0x227c5c: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227c5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156B6Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156B6Au, _value); } while (0);
    // 0x227c60: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B78u, _value); } while (0);
    // 0x227c64: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227c64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B8Cu, _value); } while (0);
    // 0x227c68: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B98u, _value); } while (0);
    // 0x227c6c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227c6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156BA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BA4u, _value); } while (0);
    // 0x227c70: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227c70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156BA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156BA0u, _value); } while (0);
    // 0x227c74: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227c74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156B9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156B9Cu, _value); } while (0);
    // 0x227c78: 0x24be0a00  addiu       $fp, $a1, 0xA00
    ctx->pc = 0x227c78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2560));
    // 0x227c7c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227c7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156BB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156BB0u, _value); } while (0);
    // 0x227c80: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x227c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x227c84: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227c84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156BB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156BB2u, _value); } while (0);
    // 0x227c88: 0x24120021  addiu       $s2, $zero, 0x21
    ctx->pc = 0x227c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x227c8c: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x227c8cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156BB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156BB4u, _value); } while (0);
    // 0x227c90: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227c90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156BB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156BB6u, _value); } while (0);
    // 0x227c94: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BC0u, _value); } while (0);
    // 0x227c98: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227c98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156BCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BCCu, _value); } while (0);
    // 0x227c9c: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227c9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156BD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BD0u, _value); } while (0);
    // 0x227ca0: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227ca0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156BF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156BF0u, _value); } while (0);
    // 0x227ca4: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227ca4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156BB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156BB8u, _value); } while (0);
    // 0x227ca8: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227ca8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156BB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156BB9u, _value); } while (0);
    // 0x227cac: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227cacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156BBAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156BBAu, _value); } while (0);
    // 0x227cb0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156BC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BC8u, _value); } while (0);
    // 0x227cb4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227cb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156BDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BDCu, _value); } while (0);
    // 0x227cb8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227cb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156BE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BE8u, _value); } while (0);
    // 0x227cbc: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156BF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BF4u, _value); } while (0);
    // 0x227cc0: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227cc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156BECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156BECu, _value); } while (0);
    // 0x227cc4: 0x24be0a50  addiu       $fp, $a1, 0xA50
    ctx->pc = 0x227cc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
    // 0x227cc8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227cc8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156C00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C00u, _value); } while (0);
    // 0x227ccc: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x227cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227cd0: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227cd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156C02u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C02u, _value); } while (0);
    // 0x227cd4: 0x24120021  addiu       $s2, $zero, 0x21
    ctx->pc = 0x227cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x227cd8: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x227cd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156C04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C04u, _value); } while (0);
    // 0x227cdc: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227cdcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156C06u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C06u, _value); } while (0);
    // 0x227ce0: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C10u, _value); } while (0);
    // 0x227ce4: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156C1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C1Cu, _value); } while (0);
    // 0x227ce8: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156C20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C20u, _value); } while (0);
    // 0x227cec: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227cecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156C08u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156C08u, _value); } while (0);
    // 0x227cf0: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227cf0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156C09u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156C09u, _value); } while (0);
    // 0x227cf4: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227cf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156C0Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156C0Au, _value); } while (0);
    // 0x227cf8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C18u, _value); } while (0);
    // 0x227cfc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227cfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C2Cu, _value); } while (0);
    // 0x227d00: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227d00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C38u, _value); } while (0);
    // 0x227d04: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C44u, _value); } while (0);
    // 0x227d08: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C3Cu, _value); } while (0);
    // 0x227d0c: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227d0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156C40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C40u, _value); } while (0);
    // 0x227d10: 0x24be0aa0  addiu       $fp, $a1, 0xAA0
    ctx->pc = 0x227d10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2720));
    // 0x227d14: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227d14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156C52u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C52u, _value); } while (0);
    // 0x227d18: 0x24120022  addiu       $s2, $zero, 0x22
    ctx->pc = 0x227d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x227d1c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227d1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156C50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C50u, _value); } while (0);
    // 0x227d20: 0x24120023  addiu       $s2, $zero, 0x23
    ctx->pc = 0x227d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x227d24: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227d24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156C90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C90u, _value); } while (0);
    // 0x227d28: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x227d28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156C54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C54u, _value); } while (0);
    // 0x227d2c: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227d2cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156C56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156C56u, _value); } while (0);
    // 0x227d30: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156C60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C60u, _value); } while (0);
    // 0x227d34: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227d34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156C6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C6Cu, _value); } while (0);
    // 0x227d38: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227d38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156C70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C70u, _value); } while (0);
    // 0x227d3c: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227d3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156C58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156C58u, _value); } while (0);
    // 0x227d40: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227d40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156C59u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156C59u, _value); } while (0);
    // 0x227d44: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227d44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156C5Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156C5Au, _value); } while (0);
    // 0x227d48: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C68u, _value); } while (0);
    // 0x227d4c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227d4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C7Cu, _value); } while (0);
    // 0x227d50: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C88u, _value); } while (0);
    // 0x227d54: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227d54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C94u, _value); } while (0);
    // 0x227d58: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156C8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156C8Cu, _value); } while (0);
    // 0x227d5c: 0x24be0af0  addiu       $fp, $a1, 0xAF0
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
    // 0x227d60: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227d60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156CA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CA0u, _value); } while (0);
    // 0x227d64: 0x24120022  addiu       $s2, $zero, 0x22
    ctx->pc = 0x227d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x227d68: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227d68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156CE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CE0u, _value); } while (0);
    // 0x227d6c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227d6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156CA2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CA2u, _value); } while (0);
    // 0x227d70: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x227d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x227d74: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x227d74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156CA4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CA4u, _value); } while (0);
    // 0x227d78: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227d78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156CA6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CA6u, _value); } while (0);
    // 0x227d7c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227d7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156CB0u, _value); } while (0);
    // 0x227d80: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227d80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156CBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156CBCu, _value); } while (0);
    // 0x227d84: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156CC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156CC0u, _value); } while (0);
    // 0x227d88: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227d88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156CA8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156CA8u, _value); } while (0);
    // 0x227d8c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227d8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156CA9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156CA9u, _value); } while (0);
    // 0x227d90: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227d90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156CAAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156CAAu, _value); } while (0);
    // 0x227d94: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227d94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156CB8u, _value); } while (0);
    // 0x227d98: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227d98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156CCCu, _value); } while (0);
    // 0x227d9c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227d9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156CD8u, _value); } while (0);
    // 0x227da0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156CE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156CE4u, _value); } while (0);
    // 0x227da4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156CDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156CDCu, _value); } while (0);
    // 0x227da8: 0x24be0b40  addiu       $fp, $a1, 0xB40
    ctx->pc = 0x227da8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
    // 0x227dac: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227dacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156CF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CF0u, _value); } while (0);
    // 0x227db0: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x227db0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x227db4: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227db4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156CF2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CF2u, _value); } while (0);
    // 0x227db8: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x227db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x227dbc: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227dbcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156CF4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CF4u, _value); } while (0);
    // 0x227dc0: 0x24120038  addiu       $s2, $zero, 0x38
    ctx->pc = 0x227dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x227dc4: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227dc4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156D30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D30u, _value); } while (0);
    // 0x227dc8: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227dc8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156CF6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156CF6u, _value); } while (0);
    // 0x227dcc: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227dccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156D00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D00u, _value); } while (0);
    // 0x227dd0: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156D0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D0Cu, _value); } while (0);
    // 0x227dd4: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156D10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D10u, _value); } while (0);
    // 0x227dd8: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227dd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156CF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156CF8u, _value); } while (0);
    // 0x227ddc: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227ddcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156CF9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156CF9u, _value); } while (0);
    // 0x227de0: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227de0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156CFAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156CFAu, _value); } while (0);
    // 0x227de4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D08u, _value); } while (0);
    // 0x227de8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D1Cu, _value); } while (0);
    // 0x227dec: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D28u, _value); } while (0);
    // 0x227df0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D34u, _value); } while (0);
    // 0x227df4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D2Cu, _value); } while (0);
    // 0x227df8: 0x24be0b90  addiu       $fp, $a1, 0xB90
    ctx->pc = 0x227df8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 2960));
    // 0x227dfc: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227dfcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156D44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D44u, _value); } while (0);
    // 0x227e00: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x227e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x227e04: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227e04u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156D40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D40u, _value); } while (0);
    // 0x227e08: 0x24120023  addiu       $s2, $zero, 0x23
    ctx->pc = 0x227e08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x227e0c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227e0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156D42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D42u, _value); } while (0);
    // 0x227e10: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x227e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x227e14: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227e14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156D80u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D80u, _value); } while (0);
    // 0x227e18: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227e18u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156D46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D46u, _value); } while (0);
    // 0x227e1c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227e1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D50u, _value); } while (0);
    // 0x227e20: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156D5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D5Cu, _value); } while (0);
    // 0x227e24: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227e24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156D60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D60u, _value); } while (0);
    // 0x227e28: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227e28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156D48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156D48u, _value); } while (0);
    // 0x227e2c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227e2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156D49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156D49u, _value); } while (0);
    // 0x227e30: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227e30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156D4Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156D4Au, _value); } while (0);
    // 0x227e34: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D58u, _value); } while (0);
    // 0x227e38: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227e38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D6Cu, _value); } while (0);
    // 0x227e3c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D78u, _value); } while (0);
    // 0x227e40: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227e40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D84u, _value); } while (0);
    // 0x227e44: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227e44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156D7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156D7Cu, _value); } while (0);
    // 0x227e48: 0x24be0be0  addiu       $fp, $a1, 0xBE0
    ctx->pc = 0x227e48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3040));
    // 0x227e4c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227e4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156D92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D92u, _value); } while (0);
    // 0x227e50: 0x24120046  addiu       $s2, $zero, 0x46
    ctx->pc = 0x227e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x227e54: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227e54u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156D94u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D94u, _value); } while (0);
    // 0x227e58: 0x24120026  addiu       $s2, $zero, 0x26
    ctx->pc = 0x227e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x227e5c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227e5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156D90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D90u, _value); } while (0);
    // 0x227e60: 0x24120023  addiu       $s2, $zero, 0x23
    ctx->pc = 0x227e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x227e64: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227e64u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156D96u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156D96u, _value); } while (0);
    // 0x227e68: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227e68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156DD0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156DD0u, _value); } while (0);
    // 0x227e6c: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227e6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156D98u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156D98u, _value); } while (0);
    // 0x227e70: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227e70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DA0u, _value); } while (0);
    // 0x227e74: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156DACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DACu, _value); } while (0);
    // 0x227e78: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227e78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156DB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DB0u, _value); } while (0);
    // 0x227e7c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227e7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156D99u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156D99u, _value); } while (0);
    // 0x227e80: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227e80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156D9Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156D9Au, _value); } while (0);
    // 0x227e84: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227e84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156DA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DA8u, _value); } while (0);
    // 0x227e88: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156DBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DBCu, _value); } while (0);
    // 0x227e8c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227e8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156DC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DC8u, _value); } while (0);
    // 0x227e90: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156DD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DD4u, _value); } while (0);
    // 0x227e94: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156DCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DCCu, _value); } while (0);
    // 0x227e98: 0x24be0c30  addiu       $fp, $a1, 0xC30
    ctx->pc = 0x227e98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3120));
    // 0x227e9c: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227e9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156DE4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156DE4u, _value); } while (0);
    // 0x227ea0: 0x24120027  addiu       $s2, $zero, 0x27
    ctx->pc = 0x227ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x227ea4: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227ea4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156DE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156DE0u, _value); } while (0);
    // 0x227ea8: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x227ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x227eac: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227eacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156DE2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156DE2u, _value); } while (0);
    // 0x227eb0: 0x24120026  addiu       $s2, $zero, 0x26
    ctx->pc = 0x227eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x227eb4: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227eb4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156DE6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156DE6u, _value); } while (0);
    // 0x227eb8: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227eb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156E20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E20u, _value); } while (0);
    // 0x227ebc: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227ebcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156DE8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156DE8u, _value); } while (0);
    // 0x227ec0: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227ec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DF0u, _value); } while (0);
    // 0x227ec4: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156DFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DFCu, _value); } while (0);
    // 0x227ec8: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156E00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E00u, _value); } while (0);
    // 0x227ecc: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227eccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156DE9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156DE9u, _value); } while (0);
    // 0x227ed0: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227ed0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156DEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156DEAu, _value); } while (0);
    // 0x227ed4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227ed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156DF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156DF8u, _value); } while (0);
    // 0x227ed8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227ed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E0Cu, _value); } while (0);
    // 0x227edc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227edcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E18u, _value); } while (0);
    // 0x227ee0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227ee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E24u, _value); } while (0);
    // 0x227ee4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227ee4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E1Cu, _value); } while (0);
    // 0x227ee8: 0x24be0c80  addiu       $fp, $a1, 0xC80
    ctx->pc = 0x227ee8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3200));
    // 0x227eec: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227eecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156E32u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E32u, _value); } while (0);
    // 0x227ef0: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x227ef4: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227ef4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156E30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E30u, _value); } while (0);
    // 0x227ef8: 0x24120034  addiu       $s2, $zero, 0x34
    ctx->pc = 0x227ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x227efc: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227efcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156E34u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E34u, _value); } while (0);
    // 0x227f00: 0x24120027  addiu       $s2, $zero, 0x27
    ctx->pc = 0x227f00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x227f04: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227f04u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156E36u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E36u, _value); } while (0);
    // 0x227f08: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227f08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156E38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156E38u, _value); } while (0);
    // 0x227f0c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227f0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156E39u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156E39u, _value); } while (0);
    // 0x227f10: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227f10u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156E70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E70u, _value); } while (0);
    // 0x227f14: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227f14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156E3Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156E3Au, _value); } while (0);
    // 0x227f18: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227f18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156E40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E40u, _value); } while (0);
    // 0x227f1c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156E4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E4Cu, _value); } while (0);
    // 0x227f20: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227f20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156E50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E50u, _value); } while (0);
    // 0x227f24: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227f24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E48u, _value); } while (0);
    // 0x227f28: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227f28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E5Cu, _value); } while (0);
    // 0x227f2c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227f2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E68u, _value); } while (0);
    // 0x227f30: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227f30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E74u, _value); } while (0);
    // 0x227f34: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E6Cu, _value); } while (0);
    // 0x227f38: 0x24be0cd0  addiu       $fp, $a1, 0xCD0
    ctx->pc = 0x227f38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3280));
    // 0x227f3c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227f3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156E82u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E82u, _value); } while (0);
    // 0x227f40: 0x24120048  addiu       $s2, $zero, 0x48
    ctx->pc = 0x227f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x227f44: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227f44u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156E84u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E84u, _value); } while (0);
    // 0x227f48: 0x24120029  addiu       $s2, $zero, 0x29
    ctx->pc = 0x227f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x227f4c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227f4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156E80u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E80u, _value); } while (0);
    // 0x227f50: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x227f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x227f54: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227f54u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156E86u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156E86u, _value); } while (0);
    // 0x227f58: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227f58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156EC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156EC0u, _value); } while (0);
    // 0x227f5c: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227f5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156E88u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156E88u, _value); } while (0);
    // 0x227f60: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227f60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156E89u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156E89u, _value); } while (0);
    // 0x227f64: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227f64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156E8Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156E8Au, _value); } while (0);
    // 0x227f68: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156E90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E90u, _value); } while (0);
    // 0x227f6c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227f6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156E9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E9Cu, _value); } while (0);
    // 0x227f70: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227f70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156EA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EA0u, _value); } while (0);
    // 0x227f74: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227f74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156E98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156E98u, _value); } while (0);
    // 0x227f78: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227f78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EACu, _value); } while (0);
    // 0x227f7c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EB8u, _value); } while (0);
    // 0x227f80: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EC4u, _value); } while (0);
    // 0x227f84: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227f84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EBCu, _value); } while (0);
    // 0x227f88: 0x24be0d20  addiu       $fp, $a1, 0xD20
    ctx->pc = 0x227f88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3360));
    // 0x227f8c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227f8cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156ED2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156ED2u, _value); } while (0);
    // 0x227f90: 0x2412004a  addiu       $s2, $zero, 0x4A
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x227f94: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227f94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156ED4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156ED4u, _value); } while (0);
    // 0x227f98: 0x2412002a  addiu       $s2, $zero, 0x2A
    ctx->pc = 0x227f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x227f9c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227f9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156ED0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156ED0u, _value); } while (0);
    // 0x227fa0: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x227fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x227fa4: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227fa4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156ED6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156ED6u, _value); } while (0);
    // 0x227fa8: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227fa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156ED8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156ED8u, _value); } while (0);
    // 0x227fac: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x227facu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156ED9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156ED9u, _value); } while (0);
    // 0x227fb0: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x227fb0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156EDAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156EDAu, _value); } while (0);
    // 0x227fb4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x227fb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EE8u, _value); } while (0);
    // 0x227fb8: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227fb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156F10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F10u, _value); } while (0);
    // 0x227fbc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x227fbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156EFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EFCu, _value); } while (0);
    // 0x227fc0: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x227fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EE0u, _value); } while (0);
    // 0x227fc4: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x227fc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EECu, _value); } while (0);
    // 0x227fc8: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x227fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156EF0u, _value); } while (0);
    // 0x227fcc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x227fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F08u, _value); } while (0);
    // 0x227fd0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x227fd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F14u, _value); } while (0);
    // 0x227fd4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x227fd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F0Cu, _value); } while (0);
    // 0x227fd8: 0x24be0d70  addiu       $fp, $a1, 0xD70
    ctx->pc = 0x227fd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3440));
    // 0x227fdc: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x227fdcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156F22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F22u, _value); } while (0);
    // 0x227fe0: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x227fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227fe4: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x227fe4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156F24u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F24u, _value); } while (0);
    // 0x227fe8: 0x2412002b  addiu       $s2, $zero, 0x2B
    ctx->pc = 0x227fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x227fec: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x227fecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156F20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F20u, _value); } while (0);
    // 0x227ff0: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x227ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x227ff4: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x227ff4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156F26u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F26u, _value); } while (0);
    // 0x227ff8: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x227ff8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156F60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F60u, _value); } while (0);
    // 0x227ffc: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x227ffcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156F28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156F28u, _value); } while (0);
    // 0x228000: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x228000u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156F29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156F29u, _value); } while (0);
    // 0x228004: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x228004u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156F2Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156F2Au, _value); } while (0);
    // 0x228008: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F38u, _value); } while (0);
    // 0x22800c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22800cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F4Cu, _value); } while (0);
    // 0x228010: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x228010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F30u, _value); } while (0);
    // 0x228014: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x228014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156F3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F3Cu, _value); } while (0);
    // 0x228018: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x228018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F40u, _value); } while (0);
    // 0x22801c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22801cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F58u, _value); } while (0);
    // 0x228020: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F64u, _value); } while (0);
    // 0x228024: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F5Cu, _value); } while (0);
    // 0x228028: 0x24be0dc0  addiu       $fp, $a1, 0xDC0
    ctx->pc = 0x228028u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3520));
    // 0x22802c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x22802cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156F72u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F72u, _value); } while (0);
    // 0x228030: 0x24120022  addiu       $s2, $zero, 0x22
    ctx->pc = 0x228030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x228034: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x228034u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156F74u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F74u, _value); } while (0);
    // 0x228038: 0x2412002c  addiu       $s2, $zero, 0x2C
    ctx->pc = 0x228038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x22803c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x22803cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156F70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F70u, _value); } while (0);
    // 0x228040: 0x24120029  addiu       $s2, $zero, 0x29
    ctx->pc = 0x228040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x228044: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x228044u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156F76u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156F76u, _value); } while (0);
    // 0x228048: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x228048u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156F78u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156F78u, _value); } while (0);
    // 0x22804c: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x22804cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156F79u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156F79u, _value); } while (0);
    // 0x228050: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x228050u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156F7Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156F7Au, _value); } while (0);
    // 0x228054: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F88u, _value); } while (0);
    // 0x228058: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F9Cu, _value); } while (0);
    // 0x22805c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x22805cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F80u, _value); } while (0);
    // 0x228060: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x228060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F8Cu, _value); } while (0);
    // 0x228064: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x228064u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156FB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156FB0u, _value); } while (0);
    // 0x228068: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x228068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156F90u, _value); } while (0);
    // 0x22806c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22806cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FA8u, _value); } while (0);
    // 0x228070: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156FB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FB4u, _value); } while (0);
    // 0x228074: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228074u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FACu, _value); } while (0);
    // 0x228078: 0x24be0e10  addiu       $fp, $a1, 0xE10
    ctx->pc = 0x228078u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3600));
    // 0x22807c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x22807cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156FC2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156FC2u, _value); } while (0);
    // 0x228080: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x228080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x228084: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x228084u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156FC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156FC4u, _value); } while (0);
    // 0x228088: 0x2412002d  addiu       $s2, $zero, 0x2D
    ctx->pc = 0x228088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22808c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x22808cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x156FC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156FC0u, _value); } while (0);
    // 0x228090: 0x24120036  addiu       $s2, $zero, 0x36
    ctx->pc = 0x228090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x228094: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x228094u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156FC6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x156FC6u, _value); } while (0);
    // 0x228098: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x228098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156FD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FD0u, _value); } while (0);
    // 0x22809c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x22809cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156FDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FDCu, _value); } while (0);
    // 0x2280a0: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2280a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157000u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157000u, _value); } while (0);
    // 0x2280a4: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x2280a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156FC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156FC8u, _value); } while (0);
    // 0x2280a8: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2280a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156FC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156FC9u, _value); } while (0);
    // 0x2280ac: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2280acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x156FCAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x156FCAu, _value); } while (0);
    // 0x2280b0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2280b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156FD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FD8u, _value); } while (0);
    // 0x2280b4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2280b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FECu, _value); } while (0);
    // 0x2280b8: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2280b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x156FE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FE0u, _value); } while (0);
    // 0x2280bc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2280bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156FF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FF8u, _value); } while (0);
    // 0x2280c0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2280c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157004u, _value); } while (0);
    // 0x2280c4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2280c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156FFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156FFCu, _value); } while (0);
    // 0x2280c8: 0x24be0e60  addiu       $fp, $a1, 0xE60
    ctx->pc = 0x2280c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3680));
    // 0x2280cc: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2280ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157014u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157014u, _value); } while (0);
    // 0x2280d0: 0x2412002e  addiu       $s2, $zero, 0x2E
    ctx->pc = 0x2280d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2280d4: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2280d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157010u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157010u, _value); } while (0);
    // 0x2280d8: 0x2412002a  addiu       $s2, $zero, 0x2A
    ctx->pc = 0x2280d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2280dc: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2280dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157012u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157012u, _value); } while (0);
    // 0x2280e0: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x2280e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157016u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157016u, _value); } while (0);
    // 0x2280e4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2280e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157020u, _value); } while (0);
    // 0x2280e8: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2280e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15702Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15702Cu, _value); } while (0);
    // 0x2280ec: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x2280ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157018u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157018u, _value); } while (0);
    // 0x2280f0: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2280f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157019u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157019u, _value); } while (0);
    // 0x2280f4: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2280f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15701Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15701Au, _value); } while (0);
    // 0x2280f8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2280f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157028u, _value); } while (0);
    // 0x2280fc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2280fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15703Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15703Cu, _value); } while (0);
    // 0x228100: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x228100u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157030u, _value); } while (0);
    // 0x228104: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x228104u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157050u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157050u, _value); } while (0);
    // 0x228108: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228108u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157048u, _value); } while (0);
    // 0x22810c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22810cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157054u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157054u, _value); } while (0);
    // 0x228110: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228110u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15704Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15704Cu, _value); } while (0);
    // 0x228114: 0x24be0eb0  addiu       $fp, $a1, 0xEB0
    ctx->pc = 0x228114u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3760));
    // 0x228118: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228118u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157062u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157062u, _value); } while (0);
    // 0x22811c: 0x24120037  addiu       $s2, $zero, 0x37
    ctx->pc = 0x22811cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x228120: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x228120u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157064u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157064u, _value); } while (0);
    // 0x228124: 0x2412002f  addiu       $s2, $zero, 0x2F
    ctx->pc = 0x228124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x228128: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228128u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157060u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157060u, _value); } while (0);
    // 0x22812c: 0x2412002b  addiu       $s2, $zero, 0x2B
    ctx->pc = 0x22812cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x228130: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x228130u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157066u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157066u, _value); } while (0);
    // 0x228134: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x228134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157070u, _value); } while (0);
    // 0x228138: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x228138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15707Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15707Cu, _value); } while (0);
    // 0x22813c: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x22813cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157080u, _value); } while (0);
    // 0x228140: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x228140u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1570A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1570A0u, _value); } while (0);
    // 0x228144: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x228144u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157068u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157068u, _value); } while (0);
    // 0x228148: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x228148u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157069u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157069u, _value); } while (0);
    // 0x22814c: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x22814cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15706Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15706Au, _value); } while (0);
    // 0x228150: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157078u, _value); } while (0);
    // 0x228154: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15708Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15708Cu, _value); } while (0);
    // 0x228158: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157098u, _value); } while (0);
    // 0x22815c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22815cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1570A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570A4u, _value); } while (0);
    // 0x228160: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15709Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15709Cu, _value); } while (0);
    // 0x228164: 0x24be0f00  addiu       $fp, $a1, 0xF00
    ctx->pc = 0x228164u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3840));
    // 0x228168: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228168u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1570B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1570B2u, _value); } while (0);
    // 0x22816c: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x22816cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x228170: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228170u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1570B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1570B0u, _value); } while (0);
    // 0x228174: 0x2412002c  addiu       $s2, $zero, 0x2C
    ctx->pc = 0x228174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x228178: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228178u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1570B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1570B4u, _value); } while (0);
    // 0x22817c: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x22817cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1570B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1570B6u, _value); } while (0);
    // 0x228180: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x228180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1570C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570C0u, _value); } while (0);
    // 0x228184: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x228184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1570CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570CCu, _value); } while (0);
    // 0x228188: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x228188u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1570D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570D0u, _value); } while (0);
    // 0x22818c: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x22818cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1570B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1570B8u, _value); } while (0);
    // 0x228190: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x228190u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1570B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1570B9u, _value); } while (0);
    // 0x228194: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x228194u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1570BAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1570BAu, _value); } while (0);
    // 0x228198: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1570C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570C8u, _value); } while (0);
    // 0x22819c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22819cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1570DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570DCu, _value); } while (0);
    // 0x2281a0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2281a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1570E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570E8u, _value); } while (0);
    // 0x2281a4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2281a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1570F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570F4u, _value); } while (0);
    // 0x2281a8: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2281a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1570F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1570F0u, _value); } while (0);
    // 0x2281ac: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2281acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1570ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1570ECu, _value); } while (0);
    // 0x2281b0: 0x24be0f50  addiu       $fp, $a1, 0xF50
    ctx->pc = 0x2281b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 3920));
    // 0x2281b4: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2281b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157102u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157102u, _value); } while (0);
    // 0x2281b8: 0x24120031  addiu       $s2, $zero, 0x31
    ctx->pc = 0x2281b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2281bc: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2281bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157100u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157100u, _value); } while (0);
    // 0x2281c0: 0x2412002d  addiu       $s2, $zero, 0x2D
    ctx->pc = 0x2281c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2281c4: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x2281c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157104u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157104u, _value); } while (0);
    // 0x2281c8: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x2281c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157106u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157106u, _value); } while (0);
    // 0x2281cc: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2281ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157110u, _value); } while (0);
    // 0x2281d0: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2281d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15711Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15711Cu, _value); } while (0);
    // 0x2281d4: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2281d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157120u, _value); } while (0);
    // 0x2281d8: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2281d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157140u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157140u, _value); } while (0);
    // 0x2281dc: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x2281dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157108u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157108u, _value); } while (0);
    // 0x2281e0: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2281e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157109u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157109u, _value); } while (0);
    // 0x2281e4: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2281e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15710Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15710Au, _value); } while (0);
    // 0x2281e8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2281e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157118u, _value); } while (0);
    // 0x2281ec: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2281ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15712Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15712Cu, _value); } while (0);
    // 0x2281f0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2281f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157138u, _value); } while (0);
    // 0x2281f4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2281f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157144u, _value); } while (0);
    // 0x2281f8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2281f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15713Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15713Cu, _value); } while (0);
    // 0x2281fc: 0x24be0fa0  addiu       $fp, $a1, 0xFA0
    ctx->pc = 0x2281fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4000));
    // 0x228200: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228200u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157152u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157152u, _value); } while (0);
    // 0x228204: 0x24120032  addiu       $s2, $zero, 0x32
    ctx->pc = 0x228204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x228208: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228208u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157150u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157150u, _value); } while (0);
    // 0x22820c: 0x2412002e  addiu       $s2, $zero, 0x2E
    ctx->pc = 0x22820cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x228210: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228210u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157154u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157154u, _value); } while (0);
    // 0x228214: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x228214u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157156u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157156u, _value); } while (0);
    // 0x228218: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x228218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157160u, _value); } while (0);
    // 0x22821c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x22821cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15716Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15716Cu, _value); } while (0);
    // 0x228220: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x228220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157170u, _value); } while (0);
    // 0x228224: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x228224u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157158u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157158u, _value); } while (0);
    // 0x228228: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x228228u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157159u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157159u, _value); } while (0);
    // 0x22822c: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x22822cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15715Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15715Au, _value); } while (0);
    // 0x228230: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157168u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157168u, _value); } while (0);
    // 0x228234: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15717Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15717Cu, _value); } while (0);
    // 0x228238: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157188u, _value); } while (0);
    // 0x22823c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22823cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157194u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157194u, _value); } while (0);
    // 0x228240: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15718Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15718Cu, _value); } while (0);
    // 0x228244: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x228244u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157190u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157190u, _value); } while (0);
    // 0x228248: 0x24be0ff0  addiu       $fp, $a1, 0xFF0
    ctx->pc = 0x228248u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4080));
    // 0x22824c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x22824cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1571A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571A2u, _value); } while (0);
    // 0x228250: 0x24120033  addiu       $s2, $zero, 0x33
    ctx->pc = 0x228250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x228254: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228254u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1571A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571A0u, _value); } while (0);
    // 0x228258: 0x24120034  addiu       $s2, $zero, 0x34
    ctx->pc = 0x228258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x22825c: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x22825cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1571E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571E0u, _value); } while (0);
    // 0x228260: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228260u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1571A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571A4u, _value); } while (0);
    // 0x228264: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x228264u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1571A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571A6u, _value); } while (0);
    // 0x228268: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x228268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1571B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1571B0u, _value); } while (0);
    // 0x22826c: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x22826cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1571BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1571BCu, _value); } while (0);
    // 0x228270: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x228270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1571C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1571C0u, _value); } while (0);
    // 0x228274: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x228274u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1571A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1571A8u, _value); } while (0);
    // 0x228278: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x228278u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1571A9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1571A9u, _value); } while (0);
    // 0x22827c: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x22827cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1571AAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1571AAu, _value); } while (0);
    // 0x228280: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1571B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1571B8u, _value); } while (0);
    // 0x228284: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1571CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1571CCu, _value); } while (0);
    // 0x228288: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1571D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1571D8u, _value); } while (0);
    // 0x22828c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22828cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1571E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1571E4u, _value); } while (0);
    // 0x228290: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1571DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1571DCu, _value); } while (0);
    // 0x228294: 0x24be1040  addiu       $fp, $a1, 0x1040
    ctx->pc = 0x228294u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4160));
    // 0x228298: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228298u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1571F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571F0u, _value); } while (0);
    // 0x22829c: 0x2412002f  addiu       $s2, $zero, 0x2F
    ctx->pc = 0x22829cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2282a0: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2282a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1571F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571F2u, _value); } while (0);
    // 0x2282a4: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x2282a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2282a8: 0xafc40020  sw          $a0, 0x20($fp)
    ctx->pc = 0x2282a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157210u, _value); } while (0);
    // 0x2282ac: 0xa7c20040  sh          $v0, 0x40($fp)
    ctx->pc = 0x2282acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157230u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157230u, _value); } while (0);
    // 0x2282b0: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x2282b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1571F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571F4u, _value); } while (0);
    // 0x2282b4: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x2282b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1571F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1571F6u, _value); } while (0);
    // 0x2282b8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x2282b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157200u, _value); } while (0);
    // 0x2282bc: 0xafc4001c  sw          $a0, 0x1C($fp)
    ctx->pc = 0x2282bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15720Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15720Cu, _value); } while (0);
    // 0x2282c0: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x2282c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2282c4: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x2282c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1571F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1571F8u, _value); } while (0);
    // 0x2282c8: 0xa3c30009  sb          $v1, 0x9($fp)
    ctx->pc = 0x2282c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1571F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1571F9u, _value); } while (0);
    // 0x2282cc: 0xa3c3000a  sb          $v1, 0xA($fp)
    ctx->pc = 0x2282ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1571FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1571FAu, _value); } while (0);
    // 0x2282d0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2282d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157208u, _value); } while (0);
    // 0x2282d4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2282d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15721Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15721Cu, _value); } while (0);
    // 0x2282d8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2282d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157228u, _value); } while (0);
    // 0x2282dc: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2282dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157234u, _value); } while (0);
    // 0x2282e0: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2282e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15722Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15722Cu, _value); } while (0);
    // 0x2282e4: 0x24be1090  addiu       $fp, $a1, 0x1090
    ctx->pc = 0x2282e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4240));
    // 0x2282e8: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x2282e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157240u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157240u, _value); } while (0);
    // 0x2282ec: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x2282ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2282f0: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2282f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157242u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157242u, _value); } while (0);
    // 0x2282f4: 0x24120032  addiu       $s2, $zero, 0x32
    ctx->pc = 0x2282f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2282f8: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x2282f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157244u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157244u, _value); } while (0);
    // 0x2282fc: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x2282fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157246u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157246u, _value); } while (0);
    // 0x228300: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x228300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x228304: 0xa3c30008  sb          $v1, 0x8($fp)
    ctx->pc = 0x228304u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x157248u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157248u, _value); } while (0);
    // 0x228308: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228308u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157249u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157249u, _value); } while (0);
    // 0x22830c: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x22830cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15724Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15724Au, _value); } while (0);
    // 0x228310: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157258u, _value); } while (0);
    // 0x228314: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228314u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15726Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15726Cu, _value); } while (0);
    // 0x228318: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228318u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157250u, _value); } while (0);
    // 0x22831c: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x22831cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15725Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15725Cu, _value); } while (0);
    // 0x228320: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157260u, _value); } while (0);
    // 0x228324: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228324u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157278u, _value); } while (0);
    // 0x228328: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157284u, _value); } while (0);
    // 0x22832c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22832cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15727Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15727Cu, _value); } while (0);
    // 0x228330: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228330u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157280u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157280u, _value); } while (0);
    // 0x228334: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228334u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228338: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228338u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157292u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157292u, _value); } while (0);
    // 0x22833c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x22833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x228340: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x228340u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157290u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157290u, _value); } while (0);
    // 0x228344: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x228344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x228348: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x228348u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157294u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157294u, _value); } while (0);
    // 0x22834c: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x22834cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157296u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157296u, _value); } while (0);
    // 0x228350: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x228350u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157298u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157298u, _value); } while (0);
    // 0x228354: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228354u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157299u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157299u, _value); } while (0);
    // 0x228358: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x228358u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15729Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15729Au, _value); } while (0);
    // 0x22835c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22835cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1572A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572A8u, _value); } while (0);
    // 0x228360: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1572BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572BCu, _value); } while (0);
    // 0x228364: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1572A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572A0u, _value); } while (0);
    // 0x228368: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1572ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572ACu, _value); } while (0);
    // 0x22836c: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x22836cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1572B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572B0u, _value); } while (0);
    // 0x228370: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1572C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572C8u, _value); } while (0);
    // 0x228374: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1572D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572D4u, _value); } while (0);
    // 0x228378: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1572CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572CCu, _value); } while (0);
    // 0x22837c: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x22837cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1572D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1572D0u, _value); } while (0);
    // 0x228380: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228384: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228384u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1572E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1572E2u, _value); } while (0);
    // 0x228388: 0x24120038  addiu       $s2, $zero, 0x38
    ctx->pc = 0x228388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x22838c: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x22838cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1572E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1572E0u, _value); } while (0);
    // 0x228390: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x228390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x228394: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x228394u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1572E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1572E4u, _value); } while (0);
    // 0x228398: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228398u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1572E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1572E6u, _value); } while (0);
    // 0x22839c: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x22839cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1572E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1572E8u, _value); } while (0);
    // 0x2283a0: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x2283a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1572E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1572E9u, _value); } while (0);
    // 0x2283a4: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x2283a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1572EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1572EAu, _value); } while (0);
    // 0x2283a8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2283a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1572F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572F8u, _value); } while (0);
    // 0x2283ac: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2283acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15730Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15730Cu, _value); } while (0);
    // 0x2283b0: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x2283b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1572F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572F0u, _value); } while (0);
    // 0x2283b4: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x2283b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1572FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1572FCu, _value); } while (0);
    // 0x2283b8: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x2283b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157300u, _value); } while (0);
    // 0x2283bc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2283bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157318u, _value); } while (0);
    // 0x2283c0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2283c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157324u, _value); } while (0);
    // 0x2283c4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2283c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15731Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15731Cu, _value); } while (0);
    // 0x2283c8: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x2283c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157320u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157320u, _value); } while (0);
    // 0x2283cc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2283ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2283d0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x2283d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157332u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157332u, _value); } while (0);
    // 0x2283d4: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x2283d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2283d8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2283d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157330u, _value); } while (0);
    // 0x2283dc: 0x24120035  addiu       $s2, $zero, 0x35
    ctx->pc = 0x2283dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2283e0: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x2283e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157334u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157334u, _value); } while (0);
    // 0x2283e4: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x2283e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157336u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157336u, _value); } while (0);
    // 0x2283e8: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x2283e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157338u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157338u, _value); } while (0);
    // 0x2283ec: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x2283ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157339u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157339u, _value); } while (0);
    // 0x2283f0: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x2283f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15733Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15733Au, _value); } while (0);
    // 0x2283f4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2283f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157348u, _value); } while (0);
    // 0x2283f8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2283f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15735Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15735Cu, _value); } while (0);
    // 0x2283fc: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x2283fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157340u, _value); } while (0);
    // 0x228400: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15734Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15734Cu, _value); } while (0);
    // 0x228404: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157350u, _value); } while (0);
    // 0x228408: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157368u, _value); } while (0);
    // 0x22840c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22840cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157374u, _value); } while (0);
    // 0x228410: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15736Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15736Cu, _value); } while (0);
    // 0x228414: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228414u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157370u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157370u, _value); } while (0);
    // 0x228418: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228418u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22841c: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x22841cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157382u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157382u, _value); } while (0);
    // 0x228420: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x228420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x228424: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x228424u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157380u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157380u, _value); } while (0);
    // 0x228428: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x228428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x22842c: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x22842cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157384u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157384u, _value); } while (0);
    // 0x228430: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228430u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157386u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157386u, _value); } while (0);
    // 0x228434: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x228434u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157388u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157388u, _value); } while (0);
    // 0x228438: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228438u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157389u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157389u, _value); } while (0);
    // 0x22843c: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x22843cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15738Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15738Au, _value); } while (0);
    // 0x228440: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157398u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157398u, _value); } while (0);
    // 0x228444: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1573ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573ACu, _value); } while (0);
    // 0x228448: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157390u, _value); } while (0);
    // 0x22844c: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x22844cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15739Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15739Cu, _value); } while (0);
    // 0x228450: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1573A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573A0u, _value); } while (0);
    // 0x228454: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1573B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573B8u, _value); } while (0);
    // 0x228458: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1573C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573C4u, _value); } while (0);
    // 0x22845c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22845cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1573BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573BCu, _value); } while (0);
    // 0x228460: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228460u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1573C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1573C0u, _value); } while (0);
    // 0x228464: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228464u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228468: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228468u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1573D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1573D2u, _value); } while (0);
    // 0x22846c: 0x2412003b  addiu       $s2, $zero, 0x3B
    ctx->pc = 0x22846cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x228470: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x228470u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1573D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1573D0u, _value); } while (0);
    // 0x228474: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x228474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x228478: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x228478u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1573D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1573D4u, _value); } while (0);
    // 0x22847c: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x22847cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1573D6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1573D6u, _value); } while (0);
    // 0x228480: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x228480u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1573D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1573D8u, _value); } while (0);
    // 0x228484: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228484u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1573D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1573D9u, _value); } while (0);
    // 0x228488: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x228488u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1573DAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1573DAu, _value); } while (0);
    // 0x22848c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22848cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1573E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573E8u, _value); } while (0);
    // 0x228490: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1573FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573FCu, _value); } while (0);
    // 0x228494: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1573E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573E0u, _value); } while (0);
    // 0x228498: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1573ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573ECu, _value); } while (0);
    // 0x22849c: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x22849cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1573F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1573F0u, _value); } while (0);
    // 0x2284a0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2284a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157408u, _value); } while (0);
    // 0x2284a4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2284a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157414u, _value); } while (0);
    // 0x2284a8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2284a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15740Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15740Cu, _value); } while (0);
    // 0x2284ac: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x2284acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157410u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157410u, _value); } while (0);
    // 0x2284b0: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2284b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2284b4: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x2284b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157422u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157422u, _value); } while (0);
    // 0x2284b8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2284b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2284bc: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2284bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157420u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157420u, _value); } while (0);
    // 0x2284c0: 0x24120038  addiu       $s2, $zero, 0x38
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2284c4: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x2284c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157424u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157424u, _value); } while (0);
    // 0x2284c8: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x2284c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157426u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157426u, _value); } while (0);
    // 0x2284cc: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x2284ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157428u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157428u, _value); } while (0);
    // 0x2284d0: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x2284d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157429u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157429u, _value); } while (0);
    // 0x2284d4: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x2284d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15742Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15742Au, _value); } while (0);
    // 0x2284d8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2284d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157438u, _value); } while (0);
    // 0x2284dc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2284dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15744Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15744Cu, _value); } while (0);
    // 0x2284e0: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x2284e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157430u, _value); } while (0);
    // 0x2284e4: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x2284e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15743Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15743Cu, _value); } while (0);
    // 0x2284e8: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x2284e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157440u, _value); } while (0);
    // 0x2284ec: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2284ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157458u, _value); } while (0);
    // 0x2284f0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2284f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157464u, _value); } while (0);
    // 0x2284f4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2284f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15745Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15745Cu, _value); } while (0);
    // 0x2284f8: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x2284f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157460u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157460u, _value); } while (0);
    // 0x2284fc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2284fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228500: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228500u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157472u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157472u, _value); } while (0);
    // 0x228504: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x228504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x228508: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x228508u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157470u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157470u, _value); } while (0);
    // 0x22850c: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x22850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x228510: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x228510u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157474u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157474u, _value); } while (0);
    // 0x228514: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228514u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157476u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157476u, _value); } while (0);
    // 0x228518: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x228518u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157478u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157478u, _value); } while (0);
    // 0x22851c: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x22851cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157479u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157479u, _value); } while (0);
    // 0x228520: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x228520u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15747Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15747Au, _value); } while (0);
    // 0x228524: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157488u, _value); } while (0);
    // 0x228528: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15749Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15749Cu, _value); } while (0);
    // 0x22852c: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x22852cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157480u, _value); } while (0);
    // 0x228530: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15748Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15748Cu, _value); } while (0);
    // 0x228534: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157490u, _value); } while (0);
    // 0x228538: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1574A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574A8u, _value); } while (0);
    // 0x22853c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22853cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1574B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574B4u, _value); } while (0);
    // 0x228540: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1574ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574ACu, _value); } while (0);
    // 0x228544: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228544u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1574B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1574B0u, _value); } while (0);
    // 0x228548: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228548u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22854c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x22854cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1574C2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1574C2u, _value); } while (0);
    // 0x228550: 0x2412003e  addiu       $s2, $zero, 0x3E
    ctx->pc = 0x228550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x228554: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x228554u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1574C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1574C0u, _value); } while (0);
    // 0x228558: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x228558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x22855c: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x22855cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1574C4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1574C4u, _value); } while (0);
    // 0x228560: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228560u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1574C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1574C6u, _value); } while (0);
    // 0x228564: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x228564u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1574C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1574C8u, _value); } while (0);
    // 0x228568: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228568u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1574C9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1574C9u, _value); } while (0);
    // 0x22856c: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x22856cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1574CAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1574CAu, _value); } while (0);
    // 0x228570: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1574D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574D8u, _value); } while (0);
    // 0x228574: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1574ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574ECu, _value); } while (0);
    // 0x228578: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1574D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574D0u, _value); } while (0);
    // 0x22857c: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x22857cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1574DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574DCu, _value); } while (0);
    // 0x228580: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1574E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574E0u, _value); } while (0);
    // 0x228584: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1574F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574F8u, _value); } while (0);
    // 0x228588: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157504u, _value); } while (0);
    // 0x22858c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22858cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1574FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1574FCu, _value); } while (0);
    // 0x228590: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228590u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157500u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157500u, _value); } while (0);
    // 0x228594: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228594u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228598: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228598u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157512u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157512u, _value); } while (0);
    // 0x22859c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x22859cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2285a0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2285a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157510u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157510u, _value); } while (0);
    // 0x2285a4: 0x2412003b  addiu       $s2, $zero, 0x3B
    ctx->pc = 0x2285a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2285a8: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x2285a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157514u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157514u, _value); } while (0);
    // 0x2285ac: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x2285acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157516u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157516u, _value); } while (0);
    // 0x2285b0: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x2285b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157518u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157518u, _value); } while (0);
    // 0x2285b4: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x2285b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157519u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157519u, _value); } while (0);
    // 0x2285b8: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x2285b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15751Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15751Au, _value); } while (0);
    // 0x2285bc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2285bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157528u, _value); } while (0);
    // 0x2285c0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2285c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15753Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15753Cu, _value); } while (0);
    // 0x2285c4: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x2285c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157520u, _value); } while (0);
    // 0x2285c8: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x2285c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15752Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15752Cu, _value); } while (0);
    // 0x2285cc: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x2285ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157530u, _value); } while (0);
    // 0x2285d0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2285d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157548u, _value); } while (0);
    // 0x2285d4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2285d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157554u, _value); } while (0);
    // 0x2285d8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2285d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15754Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15754Cu, _value); } while (0);
    // 0x2285dc: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x2285dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157550u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157550u, _value); } while (0);
    // 0x2285e0: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2285e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2285e4: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2285e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157562u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157562u, _value); } while (0);
    // 0x2285e8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2285e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2285ec: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x2285ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157560u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157560u, _value); } while (0);
    // 0x2285f0: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x2285f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2285f4: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x2285f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157564u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157564u, _value); } while (0);
    // 0x2285f8: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x2285f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157566u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157566u, _value); } while (0);
    // 0x2285fc: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x2285fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157568u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157568u, _value); } while (0);
    // 0x228600: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228600u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157569u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157569u, _value); } while (0);
    // 0x228604: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x228604u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15756Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15756Au, _value); } while (0);
    // 0x228608: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157578u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157578u, _value); } while (0);
    // 0x22860c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22860cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15758Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15758Cu, _value); } while (0);
    // 0x228610: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157570u, _value); } while (0);
    // 0x228614: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15757Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15757Cu, _value); } while (0);
    // 0x228618: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157580u, _value); } while (0);
    // 0x22861c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22861cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157598u, _value); } while (0);
    // 0x228620: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1575A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575A4u, _value); } while (0);
    // 0x228624: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15759Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15759Cu, _value); } while (0);
    // 0x228628: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228628u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1575A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1575A0u, _value); } while (0);
    // 0x22862c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22862cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228630: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228630u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1575B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1575B2u, _value); } while (0);
    // 0x228634: 0x2412003c  addiu       $s2, $zero, 0x3C
    ctx->pc = 0x228634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x228638: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x228638u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1575B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1575B0u, _value); } while (0);
    // 0x22863c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x22863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x228640: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228640u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1575B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1575B4u, _value); } while (0);
    // 0x228644: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x228644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x228648: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228648u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1575B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1575B6u, _value); } while (0);
    // 0x22864c: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x22864cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1575B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1575B8u, _value); } while (0);
    // 0x228650: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228650u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1575B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1575B9u, _value); } while (0);
    // 0x228654: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x228654u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1575BAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1575BAu, _value); } while (0);
    // 0x228658: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1575C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575C8u, _value); } while (0);
    // 0x22865c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22865cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1575DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575DCu, _value); } while (0);
    // 0x228660: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1575C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575C0u, _value); } while (0);
    // 0x228664: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1575CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575CCu, _value); } while (0);
    // 0x228668: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1575D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575D0u, _value); } while (0);
    // 0x22866c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22866cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1575E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575E8u, _value); } while (0);
    // 0x228670: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228670u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1575F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575F4u, _value); } while (0);
    // 0x228674: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1575ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1575ECu, _value); } while (0);
    // 0x228678: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228678u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1575F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1575F0u, _value); } while (0);
    // 0x22867c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22867cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228680: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228680u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157602u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157602u, _value); } while (0);
    // 0x228684: 0x2412003d  addiu       $s2, $zero, 0x3D
    ctx->pc = 0x228684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x228688: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x228688u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157600u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157600u, _value); } while (0);
    // 0x22868c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x22868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x228690: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228690u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157604u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157604u, _value); } while (0);
    // 0x228694: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x228694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x228698: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228698u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157606u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157606u, _value); } while (0);
    // 0x22869c: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x22869cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157608u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157608u, _value); } while (0);
    // 0x2286a0: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x2286a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157609u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157609u, _value); } while (0);
    // 0x2286a4: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x2286a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15760Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15760Au, _value); } while (0);
    // 0x2286a8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2286a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157618u, _value); } while (0);
    // 0x2286ac: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2286acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15762Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15762Cu, _value); } while (0);
    // 0x2286b0: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x2286b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157610u, _value); } while (0);
    // 0x2286b4: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x2286b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15761Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15761Cu, _value); } while (0);
    // 0x2286b8: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x2286b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157620u, _value); } while (0);
    // 0x2286bc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2286bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157638u, _value); } while (0);
    // 0x2286c0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2286c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157644u, _value); } while (0);
    // 0x2286c4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2286c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15763Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15763Cu, _value); } while (0);
    // 0x2286c8: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x2286c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157640u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157640u, _value); } while (0);
    // 0x2286cc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2286ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2286d0: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x2286d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157652u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157652u, _value); } while (0);
    // 0x2286d4: 0x2412003e  addiu       $s2, $zero, 0x3E
    ctx->pc = 0x2286d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2286d8: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x2286d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157650u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157650u, _value); } while (0);
    // 0x2286dc: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x2286dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2286e0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x2286e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157654u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157654u, _value); } while (0);
    // 0x2286e4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x2286e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2286e8: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x2286e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157656u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157656u, _value); } while (0);
    // 0x2286ec: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x2286ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157658u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157658u, _value); } while (0);
    // 0x2286f0: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x2286f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157659u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157659u, _value); } while (0);
    // 0x2286f4: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x2286f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15765Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15765Au, _value); } while (0);
    // 0x2286f8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2286f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157668u, _value); } while (0);
    // 0x2286fc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2286fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15767Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15767Cu, _value); } while (0);
    // 0x228700: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157660u, _value); } while (0);
    // 0x228704: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15766Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15766Cu, _value); } while (0);
    // 0x228708: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228708u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157670u, _value); } while (0);
    // 0x22870c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22870cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157688u, _value); } while (0);
    // 0x228710: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157694u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157694u, _value); } while (0);
    // 0x228714: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15768Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15768Cu, _value); } while (0);
    // 0x228718: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228718u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157690u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157690u, _value); } while (0);
    // 0x22871c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22871cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228720: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228720u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1576A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576A2u, _value); } while (0);
    // 0x228724: 0x24120044  addiu       $s2, $zero, 0x44
    ctx->pc = 0x228724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x228728: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x228728u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1576A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576A0u, _value); } while (0);
    // 0x22872c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x22872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x228730: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x228730u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1576A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576A4u, _value); } while (0);
    // 0x228734: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228734u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1576A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576A6u, _value); } while (0);
    // 0x228738: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x228738u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1576A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1576A8u, _value); } while (0);
    // 0x22873c: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x22873cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1576A9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1576A9u, _value); } while (0);
    // 0x228740: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x228740u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1576AAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1576AAu, _value); } while (0);
    // 0x228744: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1576B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1576B8u, _value); } while (0);
    // 0x228748: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1576CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1576CCu, _value); } while (0);
    // 0x22874c: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x22874cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1576B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1576B0u, _value); } while (0);
    // 0x228750: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1576BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1576BCu, _value); } while (0);
    // 0x228754: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1576C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1576C0u, _value); } while (0);
    // 0x228758: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1576D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1576D8u, _value); } while (0);
    // 0x22875c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22875cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1576E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1576E4u, _value); } while (0);
    // 0x228760: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1576DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1576DCu, _value); } while (0);
    // 0x228764: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228764u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1576E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576E0u, _value); } while (0);
    // 0x228768: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228768u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22876c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x22876cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1576F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576F0u, _value); } while (0);
    // 0x228770: 0x24120046  addiu       $s2, $zero, 0x46
    ctx->pc = 0x228770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x228774: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228774u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1576F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576F2u, _value); } while (0);
    // 0x228778: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x228778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x22877c: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x22877cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1576F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576F4u, _value); } while (0);
    // 0x228780: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228780u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1576F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1576F6u, _value); } while (0);
    // 0x228784: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x228784u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1576F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1576F8u, _value); } while (0);
    // 0x228788: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228788u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1576F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1576F9u, _value); } while (0);
    // 0x22878c: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x22878cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1576FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1576FAu, _value); } while (0);
    // 0x228790: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157708u, _value); } while (0);
    // 0x228794: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15771Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15771Cu, _value); } while (0);
    // 0x228798: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157700u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157700u, _value); } while (0);
    // 0x22879c: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x22879cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15770Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15770Cu, _value); } while (0);
    // 0x2287a0: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x2287a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157710u, _value); } while (0);
    // 0x2287a4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2287a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157728u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157728u, _value); } while (0);
    // 0x2287a8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2287a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157734u, _value); } while (0);
    // 0x2287ac: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2287acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15772Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15772Cu, _value); } while (0);
    // 0x2287b0: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x2287b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157730u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157730u, _value); } while (0);
    // 0x2287b4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2287b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2287b8: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x2287b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157740u, _value); } while (0);
    // 0x2287bc: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x2287bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2287c0: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2287c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157742u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157742u, _value); } while (0);
    // 0x2287c4: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x2287c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2287c8: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x2287c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157744u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157744u, _value); } while (0);
    // 0x2287cc: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x2287ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157746u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157746u, _value); } while (0);
    // 0x2287d0: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x2287d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157748u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157748u, _value); } while (0);
    // 0x2287d4: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x2287d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157749u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157749u, _value); } while (0);
    // 0x2287d8: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x2287d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15774Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15774Au, _value); } while (0);
    // 0x2287dc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2287dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157758u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157758u, _value); } while (0);
    // 0x2287e0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2287e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15776Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15776Cu, _value); } while (0);
    // 0x2287e4: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x2287e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157750u, _value); } while (0);
    // 0x2287e8: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x2287e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15775Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15775Cu, _value); } while (0);
    // 0x2287ec: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x2287ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157760u, _value); } while (0);
    // 0x2287f0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2287f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157778u, _value); } while (0);
    // 0x2287f4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2287f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157784u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157784u, _value); } while (0);
    // 0x2287f8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2287f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15777Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15777Cu, _value); } while (0);
    // 0x2287fc: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x2287fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157780u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157780u, _value); } while (0);
    // 0x228800: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228800u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228804: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228804u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157790u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157790u, _value); } while (0);
    // 0x228808: 0x24120047  addiu       $s2, $zero, 0x47
    ctx->pc = 0x228808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x22880c: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x22880cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157792u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157792u, _value); } while (0);
    // 0x228810: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x228810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x228814: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x228814u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157794u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157794u, _value); } while (0);
    // 0x228818: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228818u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157796u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157796u, _value); } while (0);
    // 0x22881c: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x22881cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157798u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157798u, _value); } while (0);
    // 0x228820: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x228820u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157799u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157799u, _value); } while (0);
    // 0x228824: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x228824u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15779Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15779Au, _value); } while (0);
    // 0x228828: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1577A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577A8u, _value); } while (0);
    // 0x22882c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22882cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1577BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577BCu, _value); } while (0);
    // 0x228830: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x228830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1577A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577A0u, _value); } while (0);
    // 0x228834: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1577ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577ACu, _value); } while (0);
    // 0x228838: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1577B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577B0u, _value); } while (0);
    // 0x22883c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22883cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1577C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577C8u, _value); } while (0);
    // 0x228840: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228840u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1577D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577D4u, _value); } while (0);
    // 0x228844: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1577CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577CCu, _value); } while (0);
    // 0x228848: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228848u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1577D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1577D0u, _value); } while (0);
    // 0x22884c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22884cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228850: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228850u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1577E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1577E2u, _value); } while (0);
    // 0x228854: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x228854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x228858: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228858u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1577E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1577E0u, _value); } while (0);
    // 0x22885c: 0x24120059  addiu       $s2, $zero, 0x59
    ctx->pc = 0x22885cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x228860: 0xa7c60004  sh          $a2, 0x4($fp)
    ctx->pc = 0x228860u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1577E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1577E4u, _value); } while (0);
    // 0x228864: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x228864u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1577E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1577E6u, _value); } while (0);
    // 0x228868: 0xa3c80008  sb          $t0, 0x8($fp)
    ctx->pc = 0x228868u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1577E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1577E8u, _value); } while (0);
    // 0x22886c: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x22886cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1577E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1577E9u, _value); } while (0);
    // 0x228870: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x228870u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1577EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1577EAu, _value); } while (0);
    // 0x228874: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1577F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577F8u, _value); } while (0);
    // 0x228878: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15780Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15780Cu, _value); } while (0);
    // 0x22887c: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x22887cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1577F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577F0u, _value); } while (0);
    // 0x228880: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x228880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1577FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1577FCu, _value); } while (0);
    // 0x228884: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x228884u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157800u, _value); } while (0);
    // 0x228888: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157818u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157818u, _value); } while (0);
    // 0x22888c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22888cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157824u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157824u, _value); } while (0);
    // 0x228890: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15781Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15781Cu, _value); } while (0);
    // 0x228894: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x228894u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157820u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157820u, _value); } while (0);
    // 0x228898: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228898u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22889c: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x22889cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157832u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157832u, _value); } while (0);
    // 0x2288a0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2288a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2288a4: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x2288a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157830u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157830u, _value); } while (0);
    // 0x2288a8: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x2288a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2288ac: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2288acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157834u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157834u, _value); } while (0);
    // 0x2288b0: 0x2412005a  addiu       $s2, $zero, 0x5A
    ctx->pc = 0x2288b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2288b4: 0xa7c60006  sh          $a2, 0x6($fp)
    ctx->pc = 0x2288b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157836u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157836u, _value); } while (0);
    // 0x2288b8: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x2288b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157838u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157838u, _value); } while (0);
    // 0x2288bc: 0xa3c8000a  sb          $t0, 0xA($fp)
    ctx->pc = 0x2288bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x15783Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15783Au, _value); } while (0);
    // 0x2288c0: 0xafcb0020  sw          $t3, 0x20($fp)
    ctx->pc = 0x2288c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x157850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157850u, _value); } while (0);
    // 0x2288c4: 0xa7c60040  sh          $a2, 0x40($fp)
    ctx->pc = 0x2288c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157870u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157870u, _value); } while (0);
    // 0x2288c8: 0xa3c80009  sb          $t0, 0x9($fp)
    ctx->pc = 0x2288c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157839u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157839u, _value); } while (0);
    // 0x2288cc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2288ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157848u, _value); } while (0);
    // 0x2288d0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2288d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15785Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15785Cu, _value); } while (0);
    // 0x2288d4: 0xafc60010  sw          $a2, 0x10($fp)
    ctx->pc = 0x2288d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x157840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157840u, _value); } while (0);
    // 0x2288d8: 0xafcb001c  sw          $t3, 0x1C($fp)
    ctx->pc = 0x2288d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x15784Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15784Cu, _value); } while (0);
    // 0x2288dc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2288dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157868u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157868u, _value); } while (0);
    // 0x2288e0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2288e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157874u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157874u, _value); } while (0);
    // 0x2288e4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2288e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15786Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15786Cu, _value); } while (0);
    // 0x2288e8: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2288e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2288ec: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2288ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157882u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157882u, _value); } while (0);
    // 0x2288f0: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2288f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2288f4: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x2288f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157880u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157880u, _value); } while (0);
    // 0x2288f8: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x2288f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2288fc: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2288fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157884u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157884u, _value); } while (0);
    // 0x228900: 0x2412005b  addiu       $s2, $zero, 0x5B
    ctx->pc = 0x228900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x228904: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228904u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157886u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157886u, _value); } while (0);
    // 0x228908: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228908u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157888u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157888u, _value); } while (0);
    // 0x22890c: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x22890cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157889u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157889u, _value); } while (0);
    // 0x228910: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228910u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x15788Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15788Au, _value); } while (0);
    // 0x228914: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228914u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157898u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157898u, _value); } while (0);
    // 0x228918: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1578ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578ACu, _value); } while (0);
    // 0x22891c: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x22891cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157890u, _value); } while (0);
    // 0x228920: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15789Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15789Cu, _value); } while (0);
    // 0x228924: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1578A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578A0u, _value); } while (0);
    // 0x228928: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1578B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578B8u, _value); } while (0);
    // 0x22892c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22892cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1578C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578C4u, _value); } while (0);
    // 0x228930: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1578BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578BCu, _value); } while (0);
    // 0x228934: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228934u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1578C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1578C0u, _value); } while (0);
    // 0x228938: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228938u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22893c: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x22893cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1578D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1578D2u, _value); } while (0);
    // 0x228940: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x228940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x228944: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x228944u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1578D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1578D0u, _value); } while (0);
    // 0x228948: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x228948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x22894c: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x22894cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1578D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1578D4u, _value); } while (0);
    // 0x228950: 0x2412005c  addiu       $s2, $zero, 0x5C
    ctx->pc = 0x228950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x228954: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228954u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1578D6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1578D6u, _value); } while (0);
    // 0x228958: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228958u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x1578D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1578D8u, _value); } while (0);
    // 0x22895c: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x22895cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1578D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1578D9u, _value); } while (0);
    // 0x228960: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228960u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1578DAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1578DAu, _value); } while (0);
    // 0x228964: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1578E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578E8u, _value); } while (0);
    // 0x228968: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1578FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578FCu, _value); } while (0);
    // 0x22896c: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x22896cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1578E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578E0u, _value); } while (0);
    // 0x228970: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1578ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578ECu, _value); } while (0);
    // 0x228974: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228974u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1578F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1578F0u, _value); } while (0);
    // 0x228978: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157908u, _value); } while (0);
    // 0x22897c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22897cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157914u, _value); } while (0);
    // 0x228980: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15790Cu, _value); } while (0);
    // 0x228984: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228984u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157910u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157910u, _value); } while (0);
    // 0x228988: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228988u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22898c: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x22898cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157922u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157922u, _value); } while (0);
    // 0x228990: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x228990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x228994: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x228994u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157920u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157920u, _value); } while (0);
    // 0x228998: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x228998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x22899c: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x22899cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157924u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157924u, _value); } while (0);
    // 0x2289a0: 0x2412005d  addiu       $s2, $zero, 0x5D
    ctx->pc = 0x2289a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2289a4: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x2289a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157926u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157926u, _value); } while (0);
    // 0x2289a8: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x2289a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157928u, _value); } while (0);
    // 0x2289ac: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x2289acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157929u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157929u, _value); } while (0);
    // 0x2289b0: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x2289b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x15792Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15792Au, _value); } while (0);
    // 0x2289b4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2289b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157938u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157938u, _value); } while (0);
    // 0x2289b8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2289b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15794Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15794Cu, _value); } while (0);
    // 0x2289bc: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x2289bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157930u, _value); } while (0);
    // 0x2289c0: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x2289c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15793Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15793Cu, _value); } while (0);
    // 0x2289c4: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x2289c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157940u, _value); } while (0);
    // 0x2289c8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2289c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157958u, _value); } while (0);
    // 0x2289cc: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2289ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157964u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157964u, _value); } while (0);
    // 0x2289d0: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2289d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15795Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15795Cu, _value); } while (0);
    // 0x2289d4: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x2289d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157960u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157960u, _value); } while (0);
    // 0x2289d8: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2289d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2289dc: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2289dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157972u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157972u, _value); } while (0);
    // 0x2289e0: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2289e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2289e4: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x2289e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157970u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157970u, _value); } while (0);
    // 0x2289e8: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x2289e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2289ec: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2289ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157974u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157974u, _value); } while (0);
    // 0x2289f0: 0x2412005e  addiu       $s2, $zero, 0x5E
    ctx->pc = 0x2289f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2289f4: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x2289f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157976u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157976u, _value); } while (0);
    // 0x2289f8: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x2289f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157978u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157978u, _value); } while (0);
    // 0x2289fc: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x2289fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157979u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157979u, _value); } while (0);
    // 0x228a00: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228a00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x15797Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15797Au, _value); } while (0);
    // 0x228a04: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157988u, _value); } while (0);
    // 0x228a08: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15799Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15799Cu, _value); } while (0);
    // 0x228a0c: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228a0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157980u, _value); } while (0);
    // 0x228a10: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15798Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15798Cu, _value); } while (0);
    // 0x228a14: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157990u, _value); } while (0);
    // 0x228a18: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1579A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579A8u, _value); } while (0);
    // 0x228a1c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228a1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1579B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579B4u, _value); } while (0);
    // 0x228a20: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1579ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579ACu, _value); } while (0);
    // 0x228a24: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228a24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1579B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1579B0u, _value); } while (0);
    // 0x228a28: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228a28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228a2c: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228a2cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1579C2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1579C2u, _value); } while (0);
    // 0x228a30: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x228a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x228a34: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x228a34u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1579C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1579C0u, _value); } while (0);
    // 0x228a38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x228a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228a3c: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x228a3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1579C4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1579C4u, _value); } while (0);
    // 0x228a40: 0x2412004e  addiu       $s2, $zero, 0x4E
    ctx->pc = 0x228a40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x228a44: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228a44u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1579C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1579C6u, _value); } while (0);
    // 0x228a48: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228a48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x1579C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1579C8u, _value); } while (0);
    // 0x228a4c: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228a4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1579C9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1579C9u, _value); } while (0);
    // 0x228a50: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228a50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1579CAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1579CAu, _value); } while (0);
    // 0x228a54: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1579D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579D8u, _value); } while (0);
    // 0x228a58: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1579ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579ECu, _value); } while (0);
    // 0x228a5c: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228a5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1579D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579D0u, _value); } while (0);
    // 0x228a60: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1579DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579DCu, _value); } while (0);
    // 0x228a64: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228a64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1579E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579E0u, _value); } while (0);
    // 0x228a68: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1579F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579F8u, _value); } while (0);
    // 0x228a6c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228a6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A04u, _value); } while (0);
    // 0x228a70: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228a70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1579FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1579FCu, _value); } while (0);
    // 0x228a74: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228a74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157A00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A00u, _value); } while (0);
    // 0x228a78: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228a78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228a7c: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228a7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157A12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A12u, _value); } while (0);
    // 0x228a80: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x228a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x228a84: 0xa3c40009  sb          $a0, 0x9($fp)
    ctx->pc = 0x228a84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157A19u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157A19u, _value); } while (0);
    // 0x228a88: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x228a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x228a8c: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228a8cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157A10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A10u, _value); } while (0);
    // 0x228a90: 0x2412004f  addiu       $s2, $zero, 0x4F
    ctx->pc = 0x228a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x228a94: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228a94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157A14u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A14u, _value); } while (0);
    // 0x228a98: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x228a9c: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228a9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157A16u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A16u, _value); } while (0);
    // 0x228aa0: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228aa0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157A18u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157A18u, _value); } while (0);
    // 0x228aa4: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228aa4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157A1Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157A1Au, _value); } while (0);
    // 0x228aa8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228aa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A28u, _value); } while (0);
    // 0x228aac: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A3Cu, _value); } while (0);
    // 0x228ab0: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A20u, _value); } while (0);
    // 0x228ab4: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228ab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157A2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A2Cu, _value); } while (0);
    // 0x228ab8: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228ab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A30u, _value); } while (0);
    // 0x228abc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228abcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A48u, _value); } while (0);
    // 0x228ac0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228ac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A54u, _value); } while (0);
    // 0x228ac4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A4Cu, _value); } while (0);
    // 0x228ac8: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228ac8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157A50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A50u, _value); } while (0);
    // 0x228acc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228accu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228ad0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228ad0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157A62u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A62u, _value); } while (0);
    // 0x228ad4: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x228ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x228ad8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228ad8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157A60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A60u, _value); } while (0);
    // 0x228adc: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x228adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x228ae0: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228ae0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157A64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A64u, _value); } while (0);
    // 0x228ae4: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x228ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x228ae8: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228ae8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157A66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157A66u, _value); } while (0);
    // 0x228aec: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228aecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157A68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157A68u, _value); } while (0);
    // 0x228af0: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228af0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157A69u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157A69u, _value); } while (0);
    // 0x228af4: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228af4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157A6Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157A6Au, _value); } while (0);
    // 0x228af8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A78u, _value); } while (0);
    // 0x228afc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A8Cu, _value); } while (0);
    // 0x228b00: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228b00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A70u, _value); } while (0);
    // 0x228b04: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228b04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157A7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A7Cu, _value); } while (0);
    // 0x228b08: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228b08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A80u, _value); } while (0);
    // 0x228b0c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228b0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A98u, _value); } while (0);
    // 0x228b10: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228b10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157AA4u, _value); } while (0);
    // 0x228b14: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228b14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157A9Cu, _value); } while (0);
    // 0x228b18: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228b18u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157AA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157AA0u, _value); } while (0);
    // 0x228b1c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228b1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228b20: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228b20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157AB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157AB2u, _value); } while (0);
    // 0x228b24: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x228b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x228b28: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228b28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157AB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157AB0u, _value); } while (0);
    // 0x228b2c: 0x24120051  addiu       $s2, $zero, 0x51
    ctx->pc = 0x228b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x228b30: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228b30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157AB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157AB4u, _value); } while (0);
    // 0x228b34: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x228b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x228b38: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228b38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157AB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157AB6u, _value); } while (0);
    // 0x228b3c: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228b3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157AB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157AB8u, _value); } while (0);
    // 0x228b40: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228b40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157AB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157AB9u, _value); } while (0);
    // 0x228b44: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228b44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157ABAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157ABAu, _value); } while (0);
    // 0x228b48: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157AC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157AC8u, _value); } while (0);
    // 0x228b4c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228b4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157ADCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157ADCu, _value); } while (0);
    // 0x228b50: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157AC0u, _value); } while (0);
    // 0x228b54: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228b54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157ACCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157ACCu, _value); } while (0);
    // 0x228b58: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228b58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157AD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157AD0u, _value); } while (0);
    // 0x228b5c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228b5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157AE8u, _value); } while (0);
    // 0x228b60: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228b60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157AF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157AF4u, _value); } while (0);
    // 0x228b64: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228b64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157AECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157AECu, _value); } while (0);
    // 0x228b68: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228b68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157AF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157AF0u, _value); } while (0);
    // 0x228b6c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228b6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228b70: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228b70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157B02u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B02u, _value); } while (0);
    // 0x228b74: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x228b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x228b78: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228b78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157B00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B00u, _value); } while (0);
    // 0x228b7c: 0x24120052  addiu       $s2, $zero, 0x52
    ctx->pc = 0x228b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x228b80: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228b80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157B04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B04u, _value); } while (0);
    // 0x228b84: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x228b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x228b88: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228b88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157B06u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B06u, _value); } while (0);
    // 0x228b8c: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228b8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157B08u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157B08u, _value); } while (0);
    // 0x228b90: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228b90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157B09u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157B09u, _value); } while (0);
    // 0x228b94: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228b94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157B0Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157B0Au, _value); } while (0);
    // 0x228b98: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B18u, _value); } while (0);
    // 0x228b9c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228b9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B2Cu, _value); } while (0);
    // 0x228ba0: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157B10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B10u, _value); } while (0);
    // 0x228ba4: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157B1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B1Cu, _value); } while (0);
    // 0x228ba8: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157B20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B20u, _value); } while (0);
    // 0x228bac: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B38u, _value); } while (0);
    // 0x228bb0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228bb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B44u, _value); } while (0);
    // 0x228bb4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B3Cu, _value); } while (0);
    // 0x228bb8: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228bb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157B40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B40u, _value); } while (0);
    // 0x228bbc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228bbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228bc0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228bc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157B52u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B52u, _value); } while (0);
    // 0x228bc4: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x228bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x228bc8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228bc8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157B50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B50u, _value); } while (0);
    // 0x228bcc: 0x24120053  addiu       $s2, $zero, 0x53
    ctx->pc = 0x228bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x228bd0: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228bd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157B54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B54u, _value); } while (0);
    // 0x228bd4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x228bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x228bd8: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228bd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157B56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B56u, _value); } while (0);
    // 0x228bdc: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228bdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157B58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157B58u, _value); } while (0);
    // 0x228be0: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228be0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157B59u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157B59u, _value); } while (0);
    // 0x228be4: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228be4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157B5Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157B5Au, _value); } while (0);
    // 0x228be8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B68u, _value); } while (0);
    // 0x228bec: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B7Cu, _value); } while (0);
    // 0x228bf0: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228bf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B60u, _value); } while (0);
    // 0x228bf4: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B6Cu, _value); } while (0);
    // 0x228bf8: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B70u, _value); } while (0);
    // 0x228bfc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228bfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B88u, _value); } while (0);
    // 0x228c00: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B94u, _value); } while (0);
    // 0x228c04: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157B8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157B8Cu, _value); } while (0);
    // 0x228c08: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228c08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157B90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157B90u, _value); } while (0);
    // 0x228c0c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228c0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228c10: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228c10u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157BA2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BA2u, _value); } while (0);
    // 0x228c14: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x228c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x228c18: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228c18u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157BA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BA0u, _value); } while (0);
    // 0x228c1c: 0x24120054  addiu       $s2, $zero, 0x54
    ctx->pc = 0x228c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x228c20: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228c20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157BA4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BA4u, _value); } while (0);
    // 0x228c24: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x228c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x228c28: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228c28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157BA6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BA6u, _value); } while (0);
    // 0x228c2c: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228c2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157BA8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157BA8u, _value); } while (0);
    // 0x228c30: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228c30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157BA9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157BA9u, _value); } while (0);
    // 0x228c34: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228c34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157BAAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157BAAu, _value); } while (0);
    // 0x228c38: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228c38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157BB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157BB8u, _value); } while (0);
    // 0x228c3c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228c3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157BCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157BCCu, _value); } while (0);
    // 0x228c40: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157BB0u, _value); } while (0);
    // 0x228c44: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157BBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157BBCu, _value); } while (0);
    // 0x228c48: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157BC0u, _value); } while (0);
    // 0x228c4c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157BD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157BD8u, _value); } while (0);
    // 0x228c50: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157BE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157BE4u, _value); } while (0);
    // 0x228c54: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157BDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157BDCu, _value); } while (0);
    // 0x228c58: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228c58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157BE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BE0u, _value); } while (0);
    // 0x228c5c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228c5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228c60: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228c60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157BF2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BF2u, _value); } while (0);
    // 0x228c64: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x228c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x228c68: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228c68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157BF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BF0u, _value); } while (0);
    // 0x228c6c: 0x24120055  addiu       $s2, $zero, 0x55
    ctx->pc = 0x228c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x228c70: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228c70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157BF4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BF4u, _value); } while (0);
    // 0x228c74: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x228c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x228c78: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228c78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157BF6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157BF6u, _value); } while (0);
    // 0x228c7c: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228c7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157BF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157BF8u, _value); } while (0);
    // 0x228c80: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228c80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157BF9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157BF9u, _value); } while (0);
    // 0x228c84: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228c84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157BFAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157BFAu, _value); } while (0);
    // 0x228c88: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228c88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C08u, _value); } while (0);
    // 0x228c8c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228c8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C1Cu, _value); } while (0);
    // 0x228c90: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228c90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C00u, _value); } while (0);
    // 0x228c94: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157C0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C0Cu, _value); } while (0);
    // 0x228c98: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228c98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C10u, _value); } while (0);
    // 0x228c9c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228c9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C28u, _value); } while (0);
    // 0x228ca0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C34u, _value); } while (0);
    // 0x228ca4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228ca4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C2Cu, _value); } while (0);
    // 0x228ca8: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228ca8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157C30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C30u, _value); } while (0);
    // 0x228cac: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228cacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228cb0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x228cb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157C42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C42u, _value); } while (0);
    // 0x228cb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x228cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228cb8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228cb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157C40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C40u, _value); } while (0);
    // 0x228cbc: 0x24120051  addiu       $s2, $zero, 0x51
    ctx->pc = 0x228cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x228cc0: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x228cc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157C44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C44u, _value); } while (0);
    // 0x228cc4: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x228cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x228cc8: 0xa3c40009  sb          $a0, 0x9($fp)
    ctx->pc = 0x228cc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157C49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157C49u, _value); } while (0);
    // 0x228ccc: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x228cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x228cd0: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228cd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157C46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C46u, _value); } while (0);
    // 0x228cd4: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228cd4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157C48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157C48u, _value); } while (0);
    // 0x228cd8: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228cd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157C4Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157C4Au, _value); } while (0);
    // 0x228cdc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C58u, _value); } while (0);
    // 0x228ce0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C6Cu, _value); } while (0);
    // 0x228ce4: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157C50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C50u, _value); } while (0);
    // 0x228ce8: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157C5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C5Cu, _value); } while (0);
    // 0x228cec: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228cecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157C60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C60u, _value); } while (0);
    // 0x228cf0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C78u, _value); } while (0);
    // 0x228cf4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C84u, _value); } while (0);
    // 0x228cf8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157C7Cu, _value); } while (0);
    // 0x228cfc: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228cfcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157C80u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C80u, _value); } while (0);
    // 0x228d00: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228d00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228d04: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x228d04u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157C90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C90u, _value); } while (0);
    // 0x228d08: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x228d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x228d0c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228d0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157C92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C92u, _value); } while (0);
    // 0x228d10: 0x24120057  addiu       $s2, $zero, 0x57
    ctx->pc = 0x228d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x228d14: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228d14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157C94u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C94u, _value); } while (0);
    // 0x228d18: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x228d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x228d1c: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228d1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157C96u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157C96u, _value); } while (0);
    // 0x228d20: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228d20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157C98u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157C98u, _value); } while (0);
    // 0x228d24: 0xa3c00009  sb          $zero, 0x9($fp)
    ctx->pc = 0x228d24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157C99u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157C99u, _value); } while (0);
    // 0x228d28: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228d28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157C9Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157C9Au, _value); } while (0);
    // 0x228d2c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228d2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CA8u, _value); } while (0);
    // 0x228d30: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157CBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CBCu, _value); } while (0);
    // 0x228d34: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228d34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CA0u, _value); } while (0);
    // 0x228d38: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228d38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157CACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CACu, _value); } while (0);
    // 0x228d3c: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CB0u, _value); } while (0);
    // 0x228d40: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228d40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157CC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CC8u, _value); } while (0);
    // 0x228d44: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228d44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157CD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CD4u, _value); } while (0);
    // 0x228d48: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CCCu, _value); } while (0);
    // 0x228d4c: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228d4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157CD0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157CD0u, _value); } while (0);
    // 0x228d50: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228d50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228d54: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228d54u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157CE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157CE0u, _value); } while (0);
    // 0x228d58: 0x24120053  addiu       $s2, $zero, 0x53
    ctx->pc = 0x228d58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x228d5c: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228d5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157CE2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157CE2u, _value); } while (0);
    // 0x228d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228d64: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228d64u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157CE4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157CE4u, _value); } while (0);
    // 0x228d68: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x228d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x228d6c: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228d6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157CE6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157CE6u, _value); } while (0);
    // 0x228d70: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228d70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157CE8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157CE8u, _value); } while (0);
    // 0x228d74: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228d74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157CE9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157CE9u, _value); } while (0);
    // 0x228d78: 0xa3c0000a  sb          $zero, 0xA($fp)
    ctx->pc = 0x228d78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157CEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157CEAu, _value); } while (0);
    // 0x228d7c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228d7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CF8u, _value); } while (0);
    // 0x228d80: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228d80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D0Cu, _value); } while (0);
    // 0x228d84: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CF0u, _value); } while (0);
    // 0x228d88: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228d88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157CFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157CFCu, _value); } while (0);
    // 0x228d8c: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228d8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157D00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D00u, _value); } while (0);
    // 0x228d90: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228d90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D18u, _value); } while (0);
    // 0x228d94: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228d94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D24u, _value); } while (0);
    // 0x228d98: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228d98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D1Cu, _value); } while (0);
    // 0x228d9c: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228d9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157D20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D20u, _value); } while (0);
    // 0x228da0: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228da0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228da4: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x228da4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157D32u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D32u, _value); } while (0);
    // 0x228da8: 0x24120069  addiu       $s2, $zero, 0x69
    ctx->pc = 0x228da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x228dac: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x228dacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157D30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D30u, _value); } while (0);
    // 0x228db0: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x228db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x228db4: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x228db4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157D34u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D34u, _value); } while (0);
    // 0x228db8: 0x24120059  addiu       $s2, $zero, 0x59
    ctx->pc = 0x228db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x228dbc: 0xa3c2000a  sb          $v0, 0xA($fp)
    ctx->pc = 0x228dbcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157D3Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157D3Au, _value); } while (0);
    // 0x228dc0: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x228dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x228dc4: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228dc4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157D36u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D36u, _value); } while (0);
    // 0x228dc8: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228dc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157D38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157D38u, _value); } while (0);
    // 0x228dcc: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228dccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157D39u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157D39u, _value); } while (0);
    // 0x228dd0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D48u, _value); } while (0);
    // 0x228dd4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D5Cu, _value); } while (0);
    // 0x228dd8: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157D40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D40u, _value); } while (0);
    // 0x228ddc: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228ddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D4Cu, _value); } while (0);
    // 0x228de0: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D50u, _value); } while (0);
    // 0x228de4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D68u, _value); } while (0);
    // 0x228de8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D74u, _value); } while (0);
    // 0x228dec: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D6Cu, _value); } while (0);
    // 0x228df0: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228df0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157D70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D70u, _value); } while (0);
    // 0x228df4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228df4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228df8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228df8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157D82u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D82u, _value); } while (0);
    // 0x228dfc: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x228dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x228e00: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228e00u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157D84u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D84u, _value); } while (0);
    // 0x228e04: 0x2404006b  addiu       $a0, $zero, 0x6B
    ctx->pc = 0x228e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x228e08: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228e08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157D80u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D80u, _value); } while (0);
    // 0x228e0c: 0x2412005a  addiu       $s2, $zero, 0x5A
    ctx->pc = 0x228e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x228e10: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228e10u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157D86u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157D86u, _value); } while (0);
    // 0x228e14: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228e14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157D88u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157D88u, _value); } while (0);
    // 0x228e18: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228e18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157D89u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157D89u, _value); } while (0);
    // 0x228e1c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228e1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157D8Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157D8Au, _value); } while (0);
    // 0x228e20: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157D98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D98u, _value); } while (0);
    // 0x228e24: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228e24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157DACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DACu, _value); } while (0);
    // 0x228e28: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157D90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D90u, _value); } while (0);
    // 0x228e2c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228e2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157D9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157D9Cu, _value); } while (0);
    // 0x228e30: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DA0u, _value); } while (0);
    // 0x228e34: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157DB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DB8u, _value); } while (0);
    // 0x228e38: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228e38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157DC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DC4u, _value); } while (0);
    // 0x228e3c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157DBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DBCu, _value); } while (0);
    // 0x228e40: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228e40u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157DC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157DC0u, _value); } while (0);
    // 0x228e44: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228e44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228e48: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228e48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157DD2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157DD2u, _value); } while (0);
    // 0x228e4c: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x228e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x228e50: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228e50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157DD4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157DD4u, _value); } while (0);
    // 0x228e54: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x228e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x228e58: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228e58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157DD0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157DD0u, _value); } while (0);
    // 0x228e5c: 0x2412005b  addiu       $s2, $zero, 0x5B
    ctx->pc = 0x228e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x228e60: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228e60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157DD6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157DD6u, _value); } while (0);
    // 0x228e64: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228e64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157DD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157DD8u, _value); } while (0);
    // 0x228e68: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228e68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157DD9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157DD9u, _value); } while (0);
    // 0x228e6c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228e6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157DDAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157DDAu, _value); } while (0);
    // 0x228e70: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228e70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157DE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DE8u, _value); } while (0);
    // 0x228e74: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157DFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DFCu, _value); } while (0);
    // 0x228e78: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228e78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157DE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DE0u, _value); } while (0);
    // 0x228e7c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157DECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DECu, _value); } while (0);
    // 0x228e80: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157DF0u, _value); } while (0);
    // 0x228e84: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228e84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E08u, _value); } while (0);
    // 0x228e88: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E14u, _value); } while (0);
    // 0x228e8c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228e8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E0Cu, _value); } while (0);
    // 0x228e90: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228e90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157E10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E10u, _value); } while (0);
    // 0x228e94: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228e94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228e98: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228e98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157E22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E22u, _value); } while (0);
    // 0x228e9c: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x228e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x228ea0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228ea0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157E24u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E24u, _value); } while (0);
    // 0x228ea4: 0x2404006d  addiu       $a0, $zero, 0x6D
    ctx->pc = 0x228ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x228ea8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228ea8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157E20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E20u, _value); } while (0);
    // 0x228eac: 0x2412005c  addiu       $s2, $zero, 0x5C
    ctx->pc = 0x228eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x228eb0: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228eb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157E26u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E26u, _value); } while (0);
    // 0x228eb4: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228eb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157E28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157E28u, _value); } while (0);
    // 0x228eb8: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228eb8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157E29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157E29u, _value); } while (0);
    // 0x228ebc: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228ebcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157E2Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157E2Au, _value); } while (0);
    // 0x228ec0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228ec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E38u, _value); } while (0);
    // 0x228ec4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E4Cu, _value); } while (0);
    // 0x228ec8: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E30u, _value); } while (0);
    // 0x228ecc: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228eccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157E3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E3Cu, _value); } while (0);
    // 0x228ed0: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157E40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E40u, _value); } while (0);
    // 0x228ed4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228ed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E58u, _value); } while (0);
    // 0x228ed8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228ed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E64u, _value); } while (0);
    // 0x228edc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228edcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E5Cu, _value); } while (0);
    // 0x228ee0: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228ee0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157E60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E60u, _value); } while (0);
    // 0x228ee4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228ee4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228ee8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228ee8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157E72u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E72u, _value); } while (0);
    // 0x228eec: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x228eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x228ef0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228ef0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157E74u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E74u, _value); } while (0);
    // 0x228ef4: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x228ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x228ef8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228ef8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157E70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E70u, _value); } while (0);
    // 0x228efc: 0x2412005d  addiu       $s2, $zero, 0x5D
    ctx->pc = 0x228efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x228f00: 0xa3d30008  sb          $s3, 0x8($fp)
    ctx->pc = 0x228f00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x157E78u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157E78u, _value); } while (0);
    // 0x228f04: 0xa7c70006  sh          $a3, 0x6($fp)
    ctx->pc = 0x228f04u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157E76u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157E76u, _value); } while (0);
    // 0x228f08: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228f08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157E79u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157E79u, _value); } while (0);
    // 0x228f0c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228f0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157E7Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157E7Au, _value); } while (0);
    // 0x228f10: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228f10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E88u, _value); } while (0);
    // 0x228f14: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228f14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157E9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E9Cu, _value); } while (0);
    // 0x228f18: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228f18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E80u, _value); } while (0);
    // 0x228f1c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157E8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E8Cu, _value); } while (0);
    // 0x228f20: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228f20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157E90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157E90u, _value); } while (0);
    // 0x228f24: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228f24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157EA8u, _value); } while (0);
    // 0x228f28: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228f28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157EB4u, _value); } while (0);
    // 0x228f2c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228f2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157EACu, _value); } while (0);
    // 0x228f30: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228f30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157EB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157EB0u, _value); } while (0);
    // 0x228f34: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228f34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228f38: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228f38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157EC2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157EC2u, _value); } while (0);
    // 0x228f3c: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x228f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x228f40: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228f40u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157EC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157EC4u, _value); } while (0);
    // 0x228f44: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x228f48: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228f48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157EC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157EC0u, _value); } while (0);
    // 0x228f4c: 0x2412005e  addiu       $s2, $zero, 0x5E
    ctx->pc = 0x228f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x228f50: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x228f50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157EC6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157EC6u, _value); } while (0);
    // 0x228f54: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x228f54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157EC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157EC8u, _value); } while (0);
    // 0x228f58: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228f58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157EC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157EC9u, _value); } while (0);
    // 0x228f5c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228f5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157ECAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157ECAu, _value); } while (0);
    // 0x228f60: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157ED8u, _value); } while (0);
    // 0x228f64: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228f64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157EECu, _value); } while (0);
    // 0x228f68: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157ED0u, _value); } while (0);
    // 0x228f6c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228f6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157EDCu, _value); } while (0);
    // 0x228f70: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228f70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157EE0u, _value); } while (0);
    // 0x228f74: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228f74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157EF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157EF8u, _value); } while (0);
    // 0x228f78: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228f78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F04u, _value); } while (0);
    // 0x228f7c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157EFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157EFCu, _value); } while (0);
    // 0x228f80: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228f80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157F00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F00u, _value); } while (0);
    // 0x228f84: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228f84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228f88: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228f88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157F12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F12u, _value); } while (0);
    // 0x228f8c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x228f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x228f90: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228f90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157F14u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F14u, _value); } while (0);
    // 0x228f94: 0x24040071  addiu       $a0, $zero, 0x71
    ctx->pc = 0x228f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x228f98: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228f98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157F10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F10u, _value); } while (0);
    // 0x228f9c: 0x2412005f  addiu       $s2, $zero, 0x5F
    ctx->pc = 0x228f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x228fa0: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x228fa0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F16u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F16u, _value); } while (0);
    // 0x228fa4: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x228fa4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F18u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157F18u, _value); } while (0);
    // 0x228fa8: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228fa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157F19u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157F19u, _value); } while (0);
    // 0x228fac: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228facu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157F1Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157F1Au, _value); } while (0);
    // 0x228fb0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x228fb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F28u, _value); } while (0);
    // 0x228fb4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x228fb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F3Cu, _value); } while (0);
    // 0x228fb8: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x228fb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F20u, _value); } while (0);
    // 0x228fbc: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x228fbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157F2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F2Cu, _value); } while (0);
    // 0x228fc0: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x228fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F30u, _value); } while (0);
    // 0x228fc4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x228fc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F48u, _value); } while (0);
    // 0x228fc8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x228fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F54u, _value); } while (0);
    // 0x228fcc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x228fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F4Cu, _value); } while (0);
    // 0x228fd0: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x228fd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157F50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F50u, _value); } while (0);
    // 0x228fd4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x228fd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x228fd8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x228fd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157F62u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F62u, _value); } while (0);
    // 0x228fdc: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x228fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x228fe0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x228fe0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157F64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F64u, _value); } while (0);
    // 0x228fe4: 0x24040072  addiu       $a0, $zero, 0x72
    ctx->pc = 0x228fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x228fe8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x228fe8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157F60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F60u, _value); } while (0);
    // 0x228fec: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x228fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x228ff0: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x228ff0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157F66u, _value); } while (0);
    // 0x228ff4: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x228ff4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157F68u, _value); } while (0);
    // 0x228ff8: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x228ff8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157F69u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157F69u, _value); } while (0);
    // 0x228ffc: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x228ffcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157F6Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157F6Au, _value); } while (0);
    // 0x229000: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F78u, _value); } while (0);
    // 0x229004: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F8Cu, _value); } while (0);
    // 0x229008: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x229008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F70u, _value); } while (0);
    // 0x22900c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x22900cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F7Cu, _value); } while (0);
    // 0x229010: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x229010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F80u, _value); } while (0);
    // 0x229014: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F98u, _value); } while (0);
    // 0x229018: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FA4u, _value); } while (0);
    // 0x22901c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22901cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157F9Cu, _value); } while (0);
    // 0x229020: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x229020u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157FA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157FA0u, _value); } while (0);
    // 0x229024: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229024u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229028: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229028u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x157FB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157FB2u, _value); } while (0);
    // 0x22902c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x22902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x229030: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x229030u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x157FB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157FB4u, _value); } while (0);
    // 0x229034: 0x24040073  addiu       $a0, $zero, 0x73
    ctx->pc = 0x229034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x229038: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x229038u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x157FB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157FB0u, _value); } while (0);
    // 0x22903c: 0x24120061  addiu       $s2, $zero, 0x61
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x229040: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229040u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157FB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157FB6u, _value); } while (0);
    // 0x229044: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229044u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157FB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157FB8u, _value); } while (0);
    // 0x229048: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x229048u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157FB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157FB9u, _value); } while (0);
    // 0x22904c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x22904cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x157FBAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x157FBAu, _value); } while (0);
    // 0x229050: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229050u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157FC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FC8u, _value); } while (0);
    // 0x229054: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157FDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FDCu, _value); } while (0);
    // 0x229058: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x229058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157FC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FC0u, _value); } while (0);
    // 0x22905c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x22905cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157FCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FCCu, _value); } while (0);
    // 0x229060: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x229060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157FD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FD0u, _value); } while (0);
    // 0x229064: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229064u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157FE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FE8u, _value); } while (0);
    // 0x229068: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157FF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FF4u, _value); } while (0);
    // 0x22906c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22906cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x157FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157FECu, _value); } while (0);
    // 0x229070: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x229070u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x157FF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x157FF0u, _value); } while (0);
    // 0x229074: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229074u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229078: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229078u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158002u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158002u, _value); } while (0);
    // 0x22907c: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x22907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x229080: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x229080u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158004u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158004u, _value); } while (0);
    // 0x229084: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x229084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x229088: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x229088u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158000u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158000u, _value); } while (0);
    // 0x22908c: 0x24120074  addiu       $s2, $zero, 0x74
    ctx->pc = 0x22908cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x229090: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229090u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158006u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158006u, _value); } while (0);
    // 0x229094: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229094u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158008u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158008u, _value); } while (0);
    // 0x229098: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x229098u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x158009u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158009u, _value); } while (0);
    // 0x22909c: 0xa3c7000a  sb          $a3, 0xA($fp)
    ctx->pc = 0x22909cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x15800Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15800Au, _value); } while (0);
    // 0x2290a0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2290a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158018u, _value); } while (0);
    // 0x2290a4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2290a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15802Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15802Cu, _value); } while (0);
    // 0x2290a8: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x2290a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158010u, _value); } while (0);
    // 0x2290ac: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x2290acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15801Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15801Cu, _value); } while (0);
    // 0x2290b0: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x2290b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x158020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158020u, _value); } while (0);
    // 0x2290b4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2290b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158038u, _value); } while (0);
    // 0x2290b8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2290b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158044u, _value); } while (0);
    // 0x2290bc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2290bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15803Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15803Cu, _value); } while (0);
    // 0x2290c0: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x2290c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158040u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158040u, _value); } while (0);
    // 0x2290c4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2290c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2290c8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2290c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158052u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158052u, _value); } while (0);
    // 0x2290cc: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x2290ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2290d0: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x2290d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158050u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158050u, _value); } while (0);
    // 0x2290d4: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2290d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2290d8: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2290d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158054u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158054u, _value); } while (0);
    // 0x2290dc: 0x24120075  addiu       $s2, $zero, 0x75
    ctx->pc = 0x2290dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2290e0: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x2290e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158056u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158056u, _value); } while (0);
    // 0x2290e4: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x2290e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158058u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158058u, _value); } while (0);
    // 0x2290e8: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x2290e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x158059u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158059u, _value); } while (0);
    // 0x2290ec: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x2290ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x15805Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15805Au, _value); } while (0);
    // 0x2290f0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2290f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158068u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158068u, _value); } while (0);
    // 0x2290f4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2290f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15807Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15807Cu, _value); } while (0);
    // 0x2290f8: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x2290f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158060u, _value); } while (0);
    // 0x2290fc: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x2290fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15806Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15806Cu, _value); } while (0);
    // 0x229100: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x229100u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x158070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158070u, _value); } while (0);
    // 0x229104: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158088u, _value); } while (0);
    // 0x229108: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229108u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158094u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158094u, _value); } while (0);
    // 0x22910c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22910cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15808Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15808Cu, _value); } while (0);
    // 0x229110: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x229110u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158090u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158090u, _value); } while (0);
    // 0x229114: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229114u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229118: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229118u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1580A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580A2u, _value); } while (0);
    // 0x22911c: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x22911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x229120: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229120u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1580A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580A0u, _value); } while (0);
    // 0x229124: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x229124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x229128: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229128u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1580A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580A4u, _value); } while (0);
    // 0x22912c: 0x24120076  addiu       $s2, $zero, 0x76
    ctx->pc = 0x22912cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x229130: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229130u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580A6u, _value); } while (0);
    // 0x229134: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229134u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1580A8u, _value); } while (0);
    // 0x229138: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x229138u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1580A9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1580A9u, _value); } while (0);
    // 0x22913c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x22913cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1580AAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1580AAu, _value); } while (0);
    // 0x229140: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1580B8u, _value); } while (0);
    // 0x229144: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1580CCu, _value); } while (0);
    // 0x229148: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x229148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1580B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1580B0u, _value); } while (0);
    // 0x22914c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x22914cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1580BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1580BCu, _value); } while (0);
    // 0x229150: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x229150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1580C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1580C0u, _value); } while (0);
    // 0x229154: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1580D8u, _value); } while (0);
    // 0x229158: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1580E4u, _value); } while (0);
    // 0x22915c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22915cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1580DCu, _value); } while (0);
    // 0x229160: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x229160u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1580E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580E0u, _value); } while (0);
    // 0x229164: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229164u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229168: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229168u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1580F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580F2u, _value); } while (0);
    // 0x22916c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x22916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x229170: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229170u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1580F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580F0u, _value); } while (0);
    // 0x229174: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x229174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x229178: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229178u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1580F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580F4u, _value); } while (0);
    // 0x22917c: 0x24120077  addiu       $s2, $zero, 0x77
    ctx->pc = 0x22917cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x229180: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229180u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1580F6u, _value); } while (0);
    // 0x229184: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229184u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1580F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1580F8u, _value); } while (0);
    // 0x229188: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x229188u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1580F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1580F9u, _value); } while (0);
    // 0x22918c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x22918cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1580FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1580FAu, _value); } while (0);
    // 0x229190: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158108u, _value); } while (0);
    // 0x229194: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15811Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15811Cu, _value); } while (0);
    // 0x229198: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x229198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158100u, _value); } while (0);
    // 0x22919c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x22919cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15810Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15810Cu, _value); } while (0);
    // 0x2291a0: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x2291a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x158110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158110u, _value); } while (0);
    // 0x2291a4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2291a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158128u, _value); } while (0);
    // 0x2291a8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2291a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158134u, _value); } while (0);
    // 0x2291ac: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2291acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15812Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15812Cu, _value); } while (0);
    // 0x2291b0: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x2291b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158130u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158130u, _value); } while (0);
    // 0x2291b4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2291b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2291b8: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x2291b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158140u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158140u, _value); } while (0);
    // 0x2291bc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2291bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2291c0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x2291c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158142u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158142u, _value); } while (0);
    // 0x2291c4: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x2291c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2291c8: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2291c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158144u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158144u, _value); } while (0);
    // 0x2291cc: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x2291ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2291d0: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x2291d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158146u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158146u, _value); } while (0);
    // 0x2291d4: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x2291d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158148u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158148u, _value); } while (0);
    // 0x2291d8: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x2291d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x158149u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158149u, _value); } while (0);
    // 0x2291dc: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x2291dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x15814Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15814Au, _value); } while (0);
    // 0x2291e0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2291e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158158u, _value); } while (0);
    // 0x2291e4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2291e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15816Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15816Cu, _value); } while (0);
    // 0x2291e8: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x2291e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158150u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158150u, _value); } while (0);
    // 0x2291ec: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x2291ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15815Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15815Cu, _value); } while (0);
    // 0x2291f0: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x2291f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x158160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158160u, _value); } while (0);
    // 0x2291f4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2291f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158178u, _value); } while (0);
    // 0x2291f8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2291f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158184u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158184u, _value); } while (0);
    // 0x2291fc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2291fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15817Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15817Cu, _value); } while (0);
    // 0x229200: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x229200u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158180u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158180u, _value); } while (0);
    // 0x229204: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229204u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229208: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229208u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158190u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158190u, _value); } while (0);
    // 0x22920c: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x22920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x229210: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229210u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158192u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158192u, _value); } while (0);
    // 0x229214: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x229214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x229218: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229218u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158194u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158194u, _value); } while (0);
    // 0x22921c: 0x24120079  addiu       $s2, $zero, 0x79
    ctx->pc = 0x22921cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x229220: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229220u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158196u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158196u, _value); } while (0);
    // 0x229224: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229224u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158198u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158198u, _value); } while (0);
    // 0x229228: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x229228u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x158199u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158199u, _value); } while (0);
    // 0x22922c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x22922cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x15819Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15819Au, _value); } while (0);
    // 0x229230: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1581A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581A8u, _value); } while (0);
    // 0x229234: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1581BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581BCu, _value); } while (0);
    // 0x229238: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x229238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1581A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581A0u, _value); } while (0);
    // 0x22923c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x22923cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1581ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581ACu, _value); } while (0);
    // 0x229240: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x229240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1581B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581B0u, _value); } while (0);
    // 0x229244: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1581C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581C8u, _value); } while (0);
    // 0x229248: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1581D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581D4u, _value); } while (0);
    // 0x22924c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22924cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1581CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581CCu, _value); } while (0);
    // 0x229250: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x229250u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1581D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1581D0u, _value); } while (0);
    // 0x229254: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229254u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229258: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229258u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1581E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1581E0u, _value); } while (0);
    // 0x22925c: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x22925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x229260: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229260u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1581E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1581E2u, _value); } while (0);
    // 0x229264: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x229264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x229268: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229268u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1581E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1581E4u, _value); } while (0);
    // 0x22926c: 0x2412007a  addiu       $s2, $zero, 0x7A
    ctx->pc = 0x22926cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x229270: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229270u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1581E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1581E6u, _value); } while (0);
    // 0x229274: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229274u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1581E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1581E8u, _value); } while (0);
    // 0x229278: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x229278u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1581E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1581E9u, _value); } while (0);
    // 0x22927c: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x22927cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1581EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1581EAu, _value); } while (0);
    // 0x229280: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1581F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581F8u, _value); } while (0);
    // 0x229284: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15820Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15820Cu, _value); } while (0);
    // 0x229288: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x229288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1581F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581F0u, _value); } while (0);
    // 0x22928c: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x22928cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1581FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1581FCu, _value); } while (0);
    // 0x229290: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x229290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x158200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158200u, _value); } while (0);
    // 0x229294: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158218u, _value); } while (0);
    // 0x229298: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158224u, _value); } while (0);
    // 0x22929c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22929cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15821Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15821Cu, _value); } while (0);
    // 0x2292a0: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x2292a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158220u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158220u, _value); } while (0);
    // 0x2292a4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2292a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2292a8: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x2292a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158230u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158230u, _value); } while (0);
    // 0x2292ac: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2292acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x2292b0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x2292b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158232u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158232u, _value); } while (0);
    // 0x2292b4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2292b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2292b8: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2292b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158234u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158234u, _value); } while (0);
    // 0x2292bc: 0x2412007b  addiu       $s2, $zero, 0x7B
    ctx->pc = 0x2292bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2292c0: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x2292c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158236u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158236u, _value); } while (0);
    // 0x2292c4: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x2292c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158238u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158238u, _value); } while (0);
    // 0x2292c8: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x2292c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x158239u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158239u, _value); } while (0);
    // 0x2292cc: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x2292ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x15823Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15823Au, _value); } while (0);
    // 0x2292d0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2292d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158248u, _value); } while (0);
    // 0x2292d4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2292d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15825Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15825Cu, _value); } while (0);
    // 0x2292d8: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x2292d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158240u, _value); } while (0);
    // 0x2292dc: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x2292dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15824Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15824Cu, _value); } while (0);
    // 0x2292e0: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x2292e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x158250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158250u, _value); } while (0);
    // 0x2292e4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2292e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158268u, _value); } while (0);
    // 0x2292e8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2292e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158274u, _value); } while (0);
    // 0x2292ec: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2292ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15826Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15826Cu, _value); } while (0);
    // 0x2292f0: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x2292f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158270u, _value); } while (0);
    // 0x2292f4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2292f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2292f8: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x2292f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158280u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158280u, _value); } while (0);
    // 0x2292fc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2292fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x229300: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229300u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158282u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158282u, _value); } while (0);
    // 0x229304: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x229308: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229308u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158284u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158284u, _value); } while (0);
    // 0x22930c: 0x2412007c  addiu       $s2, $zero, 0x7C
    ctx->pc = 0x22930cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x229310: 0xa3ca000a  sb          $t2, 0xA($fp)
    ctx->pc = 0x229310u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x15828Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15828Au, _value); } while (0);
    // 0x229314: 0xafc90020  sw          $t1, 0x20($fp)
    ctx->pc = 0x229314u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1582A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582A0u, _value); } while (0);
    // 0x229318: 0xa7c70040  sh          $a3, 0x40($fp)
    ctx->pc = 0x229318u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1582C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1582C0u, _value); } while (0);
    // 0x22931c: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x22931cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158286u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158286u, _value); } while (0);
    // 0x229320: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229320u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158288u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158288u, _value); } while (0);
    // 0x229324: 0xa3ca0009  sb          $t2, 0x9($fp)
    ctx->pc = 0x229324u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x158289u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158289u, _value); } while (0);
    // 0x229328: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158298u, _value); } while (0);
    // 0x22932c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22932cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1582ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582ACu, _value); } while (0);
    // 0x229330: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x229330u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x158290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158290u, _value); } while (0);
    // 0x229334: 0xafc9001c  sw          $t1, 0x1C($fp)
    ctx->pc = 0x229334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x15829Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15829Cu, _value); } while (0);
    // 0x229338: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1582B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582B8u, _value); } while (0);
    // 0x22933c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22933cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1582C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582C4u, _value); } while (0);
    // 0x229340: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1582BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582BCu, _value); } while (0);
    // 0x229344: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229344u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229348: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229348u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1582D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1582D2u, _value); } while (0);
    // 0x22934c: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x22934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x229350: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229350u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1582D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1582D0u, _value); } while (0);
    // 0x229354: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x229354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x229358: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229358u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1582D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1582D4u, _value); } while (0);
    // 0x22935c: 0x2412007d  addiu       $s2, $zero, 0x7D
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x229360: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229360u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1582D6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1582D6u, _value); } while (0);
    // 0x229364: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229364u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1582D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1582D8u, _value); } while (0);
    // 0x229368: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x229368u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1582D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1582D9u, _value); } while (0);
    // 0x22936c: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x22936cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1582DAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1582DAu, _value); } while (0);
    // 0x229370: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1582E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582E8u, _value); } while (0);
    // 0x229374: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1582FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582FCu, _value); } while (0);
    // 0x229378: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1582E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582E0u, _value); } while (0);
    // 0x22937c: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x22937cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1582ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582ECu, _value); } while (0);
    // 0x229380: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1582F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1582F0u, _value); } while (0);
    // 0x229384: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158308u, _value); } while (0);
    // 0x229388: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229388u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158314u, _value); } while (0);
    // 0x22938c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22938cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15830Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15830Cu, _value); } while (0);
    // 0x229390: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x229390u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158310u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158310u, _value); } while (0);
    // 0x229394: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229394u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229398: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229398u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158320u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158320u, _value); } while (0);
    // 0x22939c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x22939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2293a0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x2293a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158322u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158322u, _value); } while (0);
    // 0x2293a4: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x2293a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2293a8: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2293a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158324u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158324u, _value); } while (0);
    // 0x2293ac: 0x2412007e  addiu       $s2, $zero, 0x7E
    ctx->pc = 0x2293acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2293b0: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x2293b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158326u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158326u, _value); } while (0);
    // 0x2293b4: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x2293b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158328u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158328u, _value); } while (0);
    // 0x2293b8: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x2293b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158329u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158329u, _value); } while (0);
    // 0x2293bc: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x2293bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15832Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15832Au, _value); } while (0);
    // 0x2293c0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2293c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158338u, _value); } while (0);
    // 0x2293c4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2293c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15834Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15834Cu, _value); } while (0);
    // 0x2293c8: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x2293c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158330u, _value); } while (0);
    // 0x2293cc: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x2293ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15833Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15833Cu, _value); } while (0);
    // 0x2293d0: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x2293d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158340u, _value); } while (0);
    // 0x2293d4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2293d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158358u, _value); } while (0);
    // 0x2293d8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2293d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158364u, _value); } while (0);
    // 0x2293dc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2293dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15835Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15835Cu, _value); } while (0);
    // 0x2293e0: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x2293e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158360u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158360u, _value); } while (0);
    // 0x2293e4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2293e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2293e8: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x2293e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158370u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158370u, _value); } while (0);
    // 0x2293ec: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x2293ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2293f0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x2293f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158372u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158372u, _value); } while (0);
    // 0x2293f4: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x2293f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2293f8: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2293f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158374u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158374u, _value); } while (0);
    // 0x2293fc: 0x2412007f  addiu       $s2, $zero, 0x7F
    ctx->pc = 0x2293fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x229400: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229400u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158376u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158376u, _value); } while (0);
    // 0x229404: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229404u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158378u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158378u, _value); } while (0);
    // 0x229408: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x229408u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158379u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158379u, _value); } while (0);
    // 0x22940c: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x22940cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15837Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15837Au, _value); } while (0);
    // 0x229410: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158388u, _value); } while (0);
    // 0x229414: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15839Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15839Cu, _value); } while (0);
    // 0x229418: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158380u, _value); } while (0);
    // 0x22941c: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x22941cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15838Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15838Cu, _value); } while (0);
    // 0x229420: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158390u, _value); } while (0);
    // 0x229424: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583A8u, _value); } while (0);
    // 0x229428: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583B4u, _value); } while (0);
    // 0x22942c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22942cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583ACu, _value); } while (0);
    // 0x229430: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x229430u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1583B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1583B0u, _value); } while (0);
    // 0x229434: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229434u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229438: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229438u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1583C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1583C0u, _value); } while (0);
    // 0x22943c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x22943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x229440: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229440u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1583C2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1583C2u, _value); } while (0);
    // 0x229444: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x229444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x229448: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229448u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1583C4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1583C4u, _value); } while (0);
    // 0x22944c: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x22944cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x229450: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x229450u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1583C6u, _value); } while (0);
    // 0x229454: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x229454u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1583C8u, _value); } while (0);
    // 0x229458: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x229458u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1583C9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1583C9u, _value); } while (0);
    // 0x22945c: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x22945cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1583CAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1583CAu, _value); } while (0);
    // 0x229460: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583D8u, _value); } while (0);
    // 0x229464: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583ECu, _value); } while (0);
    // 0x229468: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1583D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583D0u, _value); } while (0);
    // 0x22946c: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x22946cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1583DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583DCu, _value); } while (0);
    // 0x229470: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1583E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583E0u, _value); } while (0);
    // 0x229474: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583F8u, _value); } while (0);
    // 0x229478: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158404u, _value); } while (0);
    // 0x22947c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22947cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1583FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1583FCu, _value); } while (0);
    // 0x229480: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x229480u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158400u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158400u, _value); } while (0);
    // 0x229484: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229484u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229488: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229488u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158410u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158410u, _value); } while (0);
    // 0x22948c: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x22948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x229490: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229490u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158412u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158412u, _value); } while (0);
    // 0x229494: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x229494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x229498: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229498u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158414u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158414u, _value); } while (0);
    // 0x22949c: 0x24120081  addiu       $s2, $zero, 0x81
    ctx->pc = 0x22949cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2294a0: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x2294a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158416u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158416u, _value); } while (0);
    // 0x2294a4: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x2294a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158418u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158418u, _value); } while (0);
    // 0x2294a8: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x2294a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158419u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158419u, _value); } while (0);
    // 0x2294ac: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x2294acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15841Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15841Au, _value); } while (0);
    // 0x2294b0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2294b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158428u, _value); } while (0);
    // 0x2294b4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2294b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15843Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15843Cu, _value); } while (0);
    // 0x2294b8: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x2294b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158420u, _value); } while (0);
    // 0x2294bc: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x2294bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15842Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15842Cu, _value); } while (0);
    // 0x2294c0: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x2294c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158430u, _value); } while (0);
    // 0x2294c4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2294c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158448u, _value); } while (0);
    // 0x2294c8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2294c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158454u, _value); } while (0);
    // 0x2294cc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2294ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15844Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15844Cu, _value); } while (0);
    // 0x2294d0: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x2294d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158450u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158450u, _value); } while (0);
    // 0x2294d4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2294d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2294d8: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x2294d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158460u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158460u, _value); } while (0);
    // 0x2294dc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2294dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2294e0: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x2294e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158462u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158462u, _value); } while (0);
    // 0x2294e4: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2294e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2294e8: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x2294e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158464u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158464u, _value); } while (0);
    // 0x2294ec: 0x24120082  addiu       $s2, $zero, 0x82
    ctx->pc = 0x2294ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2294f0: 0xa7c00006  sh          $zero, 0x6($fp)
    ctx->pc = 0x2294f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158466u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158466u, _value); } while (0);
    // 0x2294f4: 0xa3c00008  sb          $zero, 0x8($fp)
    ctx->pc = 0x2294f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158468u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158468u, _value); } while (0);
    // 0x2294f8: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x2294f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158469u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158469u, _value); } while (0);
    // 0x2294fc: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x2294fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15846Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15846Au, _value); } while (0);
    // 0x229500: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158478u, _value); } while (0);
    // 0x229504: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15848Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15848Cu, _value); } while (0);
    // 0x229508: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158470u, _value); } while (0);
    // 0x22950c: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x22950cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15847Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15847Cu, _value); } while (0);
    // 0x229510: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158480u, _value); } while (0);
    // 0x229514: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158498u, _value); } while (0);
    // 0x229518: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1584A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584A4u, _value); } while (0);
    // 0x22951c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22951cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15849Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15849Cu, _value); } while (0);
    // 0x229520: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x229520u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1584A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1584A0u, _value); } while (0);
    // 0x229524: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229524u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229528: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229528u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1584B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1584B0u, _value); } while (0);
    // 0x22952c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229530: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229530u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1584B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1584B2u, _value); } while (0);
    // 0x229534: 0x24040071  addiu       $a0, $zero, 0x71
    ctx->pc = 0x229534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x229538: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229538u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1584B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1584B4u, _value); } while (0);
    // 0x22953c: 0x24120059  addiu       $s2, $zero, 0x59
    ctx->pc = 0x22953cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x229540: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229540u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1584B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1584B6u, _value); } while (0);
    // 0x229544: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x229544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x229548: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229548u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x1584B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1584B8u, _value); } while (0);
    // 0x22954c: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x22954cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1584B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1584B9u, _value); } while (0);
    // 0x229550: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x229550u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1584BAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1584BAu, _value); } while (0);
    // 0x229554: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1584C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584C8u, _value); } while (0);
    // 0x229558: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1584DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584DCu, _value); } while (0);
    // 0x22955c: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x22955cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1584C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584C0u, _value); } while (0);
    // 0x229560: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x229560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1584CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584CCu, _value); } while (0);
    // 0x229564: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1584D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584D0u, _value); } while (0);
    // 0x229568: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1584E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584E8u, _value); } while (0);
    // 0x22956c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22956cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1584F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584F4u, _value); } while (0);
    // 0x229570: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1584ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1584ECu, _value); } while (0);
    // 0x229574: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x229574u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1584F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1584F0u, _value); } while (0);
    // 0x229578: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229578u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22957c: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x22957cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158500u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158500u, _value); } while (0);
    // 0x229580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229584: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229584u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158502u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158502u, _value); } while (0);
    // 0x229588: 0x24120072  addiu       $s2, $zero, 0x72
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x22958c: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x22958cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158504u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158504u, _value); } while (0);
    // 0x229590: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x229590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x229594: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229594u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158506u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158506u, _value); } while (0);
    // 0x229598: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x229598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x22959c: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x22959cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158508u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158508u, _value); } while (0);
    // 0x2295a0: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x2295a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158509u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158509u, _value); } while (0);
    // 0x2295a4: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x2295a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15850Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15850Au, _value); } while (0);
    // 0x2295a8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2295a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158518u, _value); } while (0);
    // 0x2295ac: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2295acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15852Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15852Cu, _value); } while (0);
    // 0x2295b0: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x2295b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158510u, _value); } while (0);
    // 0x2295b4: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x2295b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15851Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15851Cu, _value); } while (0);
    // 0x2295b8: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x2295b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158520u, _value); } while (0);
    // 0x2295bc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2295bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158538u, _value); } while (0);
    // 0x2295c0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2295c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158544u, _value); } while (0);
    // 0x2295c4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2295c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15853Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15853Cu, _value); } while (0);
    // 0x2295c8: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x2295c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158540u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158540u, _value); } while (0);
    // 0x2295cc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2295ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2295d0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2295d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158550u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158550u, _value); } while (0);
    // 0x2295d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2295d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2295d8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2295d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158552u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158552u, _value); } while (0);
    // 0x2295dc: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x2295dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2295e0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x2295e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158554u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158554u, _value); } while (0);
    // 0x2295e4: 0x2404005b  addiu       $a0, $zero, 0x5B
    ctx->pc = 0x2295e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2295e8: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x2295e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158556u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158556u, _value); } while (0);
    // 0x2295ec: 0x24120085  addiu       $s2, $zero, 0x85
    ctx->pc = 0x2295ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x2295f0: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x2295f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158558u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158558u, _value); } while (0);
    // 0x2295f4: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x2295f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158559u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158559u, _value); } while (0);
    // 0x2295f8: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x2295f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15855Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15855Au, _value); } while (0);
    // 0x2295fc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2295fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158568u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158568u, _value); } while (0);
    // 0x229600: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15857Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15857Cu, _value); } while (0);
    // 0x229604: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158560u, _value); } while (0);
    // 0x229608: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x229608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15856Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15856Cu, _value); } while (0);
    // 0x22960c: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x22960cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158570u, _value); } while (0);
    // 0x229610: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158588u, _value); } while (0);
    // 0x229614: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158594u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158594u, _value); } while (0);
    // 0x229618: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15858Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15858Cu, _value); } while (0);
    // 0x22961c: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x22961cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158590u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158590u, _value); } while (0);
    // 0x229620: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229620u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229624: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229624u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1585A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585A0u, _value); } while (0);
    // 0x229628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22962c: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x22962cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1585A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585A2u, _value); } while (0);
    // 0x229630: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x229630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x229634: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229634u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1585A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585A4u, _value); } while (0);
    // 0x229638: 0x2412005c  addiu       $s2, $zero, 0x5C
    ctx->pc = 0x229638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x22963c: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x22963cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1585A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585A6u, _value); } while (0);
    // 0x229640: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x229640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x229644: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229644u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x1585A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1585A8u, _value); } while (0);
    // 0x229648: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x229648u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1585A9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1585A9u, _value); } while (0);
    // 0x22964c: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x22964cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1585AAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1585AAu, _value); } while (0);
    // 0x229650: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1585B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1585B8u, _value); } while (0);
    // 0x229654: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1585CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1585CCu, _value); } while (0);
    // 0x229658: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1585B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1585B0u, _value); } while (0);
    // 0x22965c: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x22965cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1585BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1585BCu, _value); } while (0);
    // 0x229660: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1585C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1585C0u, _value); } while (0);
    // 0x229664: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1585D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1585D8u, _value); } while (0);
    // 0x229668: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1585E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1585E4u, _value); } while (0);
    // 0x22966c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22966cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1585DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1585DCu, _value); } while (0);
    // 0x229670: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x229670u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1585E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585E0u, _value); } while (0);
    // 0x229674: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229674u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229678: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229678u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1585F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585F0u, _value); } while (0);
    // 0x22967c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229680: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229680u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1585F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585F2u, _value); } while (0);
    // 0x229684: 0x24120075  addiu       $s2, $zero, 0x75
    ctx->pc = 0x229684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x229688: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x229688u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1585F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585F4u, _value); } while (0);
    // 0x22968c: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x22968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x229690: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229690u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1585F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1585F6u, _value); } while (0);
    // 0x229694: 0x24040087  addiu       $a0, $zero, 0x87
    ctx->pc = 0x229694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x229698: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229698u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x1585F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1585F8u, _value); } while (0);
    // 0x22969c: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x22969cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1585F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1585F9u, _value); } while (0);
    // 0x2296a0: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x2296a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1585FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1585FAu, _value); } while (0);
    // 0x2296a4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2296a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158608u, _value); } while (0);
    // 0x2296a8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2296a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15861Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15861Cu, _value); } while (0);
    // 0x2296ac: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x2296acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158600u, _value); } while (0);
    // 0x2296b0: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x2296b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15860Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15860Cu, _value); } while (0);
    // 0x2296b4: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x2296b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158610u, _value); } while (0);
    // 0x2296b8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2296b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158628u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158628u, _value); } while (0);
    // 0x2296bc: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2296bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158634u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158634u, _value); } while (0);
    // 0x2296c0: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2296c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15862Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15862Cu, _value); } while (0);
    // 0x2296c4: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x2296c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158630u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158630u, _value); } while (0);
    // 0x2296c8: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2296c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2296cc: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2296ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158640u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158640u, _value); } while (0);
    // 0x2296d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2296d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2296d4: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2296d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158642u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158642u, _value); } while (0);
    // 0x2296d8: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x2296d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2296dc: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x2296dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158644u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158644u, _value); } while (0);
    // 0x2296e0: 0x2404005e  addiu       $a0, $zero, 0x5E
    ctx->pc = 0x2296e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2296e4: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x2296e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158646u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158646u, _value); } while (0);
    // 0x2296e8: 0x24120088  addiu       $s2, $zero, 0x88
    ctx->pc = 0x2296e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2296ec: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x2296ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158648u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158648u, _value); } while (0);
    // 0x2296f0: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x2296f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158649u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158649u, _value); } while (0);
    // 0x2296f4: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x2296f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15864Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15864Au, _value); } while (0);
    // 0x2296f8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2296f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158658u, _value); } while (0);
    // 0x2296fc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2296fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15866Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15866Cu, _value); } while (0);
    // 0x229700: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158650u, _value); } while (0);
    // 0x229704: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x229704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15865Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15865Cu, _value); } while (0);
    // 0x229708: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229708u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158660u, _value); } while (0);
    // 0x22970c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22970cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158678u, _value); } while (0);
    // 0x229710: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158684u, _value); } while (0);
    // 0x229714: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15867Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15867Cu, _value); } while (0);
    // 0x229718: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x229718u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158680u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158680u, _value); } while (0);
    // 0x22971c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22971cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229720: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229720u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158690u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158690u, _value); } while (0);
    // 0x229724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229728: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229728u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158692u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158692u, _value); } while (0);
    // 0x22972c: 0x24040077  addiu       $a0, $zero, 0x77
    ctx->pc = 0x22972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x229730: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229730u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158694u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158694u, _value); } while (0);
    // 0x229734: 0x2412005f  addiu       $s2, $zero, 0x5F
    ctx->pc = 0x229734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x229738: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229738u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158696u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158696u, _value); } while (0);
    // 0x22973c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x22973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x229740: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229740u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158698u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158698u, _value); } while (0);
    // 0x229744: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x229744u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158699u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158699u, _value); } while (0);
    // 0x229748: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x229748u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15869Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15869Au, _value); } while (0);
    // 0x22974c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22974cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1586A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586A8u, _value); } while (0);
    // 0x229750: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1586BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586BCu, _value); } while (0);
    // 0x229754: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1586A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586A0u, _value); } while (0);
    // 0x229758: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x229758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1586ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586ACu, _value); } while (0);
    // 0x22975c: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x22975cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1586B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586B0u, _value); } while (0);
    // 0x229760: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1586C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586C8u, _value); } while (0);
    // 0x229764: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1586D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586D4u, _value); } while (0);
    // 0x229768: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1586CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586CCu, _value); } while (0);
    // 0x22976c: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x22976cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1586D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1586D0u, _value); } while (0);
    // 0x229770: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229770u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229774: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229774u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1586E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1586E0u, _value); } while (0);
    // 0x229778: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22977c: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x22977cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1586E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1586E2u, _value); } while (0);
    // 0x229780: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x229780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x229784: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x229784u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1586E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1586E4u, _value); } while (0);
    // 0x229788: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x229788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22978c: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x22978cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1586E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1586E6u, _value); } while (0);
    // 0x229790: 0x2404008a  addiu       $a0, $zero, 0x8A
    ctx->pc = 0x229790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x229794: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229794u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x1586E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1586E8u, _value); } while (0);
    // 0x229798: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x229798u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1586E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1586E9u, _value); } while (0);
    // 0x22979c: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x22979cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1586EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1586EAu, _value); } while (0);
    // 0x2297a0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2297a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1586F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586F8u, _value); } while (0);
    // 0x2297a4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2297a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15870Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15870Cu, _value); } while (0);
    // 0x2297a8: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x2297a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1586F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586F0u, _value); } while (0);
    // 0x2297ac: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x2297acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1586FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1586FCu, _value); } while (0);
    // 0x2297b0: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x2297b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158700u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158700u, _value); } while (0);
    // 0x2297b4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2297b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158718u, _value); } while (0);
    // 0x2297b8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2297b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158724u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158724u, _value); } while (0);
    // 0x2297bc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2297bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15871Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15871Cu, _value); } while (0);
    // 0x2297c0: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x2297c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158720u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158720u, _value); } while (0);
    // 0x2297c4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2297c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2297c8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2297c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158730u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158730u, _value); } while (0);
    // 0x2297cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2297ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2297d0: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2297d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158732u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158732u, _value); } while (0);
    // 0x2297d4: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x2297d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x2297d8: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x2297d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158734u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158734u, _value); } while (0);
    // 0x2297dc: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x2297dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2297e0: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x2297e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158736u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158736u, _value); } while (0);
    // 0x2297e4: 0x2412008b  addiu       $s2, $zero, 0x8B
    ctx->pc = 0x2297e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x2297e8: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x2297e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158738u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158738u, _value); } while (0);
    // 0x2297ec: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x2297ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158739u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158739u, _value); } while (0);
    // 0x2297f0: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x2297f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15873Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15873Au, _value); } while (0);
    // 0x2297f4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2297f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158748u, _value); } while (0);
    // 0x2297f8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2297f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15875Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15875Cu, _value); } while (0);
    // 0x2297fc: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x2297fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158740u, _value); } while (0);
    // 0x229800: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x229800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15874Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15874Cu, _value); } while (0);
    // 0x229804: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229804u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x158750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158750u, _value); } while (0);
    // 0x229808: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158768u, _value); } while (0);
    // 0x22980c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22980cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158774u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158774u, _value); } while (0);
    // 0x229810: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15876Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15876Cu, _value); } while (0);
    // 0x229814: 0xa7d10040  sh          $s1, 0x40($fp)
    ctx->pc = 0x229814u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158770u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158770u, _value); } while (0);
    // 0x229818: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229818u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22981c: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x22981cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158780u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158780u, _value); } while (0);
    // 0x229820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229824: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229824u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158782u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158782u, _value); } while (0);
    // 0x229828: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x229828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x22982c: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x22982cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158784u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158784u, _value); } while (0);
    // 0x229830: 0x24120062  addiu       $s2, $zero, 0x62
    ctx->pc = 0x229830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x229834: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229834u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158786u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158786u, _value); } while (0);
    // 0x229838: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x229838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x22983c: 0xa3cf000a  sb          $t7, 0xA($fp)
    ctx->pc = 0x22983cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x15878Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15878Au, _value); } while (0);
    // 0x229840: 0xafd10010  sw          $s1, 0x10($fp)
    ctx->pc = 0x229840u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x158790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158790u, _value); } while (0);
    // 0x229844: 0xafd00020  sw          $s0, 0x20($fp)
    ctx->pc = 0x229844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1587A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587A0u, _value); } while (0);
    // 0x229848: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229848u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158788u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158788u, _value); } while (0);
    // 0x22984c: 0xa3cf0009  sb          $t7, 0x9($fp)
    ctx->pc = 0x22984cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x158789u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158789u, _value); } while (0);
    // 0x229850: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158798u, _value); } while (0);
    // 0x229854: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1587ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587ACu, _value); } while (0);
    // 0x229858: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x229858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x15879Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15879Cu, _value); } while (0);
    // 0x22985c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22985cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1587B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587B8u, _value); } while (0);
    // 0x229860: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1587C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587C4u, _value); } while (0);
    // 0x229864: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1587BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587BCu, _value); } while (0);
    // 0x229868: 0xa7ce0040  sh          $t6, 0x40($fp)
    ctx->pc = 0x229868u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x1587C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1587C0u, _value); } while (0);
    // 0x22986c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22986cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229870: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229870u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1587D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1587D0u, _value); } while (0);
    // 0x229874: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229878: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229878u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1587D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1587D2u, _value); } while (0);
    // 0x22987c: 0x2412007b  addiu       $s2, $zero, 0x7B
    ctx->pc = 0x22987cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x229880: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x229880u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1587D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1587D4u, _value); } while (0);
    // 0x229884: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x229884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x229888: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229888u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1587D6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1587D6u, _value); } while (0);
    // 0x22988c: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x22988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x229890: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229890u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x1587D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1587D8u, _value); } while (0);
    // 0x229894: 0xa3cc0009  sb          $t4, 0x9($fp)
    ctx->pc = 0x229894u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1587D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1587D9u, _value); } while (0);
    // 0x229898: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229898u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x1587DAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1587DAu, _value); } while (0);
    // 0x22989c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22989cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1587E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587E8u, _value); } while (0);
    // 0x2298a0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2298a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1587FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587FCu, _value); } while (0);
    // 0x2298a4: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x2298a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1587E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587E0u, _value); } while (0);
    // 0x2298a8: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x2298a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1587ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587ECu, _value); } while (0);
    // 0x2298ac: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x2298acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1587F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1587F0u, _value); } while (0);
    // 0x2298b0: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2298b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158808u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158808u, _value); } while (0);
    // 0x2298b4: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2298b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158814u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158814u, _value); } while (0);
    // 0x2298b8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2298b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15880Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15880Cu, _value); } while (0);
    // 0x2298bc: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x2298bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158810u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158810u, _value); } while (0);
    // 0x2298c0: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2298c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2298c4: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2298c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158820u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158820u, _value); } while (0);
    // 0x2298c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2298c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2298cc: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2298ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158822u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158822u, _value); } while (0);
    // 0x2298d0: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x2298d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2298d4: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x2298d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158824u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158824u, _value); } while (0);
    // 0x2298d8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2298d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2298dc: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x2298dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158826u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158826u, _value); } while (0);
    // 0x2298e0: 0x2412008e  addiu       $s2, $zero, 0x8E
    ctx->pc = 0x2298e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2298e4: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x2298e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158828u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158828u, _value); } while (0);
    // 0x2298e8: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x2298e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158829u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158829u, _value); } while (0);
    // 0x2298ec: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x2298ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x15882Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15882Au, _value); } while (0);
    // 0x2298f0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2298f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158838u, _value); } while (0);
    // 0x2298f4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2298f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15884Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15884Cu, _value); } while (0);
    // 0x2298f8: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x2298f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158830u, _value); } while (0);
    // 0x2298fc: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x2298fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x15883Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15883Cu, _value); } while (0);
    // 0x229900: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158840u, _value); } while (0);
    // 0x229904: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158858u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158858u, _value); } while (0);
    // 0x229908: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158864u, _value); } while (0);
    // 0x22990c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22990cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15885Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15885Cu, _value); } while (0);
    // 0x229910: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229910u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158860u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158860u, _value); } while (0);
    // 0x229914: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229914u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229918: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229918u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158870u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158870u, _value); } while (0);
    // 0x22991c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229920: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229920u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158872u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158872u, _value); } while (0);
    // 0x229924: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x229924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x229928: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229928u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158874u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158874u, _value); } while (0);
    // 0x22992c: 0x24120065  addiu       $s2, $zero, 0x65
    ctx->pc = 0x22992cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x229930: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229930u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158876u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158876u, _value); } while (0);
    // 0x229934: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x229934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x229938: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229938u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158878u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158878u, _value); } while (0);
    // 0x22993c: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x22993cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158879u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158879u, _value); } while (0);
    // 0x229940: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229940u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x15887Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15887Au, _value); } while (0);
    // 0x229944: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229944u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158888u, _value); } while (0);
    // 0x229948: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15889Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15889Cu, _value); } while (0);
    // 0x22994c: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x22994cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158880u, _value); } while (0);
    // 0x229950: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x15888Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15888Cu, _value); } while (0);
    // 0x229954: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229954u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158890u, _value); } while (0);
    // 0x229958: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229958u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1588A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588A8u, _value); } while (0);
    // 0x22995c: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22995cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1588B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588B4u, _value); } while (0);
    // 0x229960: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1588ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588ACu, _value); } while (0);
    // 0x229964: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229964u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1588B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1588B0u, _value); } while (0);
    // 0x229968: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229968u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22996c: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x22996cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1588C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1588C0u, _value); } while (0);
    // 0x229970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229974: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229974u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1588C2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1588C2u, _value); } while (0);
    // 0x229978: 0x2412007e  addiu       $s2, $zero, 0x7E
    ctx->pc = 0x229978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x22997c: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x22997cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1588C4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1588C4u, _value); } while (0);
    // 0x229980: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x229980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x229984: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229984u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1588C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1588C6u, _value); } while (0);
    // 0x229988: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x229988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x22998c: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x22998cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x1588C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1588C8u, _value); } while (0);
    // 0x229990: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229990u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x1588C9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1588C9u, _value); } while (0);
    // 0x229994: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229994u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x1588CAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1588CAu, _value); } while (0);
    // 0x229998: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229998u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1588D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588D8u, _value); } while (0);
    // 0x22999c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22999cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1588ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588ECu, _value); } while (0);
    // 0x2299a0: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x2299a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1588D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588D0u, _value); } while (0);
    // 0x2299a4: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x2299a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1588DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588DCu, _value); } while (0);
    // 0x2299a8: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x2299a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1588E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588E0u, _value); } while (0);
    // 0x2299ac: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x2299acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1588F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588F8u, _value); } while (0);
    // 0x2299b0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x2299b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158904u, _value); } while (0);
    // 0x2299b4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x2299b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1588FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1588FCu, _value); } while (0);
    // 0x2299b8: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x2299b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158900u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158900u, _value); } while (0);
    // 0x2299bc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x2299bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2299c0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x2299c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158910u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158910u, _value); } while (0);
    // 0x2299c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2299c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2299c8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x2299c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158912u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158912u, _value); } while (0);
    // 0x2299cc: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2299ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2299d0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x2299d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158914u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158914u, _value); } while (0);
    // 0x2299d4: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x2299d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2299d8: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x2299d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158916u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158916u, _value); } while (0);
    // 0x2299dc: 0x24120091  addiu       $s2, $zero, 0x91
    ctx->pc = 0x2299dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2299e0: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x2299e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158918u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158918u, _value); } while (0);
    // 0x2299e4: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x2299e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158919u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158919u, _value); } while (0);
    // 0x2299e8: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x2299e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x15891Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15891Au, _value); } while (0);
    // 0x2299ec: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2299ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158928u, _value); } while (0);
    // 0x2299f0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x2299f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15893Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15893Cu, _value); } while (0);
    // 0x2299f4: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x2299f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158920u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158920u, _value); } while (0);
    // 0x2299f8: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x2299f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x15892Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15892Cu, _value); } while (0);
    // 0x2299fc: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x2299fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158930u, _value); } while (0);
    // 0x229a00: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158948u, _value); } while (0);
    // 0x229a04: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158954u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158954u, _value); } while (0);
    // 0x229a08: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15894Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15894Cu, _value); } while (0);
    // 0x229a0c: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229a0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158950u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158950u, _value); } while (0);
    // 0x229a10: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229a10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229a14: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229a14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158960u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158960u, _value); } while (0);
    // 0x229a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229a1c: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229a1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158962u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158962u, _value); } while (0);
    // 0x229a20: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x229a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x229a24: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229a24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158964u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158964u, _value); } while (0);
    // 0x229a28: 0x24120068  addiu       $s2, $zero, 0x68
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x229a2c: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229a2cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158966u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158966u, _value); } while (0);
    // 0x229a30: 0x24020092  addiu       $v0, $zero, 0x92
    ctx->pc = 0x229a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x229a34: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229a34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158968u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158968u, _value); } while (0);
    // 0x229a38: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229a38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158969u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158969u, _value); } while (0);
    // 0x229a3c: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229a3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x15896Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15896Au, _value); } while (0);
    // 0x229a40: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229a40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158978u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158978u, _value); } while (0);
    // 0x229a44: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229a44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15898Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15898Cu, _value); } while (0);
    // 0x229a48: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229a48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158970u, _value); } while (0);
    // 0x229a4c: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229a4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x15897Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15897Cu, _value); } while (0);
    // 0x229a50: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229a50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158980u, _value); } while (0);
    // 0x229a54: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158998u, _value); } while (0);
    // 0x229a58: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1589A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589A4u, _value); } while (0);
    // 0x229a5c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229a5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15899Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15899Cu, _value); } while (0);
    // 0x229a60: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229a60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1589A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1589A0u, _value); } while (0);
    // 0x229a64: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229a64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229a68: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229a68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1589B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1589B0u, _value); } while (0);
    // 0x229a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229a70: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229a70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1589B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1589B2u, _value); } while (0);
    // 0x229a74: 0x24120081  addiu       $s2, $zero, 0x81
    ctx->pc = 0x229a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x229a78: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x229a78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1589B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1589B4u, _value); } while (0);
    // 0x229a7c: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x229a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x229a80: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229a80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1589B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1589B6u, _value); } while (0);
    // 0x229a84: 0x24040093  addiu       $a0, $zero, 0x93
    ctx->pc = 0x229a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x229a88: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229a88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x1589B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1589B8u, _value); } while (0);
    // 0x229a8c: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229a8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x1589B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1589B9u, _value); } while (0);
    // 0x229a90: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229a90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x1589BAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1589BAu, _value); } while (0);
    // 0x229a94: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1589C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589C8u, _value); } while (0);
    // 0x229a98: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1589DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589DCu, _value); } while (0);
    // 0x229a9c: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229a9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1589C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589C0u, _value); } while (0);
    // 0x229aa0: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229aa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1589CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589CCu, _value); } while (0);
    // 0x229aa4: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1589D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589D0u, _value); } while (0);
    // 0x229aa8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229aa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1589E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589E8u, _value); } while (0);
    // 0x229aac: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1589F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589F4u, _value); } while (0);
    // 0x229ab0: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1589ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1589ECu, _value); } while (0);
    // 0x229ab4: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229ab4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1589F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1589F0u, _value); } while (0);
    // 0x229ab8: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229abc: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x229abcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158A00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A00u, _value); } while (0);
    // 0x229ac0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x229ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229ac4: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229ac4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158A02u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A02u, _value); } while (0);
    // 0x229ac8: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x229acc: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x229accu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158A04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A04u, _value); } while (0);
    // 0x229ad0: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x229ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x229ad4: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x229ad4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158A06u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A06u, _value); } while (0);
    // 0x229ad8: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229ad8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158A08u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158A08u, _value); } while (0);
    // 0x229adc: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229adcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158A09u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158A09u, _value); } while (0);
    // 0x229ae0: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229ae0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158A0Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158A0Au, _value); } while (0);
    // 0x229ae4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A18u, _value); } while (0);
    // 0x229ae8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A2Cu, _value); } while (0);
    // 0x229aec: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229aecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158A10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A10u, _value); } while (0);
    // 0x229af0: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229af0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158A1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A1Cu, _value); } while (0);
    // 0x229af4: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A20u, _value); } while (0);
    // 0x229af8: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A38u, _value); } while (0);
    // 0x229afc: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A44u, _value); } while (0);
    // 0x229b00: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229b00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A3Cu, _value); } while (0);
    // 0x229b04: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229b04u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158A40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A40u, _value); } while (0);
    // 0x229b08: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229b0c: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x229b0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158A56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A56u, _value); } while (0);
    // 0x229b10: 0x24120094  addiu       $s2, $zero, 0x94
    ctx->pc = 0x229b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x229b14: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229b14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158A50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A50u, _value); } while (0);
    // 0x229b18: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x229b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x229b1c: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229b1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158A52u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A52u, _value); } while (0);
    // 0x229b20: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x229b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x229b24: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229b24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158A54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A54u, _value); } while (0);
    // 0x229b28: 0x24120095  addiu       $s2, $zero, 0x95
    ctx->pc = 0x229b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x229b2c: 0xa3d50008  sb          $s5, 0x8($fp)
    ctx->pc = 0x229b2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x158A58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158A58u, _value); } while (0);
    // 0x229b30: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229b30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158A59u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158A59u, _value); } while (0);
    // 0x229b34: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229b34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158A5Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158A5Au, _value); } while (0);
    // 0x229b38: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A68u, _value); } while (0);
    // 0x229b3c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A7Cu, _value); } while (0);
    // 0x229b40: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A60u, _value); } while (0);
    // 0x229b44: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229b44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158A6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A6Cu, _value); } while (0);
    // 0x229b48: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A70u, _value); } while (0);
    // 0x229b4c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229b4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A88u, _value); } while (0);
    // 0x229b50: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A94u, _value); } while (0);
    // 0x229b54: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229b54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158A8Cu, _value); } while (0);
    // 0x229b58: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229b58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158A90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158A90u, _value); } while (0);
    // 0x229b5c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229b5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229b60: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229b60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158AA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AA0u, _value); } while (0);
    // 0x229b64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229b68: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229b68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158AA2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AA2u, _value); } while (0);
    // 0x229b6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229b70: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229b70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158AA4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AA4u, _value); } while (0);
    // 0x229b74: 0x24120084  addiu       $s2, $zero, 0x84
    ctx->pc = 0x229b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x229b78: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229b78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158AA6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AA6u, _value); } while (0);
    // 0x229b7c: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x229b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x229b80: 0xa3c40008  sb          $a0, 0x8($fp)
    ctx->pc = 0x229b80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158AA8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158AA8u, _value); } while (0);
    // 0x229b84: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x229b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x229b88: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229b88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158AA9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158AA9u, _value); } while (0);
    // 0x229b8c: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229b8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158AAAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158AAAu, _value); } while (0);
    // 0x229b90: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158AB8u, _value); } while (0);
    // 0x229b94: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229b94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158ACCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158ACCu, _value); } while (0);
    // 0x229b98: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158AB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158AB0u, _value); } while (0);
    // 0x229b9c: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229b9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158ABCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158ABCu, _value); } while (0);
    // 0x229ba0: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158AC0u, _value); } while (0);
    // 0x229ba4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158AD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158AD8u, _value); } while (0);
    // 0x229ba8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158AE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158AE4u, _value); } while (0);
    // 0x229bac: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158ADCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158ADCu, _value); } while (0);
    // 0x229bb0: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229bb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158AE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AE0u, _value); } while (0);
    // 0x229bb4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229bb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229bb8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x229bb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158AF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AF0u, _value); } while (0);
    // 0x229bbc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229bc0: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229bc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158AF2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AF2u, _value); } while (0);
    // 0x229bc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229bc8: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x229bc8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158AF4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AF4u, _value); } while (0);
    // 0x229bcc: 0x24040085  addiu       $a0, $zero, 0x85
    ctx->pc = 0x229bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x229bd0: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x229bd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158AF6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158AF6u, _value); } while (0);
    // 0x229bd4: 0x2412005a  addiu       $s2, $zero, 0x5A
    ctx->pc = 0x229bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x229bd8: 0xa3c20008  sb          $v0, 0x8($fp)
    ctx->pc = 0x229bd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158AF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158AF8u, _value); } while (0);
    // 0x229bdc: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x229be0: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229be0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158AF9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158AF9u, _value); } while (0);
    // 0x229be4: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229be4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158AFAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158AFAu, _value); } while (0);
    // 0x229be8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B08u, _value); } while (0);
    // 0x229bec: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B1Cu, _value); } while (0);
    // 0x229bf0: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229bf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B00u, _value); } while (0);
    // 0x229bf4: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158B0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B0Cu, _value); } while (0);
    // 0x229bf8: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158B10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B10u, _value); } while (0);
    // 0x229bfc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229bfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B28u, _value); } while (0);
    // 0x229c00: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B34u, _value); } while (0);
    // 0x229c04: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B2Cu, _value); } while (0);
    // 0x229c08: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229c08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158B30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B30u, _value); } while (0);
    // 0x229c0c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229c0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229c10: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229c10u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158B40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B40u, _value); } while (0);
    // 0x229c14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229c18: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229c18u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158B42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B42u, _value); } while (0);
    // 0x229c1c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229c20: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x229c20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158B44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B44u, _value); } while (0);
    // 0x229c24: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x229c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x229c28: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229c28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158B46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B46u, _value); } while (0);
    // 0x229c2c: 0x2404005b  addiu       $a0, $zero, 0x5B
    ctx->pc = 0x229c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x229c30: 0xa3d20008  sb          $s2, 0x8($fp)
    ctx->pc = 0x229c30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158B48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158B48u, _value); } while (0);
    // 0x229c34: 0x24120098  addiu       $s2, $zero, 0x98
    ctx->pc = 0x229c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x229c38: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229c38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158B49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158B49u, _value); } while (0);
    // 0x229c3c: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229c3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158B4Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158B4Au, _value); } while (0);
    // 0x229c40: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B58u, _value); } while (0);
    // 0x229c44: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B6Cu, _value); } while (0);
    // 0x229c48: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B50u, _value); } while (0);
    // 0x229c4c: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158B5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B5Cu, _value); } while (0);
    // 0x229c50: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B60u, _value); } while (0);
    // 0x229c54: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B78u, _value); } while (0);
    // 0x229c58: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229c58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B84u, _value); } while (0);
    // 0x229c5c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229c5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158B7Cu, _value); } while (0);
    // 0x229c60: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229c60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158B80u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B80u, _value); } while (0);
    // 0x229c64: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229c64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229c68: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229c68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158B90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B90u, _value); } while (0);
    // 0x229c6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229c70: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229c70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158B92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B92u, _value); } while (0);
    // 0x229c74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229c78: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229c78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158B94u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B94u, _value); } while (0);
    // 0x229c7c: 0x24120087  addiu       $s2, $zero, 0x87
    ctx->pc = 0x229c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x229c80: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229c80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158B96u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158B96u, _value); } while (0);
    // 0x229c84: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x229c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x229c88: 0xa3c40008  sb          $a0, 0x8($fp)
    ctx->pc = 0x229c88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158B98u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158B98u, _value); } while (0);
    // 0x229c8c: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x229c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x229c90: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229c90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158B99u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158B99u, _value); } while (0);
    // 0x229c94: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229c94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158B9Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158B9Au, _value); } while (0);
    // 0x229c98: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229c98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158BA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BA8u, _value); } while (0);
    // 0x229c9c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229c9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158BBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BBCu, _value); } while (0);
    // 0x229ca0: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158BA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BA0u, _value); } while (0);
    // 0x229ca4: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229ca4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158BACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BACu, _value); } while (0);
    // 0x229ca8: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229ca8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BB0u, _value); } while (0);
    // 0x229cac: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229cacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158BC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BC8u, _value); } while (0);
    // 0x229cb0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158BD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BD4u, _value); } while (0);
    // 0x229cb4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229cb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158BCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BCCu, _value); } while (0);
    // 0x229cb8: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229cb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158BD0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158BD0u, _value); } while (0);
    // 0x229cbc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229cbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229cc0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x229cc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158BE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158BE0u, _value); } while (0);
    // 0x229cc4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229cc8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229cc8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158BE2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158BE2u, _value); } while (0);
    // 0x229ccc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229cd0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x229cd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158BE4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158BE4u, _value); } while (0);
    // 0x229cd4: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x229cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x229cd8: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x229cd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158BE6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158BE6u, _value); } while (0);
    // 0x229cdc: 0x2412005d  addiu       $s2, $zero, 0x5D
    ctx->pc = 0x229cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x229ce0: 0xa3c20008  sb          $v0, 0x8($fp)
    ctx->pc = 0x229ce0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158BE8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158BE8u, _value); } while (0);
    // 0x229ce4: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x229ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x229ce8: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229ce8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158BE9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158BE9u, _value); } while (0);
    // 0x229cec: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229cecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158BEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158BEAu, _value); } while (0);
    // 0x229cf0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158BF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BF8u, _value); } while (0);
    // 0x229cf4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C0Cu, _value); } while (0);
    // 0x229cf8: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158BF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BF0u, _value); } while (0);
    // 0x229cfc: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229cfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158BFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158BFCu, _value); } while (0);
    // 0x229d00: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229d00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C00u, _value); } while (0);
    // 0x229d04: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C18u, _value); } while (0);
    // 0x229d08: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C24u, _value); } while (0);
    // 0x229d0c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C1Cu, _value); } while (0);
    // 0x229d10: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229d10u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158C20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C20u, _value); } while (0);
    // 0x229d14: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229d14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229d18: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229d18u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158C30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C30u, _value); } while (0);
    // 0x229d1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229d20: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229d20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158C32u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C32u, _value); } while (0);
    // 0x229d24: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229d28: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x229d28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158C34u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C34u, _value); } while (0);
    // 0x229d2c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x229d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x229d30: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229d30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158C36u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C36u, _value); } while (0);
    // 0x229d34: 0x2404005e  addiu       $a0, $zero, 0x5E
    ctx->pc = 0x229d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x229d38: 0xa3d20008  sb          $s2, 0x8($fp)
    ctx->pc = 0x229d38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158C38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158C38u, _value); } while (0);
    // 0x229d3c: 0x2412009b  addiu       $s2, $zero, 0x9B
    ctx->pc = 0x229d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x229d40: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229d40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158C39u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158C39u, _value); } while (0);
    // 0x229d44: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229d44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158C3Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158C3Au, _value); } while (0);
    // 0x229d48: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C48u, _value); } while (0);
    // 0x229d4c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229d4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C5Cu, _value); } while (0);
    // 0x229d50: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158C40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C40u, _value); } while (0);
    // 0x229d54: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229d54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158C4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C4Cu, _value); } while (0);
    // 0x229d58: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158C50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C50u, _value); } while (0);
    // 0x229d5c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229d5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C68u, _value); } while (0);
    // 0x229d60: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C74u, _value); } while (0);
    // 0x229d64: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229d64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C6Cu, _value); } while (0);
    // 0x229d68: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229d68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158C70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C70u, _value); } while (0);
    // 0x229d6c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229d6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229d70: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229d70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158C80u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C80u, _value); } while (0);
    // 0x229d74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229d78: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229d78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158C82u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C82u, _value); } while (0);
    // 0x229d7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229d80: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229d80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158C84u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C84u, _value); } while (0);
    // 0x229d84: 0x2412008a  addiu       $s2, $zero, 0x8A
    ctx->pc = 0x229d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x229d88: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229d88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158C86u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158C86u, _value); } while (0);
    // 0x229d8c: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x229d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x229d90: 0xa3c40008  sb          $a0, 0x8($fp)
    ctx->pc = 0x229d90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158C88u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158C88u, _value); } while (0);
    // 0x229d94: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x229d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x229d98: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229d98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158C89u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158C89u, _value); } while (0);
    // 0x229d9c: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229d9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158C8Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158C8Au, _value); } while (0);
    // 0x229da0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158C98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C98u, _value); } while (0);
    // 0x229da4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158CACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CACu, _value); } while (0);
    // 0x229da8: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229da8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158C90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C90u, _value); } while (0);
    // 0x229dac: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229dacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158C9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158C9Cu, _value); } while (0);
    // 0x229db0: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229db0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CA0u, _value); } while (0);
    // 0x229db4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229db4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CB8u, _value); } while (0);
    // 0x229db8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158CC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CC4u, _value); } while (0);
    // 0x229dbc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229dbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158CBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CBCu, _value); } while (0);
    // 0x229dc0: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229dc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158CC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158CC0u, _value); } while (0);
    // 0x229dc4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229dc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229dc8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x229dc8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158CD0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158CD0u, _value); } while (0);
    // 0x229dcc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229dd0: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229dd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158CD2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158CD2u, _value); } while (0);
    // 0x229dd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229dd8: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x229dd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158CD4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158CD4u, _value); } while (0);
    // 0x229ddc: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x229ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x229de0: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x229de0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158CD6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158CD6u, _value); } while (0);
    // 0x229de4: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x229de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x229de8: 0xa3c20008  sb          $v0, 0x8($fp)
    ctx->pc = 0x229de8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158CD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158CD8u, _value); } while (0);
    // 0x229dec: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x229decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x229df0: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229df0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158CD9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158CD9u, _value); } while (0);
    // 0x229df4: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229df4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158CDAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158CDAu, _value); } while (0);
    // 0x229df8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158CE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CE8u, _value); } while (0);
    // 0x229dfc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158CFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CFCu, _value); } while (0);
    // 0x229e00: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229e00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CE0u, _value); } while (0);
    // 0x229e04: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158CECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CECu, _value); } while (0);
    // 0x229e08: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158CF0u, _value); } while (0);
    // 0x229e0c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D08u, _value); } while (0);
    // 0x229e10: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229e10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D14u, _value); } while (0);
    // 0x229e14: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229e14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D0Cu, _value); } while (0);
    // 0x229e18: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229e18u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158D10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D10u, _value); } while (0);
    // 0x229e1c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229e1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229e20: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229e20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158D20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D20u, _value); } while (0);
    // 0x229e24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229e28: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229e28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158D22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D22u, _value); } while (0);
    // 0x229e2c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229e30: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x229e30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158D24u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D24u, _value); } while (0);
    // 0x229e34: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x229e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x229e38: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229e38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158D26u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D26u, _value); } while (0);
    // 0x229e3c: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x229e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x229e40: 0xa3d20008  sb          $s2, 0x8($fp)
    ctx->pc = 0x229e40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158D28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158D28u, _value); } while (0);
    // 0x229e44: 0x2412009e  addiu       $s2, $zero, 0x9E
    ctx->pc = 0x229e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x229e48: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229e48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158D29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158D29u, _value); } while (0);
    // 0x229e4c: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229e4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158D2Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158D2Au, _value); } while (0);
    // 0x229e50: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229e50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D38u, _value); } while (0);
    // 0x229e54: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229e54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D4Cu, _value); } while (0);
    // 0x229e58: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229e58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D30u, _value); } while (0);
    // 0x229e5c: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229e5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158D3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D3Cu, _value); } while (0);
    // 0x229e60: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158D40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D40u, _value); } while (0);
    // 0x229e64: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D58u, _value); } while (0);
    // 0x229e68: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229e68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D64u, _value); } while (0);
    // 0x229e6c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229e6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D5Cu, _value); } while (0);
    // 0x229e70: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229e70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158D60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D60u, _value); } while (0);
    // 0x229e74: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229e74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229e78: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229e78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158D70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D70u, _value); } while (0);
    // 0x229e7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229e80: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229e80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158D72u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D72u, _value); } while (0);
    // 0x229e84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229e88: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229e88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158D74u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D74u, _value); } while (0);
    // 0x229e8c: 0x2412008d  addiu       $s2, $zero, 0x8D
    ctx->pc = 0x229e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x229e90: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229e90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158D76u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158D76u, _value); } while (0);
    // 0x229e94: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x229e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x229e98: 0xa3c40008  sb          $a0, 0x8($fp)
    ctx->pc = 0x229e98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158D78u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158D78u, _value); } while (0);
    // 0x229e9c: 0x2404009f  addiu       $a0, $zero, 0x9F
    ctx->pc = 0x229e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x229ea0: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229ea0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158D79u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158D79u, _value); } while (0);
    // 0x229ea4: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229ea4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158D7Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158D7Au, _value); } while (0);
    // 0x229ea8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229ea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D88u, _value); } while (0);
    // 0x229eac: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229eacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158D9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D9Cu, _value); } while (0);
    // 0x229eb0: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229eb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158D80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D80u, _value); } while (0);
    // 0x229eb4: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229eb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158D8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D8Cu, _value); } while (0);
    // 0x229eb8: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158D90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158D90u, _value); } while (0);
    // 0x229ebc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229ebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158DA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DA8u, _value); } while (0);
    // 0x229ec0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229ec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158DB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DB4u, _value); } while (0);
    // 0x229ec4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158DACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DACu, _value); } while (0);
    // 0x229ec8: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229ec8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158DB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158DB0u, _value); } while (0);
    // 0x229ecc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229eccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229ed0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x229ed0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158DC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158DC0u, _value); } while (0);
    // 0x229ed4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229ed8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229ed8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158DC2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158DC2u, _value); } while (0);
    // 0x229edc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229ee0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x229ee0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158DC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158DC4u, _value); } while (0);
    // 0x229ee4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x229ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x229ee8: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x229ee8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158DC6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158DC6u, _value); } while (0);
    // 0x229eec: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x229eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x229ef0: 0xa3c20008  sb          $v0, 0x8($fp)
    ctx->pc = 0x229ef0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158DC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158DC8u, _value); } while (0);
    // 0x229ef4: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x229ef8: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229ef8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158DC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158DC9u, _value); } while (0);
    // 0x229efc: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229efcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158DCAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158DCAu, _value); } while (0);
    // 0x229f00: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158DD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DD8u, _value); } while (0);
    // 0x229f04: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229f04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158DECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DECu, _value); } while (0);
    // 0x229f08: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229f08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158DD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DD0u, _value); } while (0);
    // 0x229f0c: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229f0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158DDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DDCu, _value); } while (0);
    // 0x229f10: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229f10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158DE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DE0u, _value); } while (0);
    // 0x229f14: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229f14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158DF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DF8u, _value); } while (0);
    // 0x229f18: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229f18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E04u, _value); } while (0);
    // 0x229f1c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158DFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158DFCu, _value); } while (0);
    // 0x229f20: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229f20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158E00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E00u, _value); } while (0);
    // 0x229f24: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229f24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229f28: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x229f28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158E10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E10u, _value); } while (0);
    // 0x229f2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229f30: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x229f30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158E12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E12u, _value); } while (0);
    // 0x229f34: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229f34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229f38: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x229f38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158E14u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E14u, _value); } while (0);
    // 0x229f3c: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x229f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x229f40: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x229f40u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158E16u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E16u, _value); } while (0);
    // 0x229f44: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x229f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x229f48: 0xa3d20008  sb          $s2, 0x8($fp)
    ctx->pc = 0x229f48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158E18u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158E18u, _value); } while (0);
    // 0x229f4c: 0x241200a1  addiu       $s2, $zero, 0xA1
    ctx->pc = 0x229f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x229f50: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229f50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158E19u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158E19u, _value); } while (0);
    // 0x229f54: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229f54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158E1Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158E1Au, _value); } while (0);
    // 0x229f58: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229f58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E28u, _value); } while (0);
    // 0x229f5c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229f5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E3Cu, _value); } while (0);
    // 0x229f60: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E20u, _value); } while (0);
    // 0x229f64: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229f64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158E2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E2Cu, _value); } while (0);
    // 0x229f68: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E30u, _value); } while (0);
    // 0x229f6c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229f6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E48u, _value); } while (0);
    // 0x229f70: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229f70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E54u, _value); } while (0);
    // 0x229f74: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229f74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E4Cu, _value); } while (0);
    // 0x229f78: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229f78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158E50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E50u, _value); } while (0);
    // 0x229f7c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229f7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229f80: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x229f80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158E60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E60u, _value); } while (0);
    // 0x229f84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229f88: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x229f88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158E62u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E62u, _value); } while (0);
    // 0x229f8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229f90: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x229f90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158E64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E64u, _value); } while (0);
    // 0x229f94: 0x24120090  addiu       $s2, $zero, 0x90
    ctx->pc = 0x229f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x229f98: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x229f98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158E66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158E66u, _value); } while (0);
    // 0x229f9c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x229f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x229fa0: 0xa3c40008  sb          $a0, 0x8($fp)
    ctx->pc = 0x229fa0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158E68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158E68u, _value); } while (0);
    // 0x229fa4: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x229fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x229fa8: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x229fa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158E69u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158E69u, _value); } while (0);
    // 0x229fac: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x229facu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158E6Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158E6Au, _value); } while (0);
    // 0x229fb0: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x229fb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E78u, _value); } while (0);
    // 0x229fb4: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x229fb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E8Cu, _value); } while (0);
    // 0x229fb8: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x229fb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158E70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E70u, _value); } while (0);
    // 0x229fbc: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x229fbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E7Cu, _value); } while (0);
    // 0x229fc0: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x229fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E80u, _value); } while (0);
    // 0x229fc4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x229fc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E98u, _value); } while (0);
    // 0x229fc8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x229fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158EA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158EA4u, _value); } while (0);
    // 0x229fcc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x229fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158E9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158E9Cu, _value); } while (0);
    // 0x229fd0: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x229fd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158EA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158EA0u, _value); } while (0);
    // 0x229fd4: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x229fd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x229fd8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x229fd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158EB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158EB0u, _value); } while (0);
    // 0x229fdc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x229fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229fe0: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x229fe0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158EB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158EB2u, _value); } while (0);
    // 0x229fe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229fe8: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x229fe8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158EB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158EB4u, _value); } while (0);
    // 0x229fec: 0x24040091  addiu       $a0, $zero, 0x91
    ctx->pc = 0x229fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x229ff0: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x229ff0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158EB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158EB6u, _value); } while (0);
    // 0x229ff4: 0x24120066  addiu       $s2, $zero, 0x66
    ctx->pc = 0x229ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x229ff8: 0xa3c20008  sb          $v0, 0x8($fp)
    ctx->pc = 0x229ff8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158EB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158EB8u, _value); } while (0);
    // 0x229ffc: 0x240200a3  addiu       $v0, $zero, 0xA3
    ctx->pc = 0x229ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x22a000: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x22a000u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158EB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158EB9u, _value); } while (0);
    // 0x22a004: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x22a004u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158EBAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158EBAu, _value); } while (0);
    // 0x22a008: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22a008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158EC8u, _value); } while (0);
    // 0x22a00c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22a00cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158EDCu, _value); } while (0);
    // 0x22a010: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x22a010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158EC0u, _value); } while (0);
    // 0x22a014: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x22a014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158ECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158ECCu, _value); } while (0);
    // 0x22a018: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x22a018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158ED0u, _value); } while (0);
    // 0x22a01c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22a01cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158EE8u, _value); } while (0);
    // 0x22a020: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22a020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158EF4u, _value); } while (0);
    // 0x22a024: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22a024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158EECu, _value); } while (0);
    // 0x22a028: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x22a028u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158EF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158EF0u, _value); } while (0);
    // 0x22a02c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22a02cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22a030: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x22a030u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158F00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F00u, _value); } while (0);
    // 0x22a034: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a038: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x22a038u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158F02u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F02u, _value); } while (0);
    // 0x22a03c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x22a03cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a040: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x22a040u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158F04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F04u, _value); } while (0);
    // 0x22a044: 0x24020092  addiu       $v0, $zero, 0x92
    ctx->pc = 0x22a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x22a048: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x22a048u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158F06u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F06u, _value); } while (0);
    // 0x22a04c: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x22a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x22a050: 0xa3d20008  sb          $s2, 0x8($fp)
    ctx->pc = 0x22a050u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158F08u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158F08u, _value); } while (0);
    // 0x22a054: 0x241200a4  addiu       $s2, $zero, 0xA4
    ctx->pc = 0x22a054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x22a058: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x22a058u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158F09u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158F09u, _value); } while (0);
    // 0x22a05c: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x22a05cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158F0Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158F0Au, _value); } while (0);
    // 0x22a060: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22a060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F18u, _value); } while (0);
    // 0x22a064: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22a064u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F2Cu, _value); } while (0);
    // 0x22a068: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x22a068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158F10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F10u, _value); } while (0);
    // 0x22a06c: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x22a06cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F1Cu, _value); } while (0);
    // 0x22a070: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x22a070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F20u, _value); } while (0);
    // 0x22a074: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22a074u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F38u, _value); } while (0);
    // 0x22a078: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22a078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F44u, _value); } while (0);
    // 0x22a07c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22a07cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F3Cu, _value); } while (0);
    // 0x22a080: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x22a080u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158F40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F40u, _value); } while (0);
    // 0x22a084: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22a084u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22a088: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x22a088u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158F50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F50u, _value); } while (0);
    // 0x22a08c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a090: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x22a090u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158F52u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F52u, _value); } while (0);
    // 0x22a094: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22a094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a098: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x22a098u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158F54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F54u, _value); } while (0);
    // 0x22a09c: 0x24120093  addiu       $s2, $zero, 0x93
    ctx->pc = 0x22a09cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x22a0a0: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x22a0a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158F56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F56u, _value); } while (0);
    // 0x22a0a4: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x22a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x22a0a8: 0xa3c40008  sb          $a0, 0x8($fp)
    ctx->pc = 0x22a0a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158F58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158F58u, _value); } while (0);
    // 0x22a0ac: 0x240400a5  addiu       $a0, $zero, 0xA5
    ctx->pc = 0x22a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x22a0b0: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x22a0b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158F59u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158F59u, _value); } while (0);
    // 0x22a0b4: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x22a0b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158F5Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158F5Au, _value); } while (0);
    // 0x22a0b8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22a0b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F68u, _value); } while (0);
    // 0x22a0bc: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22a0bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F7Cu, _value); } while (0);
    // 0x22a0c0: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x22a0c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158F60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F60u, _value); } while (0);
    // 0x22a0c4: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x22a0c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158F6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F6Cu, _value); } while (0);
    // 0x22a0c8: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x22a0c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F70u, _value); } while (0);
    // 0x22a0cc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22a0ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F88u, _value); } while (0);
    // 0x22a0d0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22a0d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F94u, _value); } while (0);
    // 0x22a0d4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22a0d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158F8Cu, _value); } while (0);
    // 0x22a0d8: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x22a0d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158F90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158F90u, _value); } while (0);
    // 0x22a0dc: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22a0dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22a0e0: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x22a0e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158FA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FA0u, _value); } while (0);
    // 0x22a0e4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x22a0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a0e8: 0xa7c20002  sh          $v0, 0x2($fp)
    ctx->pc = 0x22a0e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158FA2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FA2u, _value); } while (0);
    // 0x22a0ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a0f0: 0xa7c40004  sh          $a0, 0x4($fp)
    ctx->pc = 0x22a0f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158FA4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FA4u, _value); } while (0);
    // 0x22a0f4: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x22a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x22a0f8: 0xa7d20006  sh          $s2, 0x6($fp)
    ctx->pc = 0x22a0f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158FA6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FA6u, _value); } while (0);
    // 0x22a0fc: 0x24120069  addiu       $s2, $zero, 0x69
    ctx->pc = 0x22a0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x22a100: 0xa3c20008  sb          $v0, 0x8($fp)
    ctx->pc = 0x22a100u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158FA8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158FA8u, _value); } while (0);
    // 0x22a104: 0x240200a6  addiu       $v0, $zero, 0xA6
    ctx->pc = 0x22a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x22a108: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x22a108u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158FA9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158FA9u, _value); } while (0);
    // 0x22a10c: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x22a10cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158FAAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158FAAu, _value); } while (0);
    // 0x22a110: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22a110u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158FB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158FB8u, _value); } while (0);
    // 0x22a114: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22a114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158FCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158FCCu, _value); } while (0);
    // 0x22a118: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x22a118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158FB0u, _value); } while (0);
    // 0x22a11c: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x22a11cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158FBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158FBCu, _value); } while (0);
    // 0x22a120: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x22a120u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x158FC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158FC0u, _value); } while (0);
    // 0x22a124: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22a124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158FD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158FD8u, _value); } while (0);
    // 0x22a128: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22a128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158FE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158FE4u, _value); } while (0);
    // 0x22a12c: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22a12cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x158FDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x158FDCu, _value); } while (0);
    // 0x22a130: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x22a130u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x158FE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FE0u, _value); } while (0);
    // 0x22a134: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22a134u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22a138: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x22a138u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158FF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FF0u, _value); } while (0);
    // 0x22a13c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a140: 0xa7d20002  sh          $s2, 0x2($fp)
    ctx->pc = 0x22a140u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158FF2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FF2u, _value); } while (0);
    // 0x22a144: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x22a144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a148: 0xa7c20004  sh          $v0, 0x4($fp)
    ctx->pc = 0x22a148u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x158FF4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FF4u, _value); } while (0);
    // 0x22a14c: 0x24020095  addiu       $v0, $zero, 0x95
    ctx->pc = 0x22a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x22a150: 0xa7c40006  sh          $a0, 0x6($fp)
    ctx->pc = 0x22a150u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x158FF6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x158FF6u, _value); } while (0);
    // 0x22a154: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x22a154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x22a158: 0xa3d20008  sb          $s2, 0x8($fp)
    ctx->pc = 0x22a158u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x158FF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158FF8u, _value); } while (0);
    // 0x22a15c: 0x241200a7  addiu       $s2, $zero, 0xA7
    ctx->pc = 0x22a15cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x22a160: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x22a160u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158FF9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158FF9u, _value); } while (0);
    // 0x22a164: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x22a164u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x158FFAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x158FFAu, _value); } while (0);
    // 0x22a168: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22a168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159008u, _value); } while (0);
    // 0x22a16c: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22a16cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15901Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15901Cu, _value); } while (0);
    // 0x22a170: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x22a170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x159000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159000u, _value); } while (0);
    // 0x22a174: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x22a174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x15900Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15900Cu, _value); } while (0);
    // 0x22a178: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x22a178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x159010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159010u, _value); } while (0);
    // 0x22a17c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22a17cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159028u, _value); } while (0);
    // 0x22a180: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22a180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159034u, _value); } while (0);
    // 0x22a184: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22a184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15902Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15902Cu, _value); } while (0);
    // 0x22a188: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x22a188u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x159030u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x159030u, _value); } while (0);
    // 0x22a18c: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x22a18cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x22a190: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x22a190u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x159040u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x159040u, _value); } while (0);
    // 0x22a194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a198: 0xa7c40002  sh          $a0, 0x2($fp)
    ctx->pc = 0x22a198u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x159042u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x159042u, _value); } while (0);
    // 0x22a19c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a1a0: 0xa7cc0040  sh          $t4, 0x40($fp)
    ctx->pc = 0x22a1a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x159080u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x159080u, _value); } while (0);
    // 0x22a1a4: 0xa7d20004  sh          $s2, 0x4($fp)
    ctx->pc = 0x22a1a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x159044u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x159044u, _value); } while (0);
    // 0x22a1a8: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x22a1a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x159046u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x159046u, _value); } while (0);
    // 0x22a1ac: 0xa3c40008  sb          $a0, 0x8($fp)
    ctx->pc = 0x22a1acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x159048u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x159048u, _value); } while (0);
    // 0x22a1b0: 0xa3ce000a  sb          $t6, 0xA($fp)
    ctx->pc = 0x22a1b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x15904Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x15904Au, _value); } while (0);
    // 0x22a1b4: 0xafcd0020  sw          $t5, 0x20($fp)
    ctx->pc = 0x22a1b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x159060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159060u, _value); } while (0);
    // 0x22a1b8: 0xa3ce0009  sb          $t6, 0x9($fp)
    ctx->pc = 0x22a1b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x159049u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x159049u, _value); } while (0);
    // 0x22a1bc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x22a1bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159058u, _value); } while (0);
    // 0x22a1c0: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x22a1c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15906Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15906Cu, _value); } while (0);
    // 0x22a1c4: 0xafcc0010  sw          $t4, 0x10($fp)
    ctx->pc = 0x22a1c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x159050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159050u, _value); } while (0);
    // 0x22a1c8: 0xafcd001c  sw          $t5, 0x1C($fp)
    ctx->pc = 0x22a1c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x15905Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15905Cu, _value); } while (0);
    // 0x22a1cc: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x22a1ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159078u, _value); } while (0);
    // 0x22a1d0: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x22a1d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159084u, _value); } while (0);
    // 0x22a1d4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x22a1d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15907Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15907Cu, _value); } while (0);
label_22a1d8:
    // 0x22a1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a1dc:
    // 0x22a1dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a1dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a1e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22a1e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a1e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22a1e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a1e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22a1e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a1ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22a1ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a1f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x22a1f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a1f4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x22a1f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22a1f8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x22a1f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1FCu;
        // 0x22a200: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A204u;
    // 0x22a204: 0x0  nop
    ctx->pc = 0x22a204u;
    // NOP
    ctx->pc = 0x22a208u;
}
