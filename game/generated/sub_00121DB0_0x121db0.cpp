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

// Function: sub_00121DB0
// Address: 0x121db0 - 0x121fd0
void sub_00121DB0_0x121db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121DB0_0x121db0");
#endif

    ctx->pc = 0x121db0u;

    // 0x121db0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x121db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x121db4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x121db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121db8: 0x2442fbf8  addiu       $v0, $v0, -0x408
    ctx->pc = 0x121db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966264));
    // 0x121dbc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x121dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x121dc0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x121dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121dc4: 0x3c070013  lui         $a3, 0x13
    ctx->pc = 0x121dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)19 << 16));
    // 0x121dc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121dcc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x121dccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFBF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFBF8u, _value); } while (0);
    // 0x121dd0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x121dd0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFBF9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFBF9u, _value); } while (0);
    // 0x121dd4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x121dd4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFBFAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFBFAu, _value); } while (0);
    // 0x121dd8: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x121dd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFBFBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFBFBu, _value); } while (0);
    // 0x121ddc: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x121ddcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFBFCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFBFCu, _value); } while (0);
    // 0x121de0: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x121de0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFBFDu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFBFDu, _value); } while (0);
    // 0x121de4: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x121de4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFBFEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFBFEu, _value); } while (0);
    // 0x121de8: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x121de8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFBFFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFBFFu, _value); } while (0);
    // 0x121dec: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x121decu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC00u, _value); } while (0);
    // 0x121df0: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x121df0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC01u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC01u, _value); } while (0);
    // 0x121df4: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x121df4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC02u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC02u, _value); } while (0);
    // 0x121df8: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x121df8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC03u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC03u, _value); } while (0);
    // 0x121dfc: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x121dfcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC04u, _value); } while (0);
    // 0x121e00: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x121e00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC05u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC05u, _value); } while (0);
    // 0x121e04: 0xa043000e  sb          $v1, 0xE($v0)
    ctx->pc = 0x121e04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC06u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC06u, _value); } while (0);
    // 0x121e08: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x121e08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC07u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC07u, _value); } while (0);
    // 0x121e0c: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x121e0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC08u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC08u, _value); } while (0);
    // 0x121e10: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x121e10u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC09u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC09u, _value); } while (0);
    // 0x121e14: 0xa0430012  sb          $v1, 0x12($v0)
    ctx->pc = 0x121e14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC0Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC0Au, _value); } while (0);
    // 0x121e18: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x121e18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC0Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC0Bu, _value); } while (0);
    // 0x121e1c: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x121e1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC0Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC0Cu, _value); } while (0);
    // 0x121e20: 0xa0430015  sb          $v1, 0x15($v0)
    ctx->pc = 0x121e20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC0Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC0Du, _value); } while (0);
    // 0x121e24: 0xa0430016  sb          $v1, 0x16($v0)
    ctx->pc = 0x121e24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC0Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC0Eu, _value); } while (0);
    // 0x121e28: 0xa0430017  sb          $v1, 0x17($v0)
    ctx->pc = 0x121e28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC0Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC0Fu, _value); } while (0);
    // 0x121e2c: 0xa0430018  sb          $v1, 0x18($v0)
    ctx->pc = 0x121e2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC10u, _value); } while (0);
    // 0x121e30: 0xa0430019  sb          $v1, 0x19($v0)
    ctx->pc = 0x121e30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC11u, _value); } while (0);
    // 0x121e34: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x121e34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC12u, _value); } while (0);
    // 0x121e38: 0xa043001b  sb          $v1, 0x1B($v0)
    ctx->pc = 0x121e38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC13u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC13u, _value); } while (0);
    // 0x121e3c: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x121e3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC14u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC14u, _value); } while (0);
    // 0x121e40: 0xa043001d  sb          $v1, 0x1D($v0)
    ctx->pc = 0x121e40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC15u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC15u, _value); } while (0);
    // 0x121e44: 0xa043001e  sb          $v1, 0x1E($v0)
    ctx->pc = 0x121e44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC16u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC16u, _value); } while (0);
    // 0x121e48: 0xa0440020  sb          $a0, 0x20($v0)
    ctx->pc = 0x121e48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC18u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC18u, _value); } while (0);
    // 0x121e4c: 0xa0440021  sb          $a0, 0x21($v0)
    ctx->pc = 0x121e4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC19u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC19u, _value); } while (0);
    // 0x121e50: 0xa0440022  sb          $a0, 0x22($v0)
    ctx->pc = 0x121e50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC1Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC1Au, _value); } while (0);
    // 0x121e54: 0xa0450042  sb          $a1, 0x42($v0)
    ctx->pc = 0x121e54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1EFC3Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC3Au, _value); } while (0);
    // 0x121e58: 0xa0440023  sb          $a0, 0x23($v0)
    ctx->pc = 0x121e58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC1Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC1Bu, _value); } while (0);
    // 0x121e5c: 0xa0440024  sb          $a0, 0x24($v0)
    ctx->pc = 0x121e5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC1Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC1Cu, _value); } while (0);
    // 0x121e60: 0xa0440025  sb          $a0, 0x25($v0)
    ctx->pc = 0x121e60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC1Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC1Du, _value); } while (0);
    // 0x121e64: 0xa0440026  sb          $a0, 0x26($v0)
    ctx->pc = 0x121e64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC1Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC1Eu, _value); } while (0);
    // 0x121e68: 0xa0440027  sb          $a0, 0x27($v0)
    ctx->pc = 0x121e68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC1Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC1Fu, _value); } while (0);
    // 0x121e6c: 0xa0440028  sb          $a0, 0x28($v0)
    ctx->pc = 0x121e6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC20u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC20u, _value); } while (0);
    // 0x121e70: 0xa0440029  sb          $a0, 0x29($v0)
    ctx->pc = 0x121e70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC21u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC21u, _value); } while (0);
    // 0x121e74: 0xa044002a  sb          $a0, 0x2A($v0)
    ctx->pc = 0x121e74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC22u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC22u, _value); } while (0);
    // 0x121e78: 0xa044002b  sb          $a0, 0x2B($v0)
    ctx->pc = 0x121e78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC23u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC23u, _value); } while (0);
    // 0x121e7c: 0xa044002c  sb          $a0, 0x2C($v0)
    ctx->pc = 0x121e7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC24u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC24u, _value); } while (0);
    // 0x121e80: 0xa044002d  sb          $a0, 0x2D($v0)
    ctx->pc = 0x121e80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC25u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC25u, _value); } while (0);
    // 0x121e84: 0xa044002e  sb          $a0, 0x2E($v0)
    ctx->pc = 0x121e84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC26u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC26u, _value); } while (0);
    // 0x121e88: 0xa044002f  sb          $a0, 0x2F($v0)
    ctx->pc = 0x121e88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC27u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC27u, _value); } while (0);
    // 0x121e8c: 0xa0440030  sb          $a0, 0x30($v0)
    ctx->pc = 0x121e8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC28u, _value); } while (0);
    // 0x121e90: 0xa0440031  sb          $a0, 0x31($v0)
    ctx->pc = 0x121e90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC29u, _value); } while (0);
    // 0x121e94: 0xa0440032  sb          $a0, 0x32($v0)
    ctx->pc = 0x121e94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC2Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC2Au, _value); } while (0);
    // 0x121e98: 0xa0440033  sb          $a0, 0x33($v0)
    ctx->pc = 0x121e98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC2Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC2Bu, _value); } while (0);
    // 0x121e9c: 0xa0440034  sb          $a0, 0x34($v0)
    ctx->pc = 0x121e9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC2Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC2Cu, _value); } while (0);
    // 0x121ea0: 0xa0440035  sb          $a0, 0x35($v0)
    ctx->pc = 0x121ea0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC2Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC2Du, _value); } while (0);
    // 0x121ea4: 0xa0440036  sb          $a0, 0x36($v0)
    ctx->pc = 0x121ea4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC2Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC2Eu, _value); } while (0);
    // 0x121ea8: 0xa0440037  sb          $a0, 0x37($v0)
    ctx->pc = 0x121ea8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC2Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC2Fu, _value); } while (0);
    // 0x121eac: 0xa0440038  sb          $a0, 0x38($v0)
    ctx->pc = 0x121eacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC30u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC30u, _value); } while (0);
    // 0x121eb0: 0xa0440039  sb          $a0, 0x39($v0)
    ctx->pc = 0x121eb0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC31u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC31u, _value); } while (0);
    // 0x121eb4: 0xa044003a  sb          $a0, 0x3A($v0)
    ctx->pc = 0x121eb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC32u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC32u, _value); } while (0);
    // 0x121eb8: 0xa044003b  sb          $a0, 0x3B($v0)
    ctx->pc = 0x121eb8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC33u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC33u, _value); } while (0);
    // 0x121ebc: 0xa044003c  sb          $a0, 0x3C($v0)
    ctx->pc = 0x121ebcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC34u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC34u, _value); } while (0);
    // 0x121ec0: 0xa044003d  sb          $a0, 0x3D($v0)
    ctx->pc = 0x121ec0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC35u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC35u, _value); } while (0);
    // 0x121ec4: 0xa044003e  sb          $a0, 0x3E($v0)
    ctx->pc = 0x121ec4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC36u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC36u, _value); } while (0);
    // 0x121ec8: 0xa044003f  sb          $a0, 0x3F($v0)
    ctx->pc = 0x121ec8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC37u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC37u, _value); } while (0);
    // 0x121ecc: 0xa0450040  sb          $a1, 0x40($v0)
    ctx->pc = 0x121eccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1EFC38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC38u, _value); } while (0);
    // 0x121ed0: 0xa0450041  sb          $a1, 0x41($v0)
    ctx->pc = 0x121ed0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1EFC39u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC39u, _value); } while (0);
    // 0x121ed4: 0xa0440043  sb          $a0, 0x43($v0)
    ctx->pc = 0x121ed4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC3Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC3Bu, _value); } while (0);
    // 0x121ed8: 0xa0440044  sb          $a0, 0x44($v0)
    ctx->pc = 0x121ed8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC3Cu, _value); } while (0);
    // 0x121edc: 0xa044004b  sb          $a0, 0x4B($v0)
    ctx->pc = 0x121edcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC43u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC43u, _value); } while (0);
    // 0x121ee0: 0xa0440045  sb          $a0, 0x45($v0)
    ctx->pc = 0x121ee0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC3Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC3Du, _value); } while (0);
    // 0x121ee4: 0xa0440046  sb          $a0, 0x46($v0)
    ctx->pc = 0x121ee4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC3Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC3Eu, _value); } while (0);
    // 0x121ee8: 0xa0440047  sb          $a0, 0x47($v0)
    ctx->pc = 0x121ee8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC3Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC3Fu, _value); } while (0);
    // 0x121eec: 0xa0440048  sb          $a0, 0x48($v0)
    ctx->pc = 0x121eecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC40u, _value); } while (0);
    // 0x121ef0: 0xa0440049  sb          $a0, 0x49($v0)
    ctx->pc = 0x121ef0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC41u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC41u, _value); } while (0);
    // 0x121ef4: 0xa044004a  sb          $a0, 0x4A($v0)
    ctx->pc = 0x121ef4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EFC42u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC42u, _value); } while (0);
    // 0x121ef8: 0xa043004c  sb          $v1, 0x4C($v0)
    ctx->pc = 0x121ef8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC44u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC44u, _value); } while (0);
    // 0x121efc: 0xa043004d  sb          $v1, 0x4D($v0)
    ctx->pc = 0x121efcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC45u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC45u, _value); } while (0);
    // 0x121f00: 0xa043004e  sb          $v1, 0x4E($v0)
    ctx->pc = 0x121f00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC46u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC46u, _value); } while (0);
    // 0x121f04: 0xa040004f  sb          $zero, 0x4F($v0)
    ctx->pc = 0x121f04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC47u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC47u, _value); } while (0);
    // 0x121f08: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x121f08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC48u, _value); } while (0);
    // 0x121f0c: 0xa0400051  sb          $zero, 0x51($v0)
    ctx->pc = 0x121f0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC49u, _value); } while (0);
    // 0x121f10: 0xa0400052  sb          $zero, 0x52($v0)
    ctx->pc = 0x121f10u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC4Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC4Au, _value); } while (0);
    // 0x121f14: 0xa0400053  sb          $zero, 0x53($v0)
    ctx->pc = 0x121f14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC4Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC4Bu, _value); } while (0);
    // 0x121f18: 0xa0400054  sb          $zero, 0x54($v0)
    ctx->pc = 0x121f18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC4Cu, _value); } while (0);
    // 0x121f1c: 0xa0400055  sb          $zero, 0x55($v0)
    ctx->pc = 0x121f1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC4Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC4Du, _value); } while (0);
    // 0x121f20: 0xa0400056  sb          $zero, 0x56($v0)
    ctx->pc = 0x121f20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC4Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC4Eu, _value); } while (0);
    // 0x121f24: 0xa0400057  sb          $zero, 0x57($v0)
    ctx->pc = 0x121f24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC4Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC4Fu, _value); } while (0);
    // 0x121f28: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x121f28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC50u, _value); } while (0);
    // 0x121f2c: 0xa0400059  sb          $zero, 0x59($v0)
    ctx->pc = 0x121f2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EFC51u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC51u, _value); } while (0);
    // 0x121f30: 0xa043005a  sb          $v1, 0x5A($v0)
    ctx->pc = 0x121f30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC52u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC52u, _value); } while (0);
    // 0x121f34: 0xa043005b  sb          $v1, 0x5B($v0)
    ctx->pc = 0x121f34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC53u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC53u, _value); } while (0);
    // 0x121f38: 0xa043005c  sb          $v1, 0x5C($v0)
    ctx->pc = 0x121f38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC54u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC54u, _value); } while (0);
    // 0x121f3c: 0xa043005d  sb          $v1, 0x5D($v0)
    ctx->pc = 0x121f3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC55u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC55u, _value); } while (0);
    // 0x121f40: 0xa043005e  sb          $v1, 0x5E($v0)
    ctx->pc = 0x121f40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC56u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC56u, _value); } while (0);
    // 0x121f44: 0xa043005f  sb          $v1, 0x5F($v0)
    ctx->pc = 0x121f44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC57u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC57u, _value); } while (0);
    // 0x121f48: 0xa0430060  sb          $v1, 0x60($v0)
    ctx->pc = 0x121f48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC58u, _value); } while (0);
    // 0x121f4c: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x121f4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC59u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC59u, _value); } while (0);
    // 0x121f50: 0xa0430062  sb          $v1, 0x62($v0)
    ctx->pc = 0x121f50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC5Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC5Au, _value); } while (0);
    // 0x121f54: 0xa0430063  sb          $v1, 0x63($v0)
    ctx->pc = 0x121f54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC5Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC5Bu, _value); } while (0);
    // 0x121f58: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x121f58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC5Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC5Cu, _value); } while (0);
    // 0x121f5c: 0xa0430065  sb          $v1, 0x65($v0)
    ctx->pc = 0x121f5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC5Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC5Du, _value); } while (0);
    // 0x121f60: 0xa0430066  sb          $v1, 0x66($v0)
    ctx->pc = 0x121f60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC5Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC5Eu, _value); } while (0);
    // 0x121f64: 0xa0430079  sb          $v1, 0x79($v0)
    ctx->pc = 0x121f64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC71u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC71u, _value); } while (0);
    // 0x121f68: 0xace64384  sw          $a2, 0x4384($a3)
    ctx->pc = 0x121f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x134384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x134384u, _value); } while (0);
    // 0x121f6c: 0xa0430067  sb          $v1, 0x67($v0)
    ctx->pc = 0x121f6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC5Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC5Fu, _value); } while (0);
    // 0x121f70: 0xa0430068  sb          $v1, 0x68($v0)
    ctx->pc = 0x121f70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC60u, _value); } while (0);
    // 0x121f74: 0xa0430069  sb          $v1, 0x69($v0)
    ctx->pc = 0x121f74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC61u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC61u, _value); } while (0);
    // 0x121f78: 0xa043006a  sb          $v1, 0x6A($v0)
    ctx->pc = 0x121f78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC62u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC62u, _value); } while (0);
    // 0x121f7c: 0xa043006b  sb          $v1, 0x6B($v0)
    ctx->pc = 0x121f7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC63u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC63u, _value); } while (0);
    // 0x121f80: 0xa043006c  sb          $v1, 0x6C($v0)
    ctx->pc = 0x121f80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC64u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC64u, _value); } while (0);
    // 0x121f84: 0xa043006d  sb          $v1, 0x6D($v0)
    ctx->pc = 0x121f84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC65u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC65u, _value); } while (0);
    // 0x121f88: 0xa043006e  sb          $v1, 0x6E($v0)
    ctx->pc = 0x121f88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC66u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC66u, _value); } while (0);
    // 0x121f8c: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x121f8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC67u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC67u, _value); } while (0);
    // 0x121f90: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x121f90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC68u, _value); } while (0);
    // 0x121f94: 0xa0430071  sb          $v1, 0x71($v0)
    ctx->pc = 0x121f94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC69u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC69u, _value); } while (0);
    // 0x121f98: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x121f98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC6Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC6Au, _value); } while (0);
    // 0x121f9c: 0xa0430073  sb          $v1, 0x73($v0)
    ctx->pc = 0x121f9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC6Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC6Bu, _value); } while (0);
    // 0x121fa0: 0xa0430074  sb          $v1, 0x74($v0)
    ctx->pc = 0x121fa0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC6Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC6Cu, _value); } while (0);
    // 0x121fa4: 0xa0430075  sb          $v1, 0x75($v0)
    ctx->pc = 0x121fa4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC6Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC6Du, _value); } while (0);
    // 0x121fa8: 0xa0430076  sb          $v1, 0x76($v0)
    ctx->pc = 0x121fa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC6Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC6Eu, _value); } while (0);
    // 0x121fac: 0xa0430077  sb          $v1, 0x77($v0)
    ctx->pc = 0x121facu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EFC6Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EFC6Fu, _value); } while (0);
    // 0x121fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x121FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FB0u;
        // 0x121fb4: 0xa0430078  sb          $v1, 0x78($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121FB8u;
    // 0x121fb8: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x121fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x121fbc: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x121fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x121fc0: 0x244220a0  addiu       $v0, $v0, 0x20A0
    ctx->pc = 0x121fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8352));
    // 0x121fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x121FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FC4u;
        // 0x121fc8: 0xac624380  sw          $v0, 0x4380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121FCCu;
    // 0x121fcc: 0x0  nop
    ctx->pc = 0x121fccu;
    // NOP
    ctx->pc = 0x121fd0u;
}
