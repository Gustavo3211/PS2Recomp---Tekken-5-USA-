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

// Function: sub_00492660
// Address: 0x492660 - 0x492810
void sub_00492660_0x492660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492660_0x492660");
#endif

    ctx->pc = 0x492660u;

    // 0x492660: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x492660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x492664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x492664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x492668: 0x244206b8  addiu       $v0, $v0, 0x6B8
    ctx->pc = 0x492668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1720));
    // 0x49266c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x49266cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x492670: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492670u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F06B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06B8u, _value); } while (0);
    // 0x492674: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492678: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x492678u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F06BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06BAu, _value); } while (0);
    // 0x49267c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492680: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x492680u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F06BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06BCu, _value); } while (0);
    // 0x492684: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492688: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x492688u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F06BEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06BEu, _value); } while (0);
    // 0x49268c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492690: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x492690u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F06C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06C0u, _value); } while (0);
    // 0x492694: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492698: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x492698u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F06C2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06C2u, _value); } while (0);
    // 0x49269c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926a0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4926a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F06C4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06C4u, _value); } while (0);
    // 0x4926a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926a8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4926a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F06C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06C6u, _value); } while (0);
    // 0x4926ac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926b0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4926b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F06C8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06C8u, _value); } while (0);
    // 0x4926b4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926b8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4926b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F06CAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F06CAu, _value); } while (0);
    // 0x4926bc: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x4926bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x4926c0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x4926c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4926c4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x4926c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4926c8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4926c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0738u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0738u, _value); } while (0);
    // 0x4926cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926d0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4926d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F073Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F073Au, _value); } while (0);
    // 0x4926d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926d8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4926d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F073Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F073Cu, _value); } while (0);
    // 0x4926dc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x4926dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x4926e0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4926e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0738u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0738u, _value); } while (0);
    // 0x4926e4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926e8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4926e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F073Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F073Au, _value); } while (0);
    // 0x4926ec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926f0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4926f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F073Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F073Cu, _value); } while (0);
    // 0x4926f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4926f8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4926f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F073Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F073Eu, _value); } while (0);
    // 0x4926fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4926fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492700: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492700u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0740u, _value); } while (0);
    // 0x492704: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492708: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492708u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0742u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0742u, _value); } while (0);
    // 0x49270c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492710: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x492710u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0744u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0744u, _value); } while (0);
    // 0x492714: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492718: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492718u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0746u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0746u, _value); } while (0);
    // 0x49271c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492720: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492720u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0748u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0748u, _value); } while (0);
    // 0x492724: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492728: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492728u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F074Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F074Au, _value); } while (0);
    // 0x49272c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492730: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492730u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F074Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F074Cu, _value); } while (0);
    // 0x492734: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492738: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492738u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F074Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F074Eu, _value); } while (0);
    // 0x49273c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492740: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492740u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0750u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0750u, _value); } while (0);
    // 0x492744: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492748: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492748u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0752u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0752u, _value); } while (0);
    // 0x49274c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492750: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492750u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0754u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0754u, _value); } while (0);
    // 0x492754: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492758: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492758u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0756u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0756u, _value); } while (0);
    // 0x49275c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492760: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492760u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0758u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0758u, _value); } while (0);
    // 0x492764: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492768: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492768u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F075Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F075Au, _value); } while (0);
    // 0x49276c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49276cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492770: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492770u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F075Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F075Cu, _value); } while (0);
    // 0x492774: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492778: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492778u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F075Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F075Eu, _value); } while (0);
    // 0x49277c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492780: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492780u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0760u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0760u, _value); } while (0);
    // 0x492784: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492788: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492788u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0762u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0762u, _value); } while (0);
    // 0x49278c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492790: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492790u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0764u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0764u, _value); } while (0);
    // 0x492794: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492798: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492798u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0766u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0766u, _value); } while (0);
    // 0x49279c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4927a0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4927a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0768u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0768u, _value); } while (0);
    // 0x4927a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4927a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4927a8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4927a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F076Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F076Au, _value); } while (0);
    // 0x4927ac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4927acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4927b0: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x4927b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F076Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F076Cu, _value); } while (0);
    // 0x4927b4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4927b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4927b8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x4927b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4927bc: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x4927bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x4927c0: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x4927c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F076Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F076Eu, _value); } while (0);
    // 0x4927c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4927c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4927c8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4927c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0770u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0770u, _value); } while (0);
    // 0x4927cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4927ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4927d0: 0x24631500  addiu       $v1, $v1, 0x1500
    ctx->pc = 0x4927d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5376));
    // 0x4927d4: 0x2405636f  addiu       $a1, $zero, 0x636F
    ctx->pc = 0x4927d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25455));
    // 0x4927d8: 0x24046c64  addiu       $a0, $zero, 0x6C64
    ctx->pc = 0x4927d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27748));
    // 0x4927dc: 0xa4460002  sh          $a2, 0x2($v0)
    ctx->pc = 0x4927dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0774u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0774u, _value); } while (0);
    // 0x4927e0: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x4927e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0772u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0772u, _value); } while (0);
    // 0x4927e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4927e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4927e8: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x4927e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x4927ec: 0xa424f2aa  sh          $a0, -0xD56($at)
    ctx->pc = 0x4927ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F07AAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F07AAu, _value); } while (0);
    // 0x4927f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4927f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4927f4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x4927f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x4927f8: 0xa425f2a8  sh          $a1, -0xD58($at)
    ctx->pc = 0x4927f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F07A8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F07A8u, _value); } while (0);
    // 0x4927fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4927fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x492800: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x492800u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x492804: 0x3e00008  jr          $ra
    ctx->pc = 0x492804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x492808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492804u;
        // 0x492808: 0xa420f1c6  sh          $zero, -0xE3A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294963654), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49280Cu;
    // 0x49280c: 0x0  nop
    ctx->pc = 0x49280cu;
    // NOP
    ctx->pc = 0x492810u;
}
